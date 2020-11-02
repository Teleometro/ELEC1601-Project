#include "misc.h"

#include "ManualControlModule.h"

void setup() 
{
  Serial.begin(9600);

  ManualControlSetup();
}

void loop() 
{
  ManualControlLoop();
}
