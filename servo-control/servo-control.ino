/**
 * Author: Aravinth Panchadcharam
 * Email: me@aravinth.info
 * Date: 22/09/14.
 * Project: Yetu CAm
 */


#include <Servo.h>

Servo myservo;
int sensorValue;

void setup() {
  myservo.attach(9);
}

void loop() {
  sensorValue = analogRead(A0);
  sensorValue = map(sensorValue, 0, 1023, 0, 179);
  myservo.write(sensorValue);
  delay(15);        
}
