/*
* Author-Furkan Dursun 
* Arduino stepper motor control
*/

#include <Stepper.h> 

# DIR -> 2, STEP -> 3
Stepper stepper(STEPS, 2, 3); 

void setup() {
Serial.begin(9600);

}

void loop() {

# read pot value
int sensorValue = analogRead(A0);

if (sensorValue > 100 && sensorValue < 200){
  Serial.println(sensorValue);
  stepper.setSpeed(100);
  stepper.step(100);}
  
else if (sensorValue > 200 && sensorValue < 300){
  Serial.println(sensorValue);
  stepper.setSpeed(500);
  stepper.step(100);}
  
delay(1);

}
