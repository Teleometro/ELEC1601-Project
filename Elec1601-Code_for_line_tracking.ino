#include <Servo.h>
Servo servoRight;
Servo servoLeft;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(10, INPUT);
  pinMode(9, INPUT);
  pinMode(8, INPUT);

  servoRight.attach(13);
  servoLeft.attach(12);
}

void loop() {
  // put your main code here, to run repeatedly:
  int left, centre, right;
  left = digitalRead(10);
  centre = digitalRead(9);
  right = digitalRead(8);
  Serial.print(left);
  Serial.print(centre);
  Serial.println(right);

  if ((right == 0) and (centre == 0) and (left == 0)){
    servoLeft.writeMicroseconds(130);
    servoRight.writeMicroseconds(1700); }

  else if ((right == 1) and (centre == 1) and (left == 1)){
    servoLeft.writeMicroseconds(1500);
    servoRight.writeMicroseconds(1500); 

  
  }
   else if ((right == 1) and (left == 0)){
    servoLeft.writeMicroseconds(1300);
    servoRight.writeMicroseconds(1300); }

   else if ((right == 0) and (left == 1)){
    servoLeft.writeMicroseconds(1700);
    servoRight.writeMicroseconds(1700); }
}