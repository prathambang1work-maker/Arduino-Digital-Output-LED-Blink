// Arduino LED Blink Project
// Author: Pratham Bang
// Description: This program blinks the built-in LED on the Arduino board
// at a 1-second interval. It is a basic project to understand digital output.

// the setup function runs once when the board is powered on or reset
void setup() {
  // initialize the built-in LED pin as an output
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs continuously
void loop() {
  // turn the LED ON
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // wait for 1 second

  // turn the LED OFF
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // wait for 1 second
}
