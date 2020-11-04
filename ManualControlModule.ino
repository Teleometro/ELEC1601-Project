#include "ManualControlModule.h"

void ManualControlSetup()
{
  pinMode(JoyStick_Z, INPUT);
  Serial.begin(9600); // 9600 bps
}
void ManualControlLoop()
{
  //Short ints take up half the memory of a normal int, I think.
  short int x,y,z;
  x = analogRead(JoyStick_X);
  y = analogRead(JoyStick_Y);
  z = digitalRead(JoyStick_Z);

  Serial.print("Joystick: ");
  Serial.print(x ,DEC);
  Serial.print(",");
  Serial.print(y ,DEC);
  Serial.print(",");
  Serial.println(z ,DEC);
  delay(100);
}
