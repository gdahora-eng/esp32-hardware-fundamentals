#include <Servo.h>

Servo servo1; // create Servo1 object

 //global var
 
int servoPin = 9; 
int analogPin = A0;


void setup() {
  servo1.attach(servoPin); // connects a signal port to the servo

}

void loop() {
  
  int reading = analogRead(analogPin); // reads the voltage variation sent by the potentiometer and converts it into a scale from 0 to 1023
  int angle = map(reading, 0, 1023, 0, 180); // converts the potentiometer's values ​​from 0–1023 into degrees: 0–180
  servo1.write(angle);
  

}
