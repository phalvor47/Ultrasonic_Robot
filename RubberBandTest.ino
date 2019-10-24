#include <Servo.h>

const int SERVO_PIN = 9;

const int ARMED_SERVO_ANGLE = 90;
const int SHOOT_SERVO_ANGLE = 30;

const int DELAY_BEFORE_SHOOTING_MILLIS = 5000;

void setup() {
  const Servo shooter_servo = get_shooter_servo();
  delay(DELAY_BEFORE_SHOOTING_MILLIS);
  shoot_and_arm(shooter_servo);
  
}

void loop() {}

Servo get_shooter_servo() {
  Servo shooter_servo;
  shooter_servo.attach(SERVO_PIN);
  return shooter_servo;
}

void shoot(Servo shooter_servo) {
  shooter_servo.write(SHOOT_SERVO_ANGLE);
  static const int SHOOTING_TIME_MILLIS = 500;
  delay(SHOOTING_TIME_MILLIS);
}

void arm(Servo shooter_servo) {
  shooter_servo.write(ARMED_SERVO_ANGLE);
}

void shoot_and_arm(Servo shooter_servo) {
   shoot(shooter_servo);
   arm(shooter_servo);
}