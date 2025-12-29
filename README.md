# Alfie's Blinky Project

Hello! This is my repo for a Blinky project! This was made as abit of fun while leanring to use 555 timing IC's in larger circuits..

<img src="https://github.com/alfieellison-oss/555-Timer/blob/main/555-Timer/3D%20view.png" width="600" />


## Features

- 10 LED's'

- A 555 IC
 
- A 4017 I/O expander IC

## PCB

Here are pictures of my pcb:

| \*\*Schematic\*\* | \*\*PCB\*\* |

|---------------|---------|
=======

<img src="https://github.com/alfieellison-oss/555-Timer/blob/main/555-Timer/Schematic.png" width="400" /> <img src="https://github.com/alfieellison-oss/555-Timer/blob/main/555-Timer/PCB.png" width="400" />



## Notes

- Making this is only my second time usign KiCAD so forgive any mistakes that have been made. this was my first time importng images into KiCAD and the only time i have made a non-rectangular PCB shape.

## BOM

| Ref    | Component             | Value / Description         | Footprint               | Qty |
| ------ | --------------------- | --------------------------- | ----------------------- | --- |
| C1     | Capacitor             | 0.01 µF (10 nF)             | Disc, THT, 5.0 mm pitch | 1   |
| C2     | Capacitor             | 1 µF                        | Disc, THT, 5.0 mm pitch | 1   |
| D1–D10 | LED                   | Standard 5 mm LED           | LED_THT:LED_D5.0mm      | 10  |
| R1     | Resistor              | 470 Ω                       | Axial THT, 7.62 mm      | 1   |
| R2     | Resistor              | 1 kΩ                        | Axial THT, 7.62 mm      | 1   |
| RV1    | Potentiometer         | 50 kΩ Trimmer               | Bourns 3296W (Vertical) | 1   |
| U1     | Timer IC              | NE555P                      | DIP-8                   | 1   |
| U2     | Decade Counter IC     | CD4017                      | DIP-16                  | 1   |
| PCB    | Printed Circuit Board | Custom PCB for this project | —                       | 1   |


