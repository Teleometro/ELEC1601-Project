#pragma once
#include "misc.h"

//This module is deprecated (I think? we're using WASD instead right?)

//The BYTE data type only takes a single byte of storage. 
//Try to minimize how much memory you use up since the arduino is pretty limited
BYTE JoyStick_X = 0; //x
BYTE JoyStick_Y = 1; //y
BYTE JoyStick_Z = 3; //key

void ManualControlSetup();
void ManualControlLoop();
