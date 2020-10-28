#include "test.h"

void setup() {
  Serial.begin(9600);

  //these two lines and their associated files can be deleted, I was just checking whether #include was working
  Serial.println(teststr);
  testFunc();
}

void loop() 
{
  
}
