# Concentration Lamp - Arduino Code

## Overview

Welcome to the Concentration Lamp project, a device designed to enhance focus during study sessions by integrating a wireless charging feature and a sleek design inspired by the movie "Inception."

## Features

- Wireless charging indicator with subtle light.
- Sleek black design for a focused study environment.

## Hardware Requirements

- [Adafruit BME280 Sensor](https://learn.adafruit.com/adafruit-bme280-humidity-barometric-pressure-temperature-sensor-breakout)
- Arduino board (e.g., Arduino Uno)
- Connecting wires

## Dependencies

- [Wire Library](https://www.arduino.cc/en/Reference/Wire)
- [SPI Library](https://www.arduino.cc/en/Reference/SPI)
- [Adafruit Sensor Library](https://github.com/adafruit/Adafruit_Sensor)
- [Adafruit BME280 Library](https://github.com/adafruit/Adafruit_BME280)

## Installation

1. Clone the repository to your local machine.
2. Install required libraries.
3. Connect the Adafruit BME280 sensor to your Arduino board.
4. Upload the code to your Arduino board using the Arduino IDE or your preferred method.

## Usage

- Open the Arduino IDE.
- Load the provided code.
- Connect your Arduino board to your computer.
- Upload the code to the board.
- Open the serial monitor to view temperature, pressure, altitude, and humidity readings from the BME280 sensor.

## Code Structure

- The `setup` function initializes the BME280 sensor and checks for its availability.
- The `loop` function continuously prints temperature, pressure, altitude, and humidity values.
- The `printValues` function retrieves sensor readings and outputs them to the serial monitor.

## Troubleshooting

If you encounter issues, make sure to check the wiring of the BME280 sensor and ensure that the required libraries are correctly installed.

## License

This code is licensed under the [MIT License](LICENSE).

## Authors

- [Yahan Xie](link-to-profile): Documentation, idea impress, User Interacting 
- [Yuanhao Li](link-to-profile): Filming, 3D Modelling, Blending
- [Shunxi Wi](link-to-profile): Coding, Making Prototype

