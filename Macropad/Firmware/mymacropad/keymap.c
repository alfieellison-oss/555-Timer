#include QMK_KEYBOARD_H

enum custom_layers {
    BASE,
    VIEW
};

const uint16_t PROGMEM keymaps[][1][5] = {

    [BASE] = {
        { KC_ESC,LCTRL( KC_Z), LCTRL(KC_Y), KC_DEL,LCTRL(KC_S) }
        // ESC | Undo        | Redo       | Delete | Save
    },

    [VIEW] = {
        { KC_ESC, KC_S, KC_D, KC_H, KC_F }
        // ESC | Sketch| Dimension| Hole| Fillet
    }
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(KC_MS_WH_UP);   // Zoom in
    } else {
        tap_code(KC_MS_WH_DOWN); // Zoom out
    }
    return true;
}

// Encoder switch → toggle view layer
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (keycode == KC_NO && record->event.pressed) {
        layer_invert(VIEW);
        return false;
    }
    return true;
}
