#include <Arduino.h>

void setup() {
  // Initialize the built in LED pin as an output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);    // This turns the LED on
  delay(500);                         // This halts the program for about 500 milliseconds
  digitalWrite(LED_BUILTIN, LOW);     // This turns the LED off
  delay(500);                         // This halts the program for about 500 milliseconds
}
