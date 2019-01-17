/*
 * Invtrigfuncs.h - Library to use inverse trignometric functions
 * Written and created by Abhilash Patel
 * Turned into a library by yolo4lifegod
 * Released into the public domain
 */

#ifndef Invtrigfuncs_h
#define Invtrigfuncs_h

#include "Arduino.h"

class Invtrigfuncs
{
  public:
    Invtrigfuncs();
  private:
    float asin;
    float acos;
    float atan;
    float c;
    float out;
}

#endif
