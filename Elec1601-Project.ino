#include "misc.h"

#include "ManualControlModule.h"
#include "LineTraceModule.h"

void setup() 
{
  Serial.begin(9600);

  ManualControlSetup();
  LineTraceSetup();
}


void loop() 
{
  ManualControlLoop();
  LineTraceLoop();
}
