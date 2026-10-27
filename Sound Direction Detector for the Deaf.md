# Sound Direction Detector for the Deaf 🎤

An Arduino-based prototype that helps deaf and hard-of-hearing people know **where a sound is coming from**. It detects the direction of a sound (**Front / Back / Left / Right**) using four microphones and shows the result on an I2C LCD screen.

> Graduation project, Bachelor of Computer Engineering, University of Hail (2024)

## Motivation

Sounds like a car horn, a doorbell, or someone calling your name carry important information, and direction matters as much as the sound itself. This project turns sound direction into a clear visual message so users can react quickly and stay aware of their surroundings.

## How It Works

1. Four microphone modules are placed facing front, back, left, and right.
2. The Arduino reads the digital output of each microphone.
3. It determines which microphone picked up the sound.
4. The LCD displays `Direction:` followed by the detected direction, or `None` when no sound is detected.

## Components

- Arduino board (Uno or similar)
- 4 microphone modules (digital output)
- 16x2 LCD with I2C module (address `0x27`)
- Jumper wires

## Wiring

| Component | Pin |
| --- | --- |
| Front microphone | D2 |
| Back microphone | D3 |
| Left microphone | D4 |
| Right microphone | D5 |
| LCD (SDA / SCL) | A4 / A5 |

**\[Add a photo of the circuit here\]**

## Required Libraries

- `Wire` (built-in)
- `LiquidCrystal_I2C`

## How to Run

1. Clone this repository:

   ```bash
   git clone https://github.com/RahafAlrdaian/sound-source-localization-for-the-deaf.git
   ```
2. Open `Sound_Direction.ino` in the Arduino IDE.
3. Install the **LiquidCrystal_I2C** library from the Library Manager.
4. Select your board and port, then upload the sketch.
5. Make a sound near any microphone and watch the LCD show the direction.

## Demo

**\[Add a photo or a short video / GIF of the prototype working\]**

## Limitations and Future Improvements

- Background noise can affect accuracy **\[edit if this matches your testing\]**
- Add more microphones for finer direction detection
- Make the device wearable (e.g. glasses or wristband)
- Add vibration or LED feedback alongside the LCD

## Tech Stack

C++ · Arduino · Digital microphone modules · I2C LCD

## Author

**Rahaf Abdullah AlRdaian** Computer Engineer | [LinkedIn](https://www.linkedin.com/in/rahafalrdaian)