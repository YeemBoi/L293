Hey there! Glad to see that you chose to read this.

This is a library for controlling multiple H-Bridges, specifically ones on an L293 motor-controlling IC. (AKA L293D, but L293NE and other brands work fine so I left it out of the name).

This library is in the public domain.

As opposed to having one object which controls the whole IC, each L293 object you create with this library controls one motor. When you are creating an object, there are three main arguments:
1: The pin that connects to the "A" input on the H-Bridge
2: The pin that connects to the "B" input on the H-Bridge
3: The PWM speed input on the H-Bridge

This library comes with one public function:
L293.setState(speed, duration)

The "speed" parameter accepts all whole numbers from -10 to 10. -10 is reverse at full speed, 10 is forwards at full speed, and 0 stops the motor. All the numbers in between give the motor the respective amount of power.

The "duration" parameter is optional. If you choose to use it, simply just enter the number of seconds that you would like the program to wait for while the motor moves. Unlike the previous parameter, decimals are accepted.

For information on how to wire up an L293, there is a great instructable here: http://www.instructables.com/id/L293D-Motor-Driver-Pinout-Diagram. Remember that credit for the instructable goes to the creator, Gautam1807, not me.

Feel free to use this library in your code and share it with your friends, or others who might like to use it. Also, if you're posting code that uses this library online, be sure to credit the library with the Github Link.



Enjoy!  :)
