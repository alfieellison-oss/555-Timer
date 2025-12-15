c

#pragma once

#define VENDOR_ID    0x1209
#define PRODUCT_ID   0x2040
#define DEVICE_VER   0x0001
#define MANUFACTURER "Alfie Ellison"
#define PRODUCT      "CAD Macropad"

// --------------------
// Keys (Direct Pins)
// --------------------
#define DIRECT_PINS { \
    { GP1, GP2, GP2, GP4, GP0 } \
}

#define DIRECT_PINS_COUNT 5
#define DEBOUNCE 5

// --------------------
// Rotary Encoder
// --------------------
#define ENCODERS_PAD_A { GP6 }
#define ENCODERS_PAD_B { GP29 }
#define ENCODER_RESOLUTION 4

// --------------------
// Encoder Switch
// --------------------
#define EXTRAKEY_ENABLE
#define GPIO_INPUT_PULLUP
#define GPIO_INPUT_LOW

// --------------------
// RGB (SK6812 MINI)
// --------------------
#define RGB_DI_PIN GP28
#define RGBLED_NUM 2
#define RGBLIGHT_LIMIT_VAL 80
#define RGBLIGHT_SLEEP

// --------------------
// USB
// --------------------
#define USB_POLLING_INTERVAL_MS 1
