/*
 * motorTest sketch for the L293 library
 * This code is in the public domain.
 * This sketch was written to be used as an example for how to use the L293 library.
 * It will turn a motor in alternating directions at a varying speed.
 * It will begin supplying the motor with little power, gradually increase the power until it is supplying max power, then do it all over again.
 * For this sketch to be work, the L293 must be properly wired and the following pins must be connected:
 * Arduino digital pin 2 to L293 input pin 1
 * Arduino digital pin 4 to L293 input pin 2
 * Arduino digital pin 3 (PWM pin) to L293 enable pin 1
 */


// include the L293 library
#include <L293.h>

// create a new motor called "myMotor"
L293 myMotor(2, 4, 3);

void setup()
{
  // connect to the computer's serial monitor at 9600 baud
  Serial.begin(9600);
  // give a 1 second delay for the user to get ready
  delay(1000);
}

void loop()
{
  // make a new loop for cycling through the various speeds / power levels
  for (uint8_t i=1; i<=10; i++)
  {
    // print the current rotation speed to the serial monitor
    Serial.print("Speed ");
    Serial.println(i);
    // please note that the second parameter (the "duration" one) is entirely optional.
    // rotate the motor forwards (first argument, a positive number) for half a second (second argument, 0.5)
    myMotor.setState(i, 0.5);
    // stop the motor (first argument, 0) for a tenth of a second (second argument, 0.1)
    myMotor.setState(0, 0.1);
    // rotate the motor backwards (first argument, a negative number) for half a second (second argument, 0.5)
    myMotor.setState(i - i*2, 0.5);
    // stop the motor (first argument, 0) for a tenth of a second (second argument, 0.1)
    myMotor.setState(0, 0.1);
  }
}
