//inclui biblioteca servo
#include Servo.h;
//declara servos jr no pino 4
int servoum = 4;
int servodois = 7;
const int minSec = 795;
const int maxSec = 2180;
//declara servo futaba no pino 7
int servodois = 7;
Servo Servo1;//cria primeiro servo
Servo Servo2;//cria segundo servo


void setup() {
  Servo1.attach (servoum, minSec, maxSec);
  Servo2.attach (servodois, minSec, maxSec);

}

void loop() {
  Servo1.write(1);
  delay(500);
  Servo2.write(1);
  delay(500);
  Servo1.write(180);
  delay(500);
  Servo2.write(180);
  delay(500);
  // verificar delays

}
