# Concentration Lamp - Arduino Code

## Overview

Welcome to the Concentration Lamp project, a device designed to enhance focus during study sessions by integrating a wireless charging feature and a sleek design inspired by the movie "Inception."

## Features

- Wireless charging indicator with subtle light.
- Sleek black design for a focused study environment.

# Servo and NeoPixel LED Control

This Arduino sketch demonstrates the control of a servo motor and NeoPixel LEDs using the Adafruit_NeoPixel library.

## Hardware Requirements

- Arduino board
- Servo motor (e.g., FS90R)
- NeoPixel LED strip
- Jumper wires

## Circuit Connection

Connect the servo signal line to digital pin 9 on the Arduino board. Connect the NeoPixel LED strip to digital pin 6.

## Libraries

Ensure that the following libraries are installed in your Arduino IDE:

- [Servo](https://www.arduino.cc/en/reference/servo)
- [Adafruit_NeoPixel](https://github.com/adafruit/Adafruit_NeoPixel)

## Usage

1. Adjust the `LED_PIN` and `NUM_LEDS` constants based on your LED strip configuration.
2. Upload the sketch to your Arduino board.
3. Observe the servo motor rotating clockwise and counterclockwise alternately while turning on and off the NeoPixel LEDs.

## Code Overview

The code includes a setup function that initializes the servo and NeoPixel strip. The loop function then controls the servo to rotate and activates the LEDs in different sequences.

Feel free to modify the code to suit your specific hardware configuration and desired behavior.

## License

This code is provided under the [MIT License](LICENSE).
## Authors

- [Yahan Xie](link-to-profile): Documentation, idea impress, User Interacting 
- [Yuanhao Li](link-to-profile): Filming, 3D Modelling, Blending
- [Shunxi Wi](link-to-profile): Coding, Making Prototype

