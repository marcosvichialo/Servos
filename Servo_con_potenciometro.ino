/*
CONTROL DE UN SERVO CON UN POTENCIÓMETRO
Lo que se busca con esta práctica es poder controlar un servo con
un potenciometro, consiste en que el servo se mueva a corde con el 
potenciómetro.
Servo (PIN 6)
potenciómetro (PIN Analog A0)

Autor: Marcos Antonio Mariño Mota
Data: 23/03/2023
*/
#include <Servo.h>

Servo servo1;

int servopin = 6;

int angulo = 0;

int pot = A0;

int potvalue=0;

void setup() {

  servo1.attach(servopin);

  pinMode (pot,INPUT);

  servo1.write(angulo);
potvalue= analogRead(pot);

  angulo=map(potvalue,0,1023,0,180);
}



  void loop() {

  potvalue= analogRead(pot);

  angulo=map(potvalue,0,1023,0,180);

  servo1.write(angulo);  

  delay(10);

}
