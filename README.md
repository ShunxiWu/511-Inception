Concentration Lamp - Arduino Code
Overview
This repository contains the Arduino code for the Concentration Lamp project, a device designed to enhance focus during study sessions by integrating a wireless charging feature and a sleek design inspired by the movie "Inception."

Hardware Requirements
Adafruit BME280 Sensor
Arduino board (e.g., Arduino Uno)
Connecting wires
Dependencies
Wire Library
SPI Library
Adafruit Sensor Library
Adafruit BME280 Library
Installation
Clone the repository to your local machine.
Install the required libraries.
Connect the Adafruit BME280 sensor to your Arduino board.
Upload the code to your Arduino board using the Arduino IDE or your preferred method.
Usage
Open the Arduino IDE.
Load the provided code.
Connect your Arduino board to your computer.
Upload the code to the board.
Open the serial monitor to view temperature, pressure, altitude, and humidity readings from the BME280 sensor.
Code Structure
The setup function initializes the BME280 sensor and checks for its availability.
The loop function continuously prints temperature, pressure, altitude, and humidity values.
The printValues function retrieves sensor readings and outputs them to the serial monitor.
Troubleshooting
If you encounter issues, make sure to check the wiring of the BME280 sensor and ensure that the required libraries are correctly installed.

License
This code is licensed under the MIT License.

