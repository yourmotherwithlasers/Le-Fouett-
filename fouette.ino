//inclui Servo Libery
#include <Servo.h>
//declara pino do servo
int servoPin = 5;
const int minSec = 795;
const int maxSec = 2180;
//Cria objeto servo
Servo Servo1;
// define pinos driver
const int stepPin = 3; 
const int dirPin = 4; 
 
void setup() {
  // Sets the two pins as Outputs
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
  //Define pino do servo como sinal
  Servo1.attach(servoPin, minSec, maxSec);
}
void loop() {
  digitalWrite(dirPin,HIGH); //muda direcao do stepper
  // 250 revolucoes ( curso total)
  for(int x = 0; x < 250; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(5000); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(5000); 
  }
  delay(1000); // uma pausa
  //faz servo ir para zero graus
  Servo1.write(1);
  delay(1000); // outra pausa
  
  digitalWrite(dirPin,LOW); //muda direcao stepper
  // 250 revolucoes curso
  for(int x = 0; x < 250; x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(5000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(5000);
  }
  delay(1000); // outra pausa
  //Faz servo ir para 180 graus
  Servo1.write(180);
  delay(1000);
}
