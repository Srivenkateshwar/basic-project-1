#include <AFMotor.h>
AF_DCMotor M1(2);
AF_DCMotor M2(3);

void setup() {
  M1.setSpeed(150);
  M2.setSpeed(250);
}

void loop() {
  M1.run(FORWARD);
  M2.run(FORWARD);
  delay(1000);
  M1.run(RELEASE);
  M2.run(RELEASE);
  delay(1000);
  M1.run(FORWARD);
  M2.run(BACKWARD);
  delay(1000);
  M1.run(RELEASE);
  M2.run(RELEASE);
  delay(1000);
}
