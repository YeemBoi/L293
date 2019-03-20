#ifndef L293_h
#define L293_h

#include "arduino.h"

class L293
{
  public:
    L293(uint8_t, uint8_t, uint8_t);
    void setState(int8_t, float moveDuration = 0);

  private:
    void speedy(uint8_t);
    uint8_t positive;
    uint8_t negative;
    uint8_t pwm;
 };

#endif


