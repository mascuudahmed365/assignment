#include <Servo.h> // Include the Servo library

Servo myServo; // Create a servo object

void setup() {
  myServo.attach(9); // Attach the servo to pin 9
}

void loop() {
  // Move the servo to 90 degrees
  myServo.write(90); 
  delay(1000); // Wait for 1 second

  // Detach the servo to stop it
  myServo.detach();
  while (true) {
    // Do nothing, keeping the servo stopped
  }
}