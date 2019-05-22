#include "arduino.h"

#include "L293.h"

L293::L293(uint8_t hiPin, uint8_t loPin, uint8_t pulsePin)
{
  positive = hiPin;
  negative = loPin;
  pwm = pulsePin;
  pinMode(positive, OUTPUT);
  pinMode(negative, OUTPUT);
  pinMode(pwm, OUTPUT);
}

void L293::setState(int8_t speedDigit, float moveDuration)
{
  if (speedDigit < 0)
  {
    digitalWrite(positive, LOW);
    digitalWrite(negative,  HIGH);
    speedy(speedDigit - speedDigit * 2);
  }
  
  else if (speedDigit > 0)
  {
    digitalWrite(negative, LOW);
    digitalWrite(positive,  HIGH);
    speedy(speedDigit);
  }
  
  else
  {
    digitalWrite(negative, LOW);
    digitalWrite(positive,  LOW);
  }
  delay(moveDuration * 1000);
}

void L293::speedy(uint8_t outOfTen)
{
  analogWrite(pwm, outOfTen * 25 + 5);
}
