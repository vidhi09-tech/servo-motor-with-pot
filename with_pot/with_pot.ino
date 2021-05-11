#include<Servo.h>
int servoPin =9;
int potPin = A5;
Servo myServo;
int val1;
int val2;
void setup(){
  myServo.attach(servoPin);
  Serial.begin(9600);
}
void loop(){
  val1 = analogRead(potPin);
  Serial.print("potentiometer reading");
  Serial.println(val1);
  val2 = map(val1, 0, 1023, 0, 180);
  myServo.write(val2);
  Serial.print("servo motor reading"); //VIDHI KUMARI
  Serial.println(val2);
  delay(15);
}
