/*
  ==========================================================
   Arduino Capacitive Touch Sensor Light
  ==========================================================

  Description:
  A simple Arduino project demonstrating touch-controlled
  LED brightness using PWM fade-in and fade-out effects.

  Hardware:
  - Arduino Uno
  - Capacitive Touch Sensor
  - LED
  - 1 kΩ Resistor

  Connections:
  Touch Sensor OUT -> D2
  LED (+)          -> D5 (PWM)
  LED (-)          -> GND (through resistor)

  Author: Aayan Shaikh
  ==========================================================
*/

const int touchPin = 2;
const int ledPin = 5;

bool previousState = LOW;
bool ledState = false;

void setup() {
  pinMode(touchPin, INPUT);
  pinMode(ledPin, OUTPUT);
  analogWrite(ledPin, 0);
}

void loop() {

  bool currentState = digitalRead(touchPin);

  // Detect a new touch
  if (currentState == HIGH && previousState == LOW) {

    ledState = !ledState;

    if (ledState) {
      fadeIn();
    } else {
      fadeOut();
    }

    delay(150); // Debounce delay
  }

  previousState = currentState;
}

void fadeIn() {

  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(ledPin, brightness);
    delay(5);
  }

}

void fadeOut() {

  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(ledPin, brightness);
    delay(5);
  }

}
