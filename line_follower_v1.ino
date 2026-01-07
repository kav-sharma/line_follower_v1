#include <AFMotor.h>

// Motors
AF_DCMotor motor1(3); // Left motor
AF_DCMotor motor2(4); // Right motor

// Sensor pins
int LeftSensor = 2;   // D2
int RightSensor = 3;  // D3
void setup() {

  pinMode(LeftSensor, INPUT);
  pinMode(RightSensor, INPUT);

  motor1.setSpeed(100);
  motor2.setSpeed(100);
}

void loop() {
  int L = digitalRead(LeftSensor);
  int R = digitalRead(RightSensor);

  // Both sensors on white → go forward
  if (L == 0 && R == 0) {
    motor1.run(BACKWARD);
    motor2.run(FORWARD);
  }

  // Line on left → turn left
  else if (L == 1 && R == 0) {
    motor1.run(BACKWARD);
    motor2.run(FORWARD);
  }

  // Line on right → turn right
  else if (L == 0 && R == 1) {
    motor1.run(FORWARD);
    motor2.run(BACKWARD);
  }

  // Both sensors on line → go forward
  else if (L == 1 && R == 1) {
    motor1.run(FORWARD);
    motor2.run(FORWARD);
  }
}
