/*
  Activity 02 - Push Button
  Description: Reads the state of a push button connected to pin 2
  (with an external pull-down resistor) and prints the state to the
  Serial Monitor.
  Board: Arduino UNO
*/

const int buttonPin = 2;   // Pin connected to the push button
int buttonState = 0;       // Variable to store the button state

void setup() {
  pinMode(buttonPin, INPUT);  // Set the button pin as an input
  Serial.begin(9600);          // Start serial communication at 9600 baud
}

void loop() {
  buttonState = digitalRead(buttonPin);  // Read the button state

  if (buttonState == HIGH) {
    Serial.println("Button Pressed");
  } else {
    Serial.println("Button Released");
  }

  delay(200);  // Small delay to avoid flooding the Serial Monitor
}
