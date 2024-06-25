/*
    Project name: ESP32 Motor Driver Module
    Modified Date: 24-06-2024
    Code by: Projectslearner
    Website: https://projectslearner.com/learn/esp32-motor-driver-module
*/

// Define the pins connected to the motor driver module
const int motorPin1 = 14; // GPIO pin connected to IN1
const int motorPin2 = 12; // GPIO pin connected to IN2
const int enablePin = 27; // GPIO pin connected to EN (PWM pin)

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  
  // Set the motor control pins as outputs
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(enablePin, OUTPUT);

  // Initialize the motor to be stopped
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  analogWrite(enablePin, 0);
}

void loop() {
  // Example: Rotate motor clockwise
  Serial.println("Rotating motor clockwise");
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  analogWrite(enablePin, 255); // Set speed to maximum
  delay(2000); // Rotate for 2 seconds

  // Stop the motor
  Serial.println("Stopping motor");
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  analogWrite(enablePin, 0);
  delay(1000); // Wait for 1 second

  // Example: Rotate motor counterclockwise
  Serial.println("Rotating motor counterclockwise");
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  analogWrite(enablePin, 255); // Set speed to maximum
  delay(2000); // Rotate for 2 seconds

  // Stop the motor
  Serial.println("Stopping motor");
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  analogWrite(enablePin, 0);
  delay(1000); // Wait for 1 second
}
