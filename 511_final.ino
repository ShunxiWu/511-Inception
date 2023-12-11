#include <Servo.h>
#include <Adafruit_NeoPixel.h>

#define LED_PIN 6
#define NUM_LEDS 30 // Modify based on the number of LEDs on your LED strip

Servo myservo;  // Create a servo object
Adafruit_NeoPixel strip(NUM_LEDS, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  myservo.attach(9);  // Connect the servo signal line to digital pin 9
  strip.begin();      // Initialize the LED strip
  strip.show();       // Ensure all LEDs are turned off
}

void loop() {
  // Clockwise rotation
  myservo.write(180);  // Writing a value higher than 90 usually makes the servo rotate clockwise
  delay(1000);  // Adjust the delay time based on the actual rotation speed of the servo

  // Turn on the LEDs
  for (int i = 0; i < strip.numPixels(); i++) {
    strip.setPixelColor(i, strip.Color(255, 255, 255)); // Set to white
  }
  strip.show();
  delay(1000);  // Delay for 10 seconds

  // Stop rotation
  myservo.write(90);  // Writing 90 usually stops the servo rotation
  delay(1000);  // Delay for 1 second

  // Delay for 10 seconds, then repeat the loop
  delay(10000);

  // Counterclockwise rotation
  myservo.write(0);  // Writing a value lower than 90 usually makes the servo rotate counterclockwise
  delay(1000);  // Similarly, adjust the delay time based on the actual rotation speed of the servo

  // Stop rotation
  myservo.write(90);  // Stop rotation
  delay(1000);  // Delay for 1 second

  // Turn off the LEDs
  for (int i = 0; i < strip.numPixels(); i++) {
    strip.setPixelColor(i, strip.Color(0, 0, 0)); // Turn off the LEDs
  }
  strip.show();

  // Delay for 10 seconds, then repeat the loop
  delay(10000);
}
