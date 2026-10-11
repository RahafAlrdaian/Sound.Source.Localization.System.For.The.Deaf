# Sound Direction Detector 🎤

An Arduino project that detects the direction of a sound (Front / Back / Left / Right) using four microphones and displays the result on an I2C LCD screen.

## Components
- Arduino board (Uno or similar)
- 4 microphone modules (digital output)
- 16x2 LCD with I2C module (address `0x27`)
- Jumper wires

## Wiring
| Component | Pin |
|---|---|
| Front microphone | D2 |
| Back microphone | D3 |
| Left microphone | D4 |
| Right microphone | D5 |
| LCD (SDA / SCL) | A4 / A5 |

## Required Libraries
- `Wire` (built-in)
- `LiquidCrystal_I2C`

## How to Run
1. Open `Sound_Direction.ino` in the Arduino IDE.
2. Install the **LiquidCrystal_I2C** library from the Library Manager.
3. Select your board and port, then upload the sketch.
4. The LCD shows `Direction:` followed by the detected sound direction (or `None`).
