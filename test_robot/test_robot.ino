#include <Servo.h>
//L293D Motor Drive
#define MOTOR1_A 2
#define MOTOR1_B 3
#define MOTOR2_A 4
#define MOTOR2_B 5
#define MOTOR3_A 6
#define MOTOR3_B 7
#define MOTOR4_A 8
#define MOTOR4_B 9

void setup() {
  pinMode(MOTOR1_A, OUTPUT);
  pinMode(MOTOR1_B, OUTPUT);
  pinMode(MOTOR2_A, OUTPUT);
  pinMode(MOTOR2_B, OUTPUT);
  pinMode(MOTOR3_A, OUTPUT);
  pinMode(MOTOR3_B, OUTPUT);
  pinMode(MOTOR4_A, OUTPUT);
  pinMode(MOTOR4_B, OUTPUT);
  //
  digitalWrite(MOTOR1_A, HIGH);
  digitalWrite(MOTOR1_B, LOW);
  delay(50);
  digitalWrite(MOTOR1_A, LOW);
  digitalWrite(MOTOR1_B, LOW);
  delay(10);
}

void loop() {
  // put your main code here, to run repeatedly:

}
