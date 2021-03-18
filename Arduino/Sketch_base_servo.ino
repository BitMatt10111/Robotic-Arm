//Sketch Braccio Robotico ToBeBoy

#include <Servo.h> 

Servo Servo0;
Servo Servo1;
Servo Servo2;      
int pos0 = 0;            // Posizione iniziale del servo motore
int pos1 = 0;            // Posizione iniziale del servo motore
int pos2 = 0;            // Posizione iniziale del servo motore
int pot0 = A0;        // Ingresso analogico del potenziometro
int pot1 = A1;        // Ingresso analogico del potenziometro
int pot2 = A2;        // Ingresso analogico del potenziometro
int potValue0 = 0;       // Valore letto del potenziometro 1
int potValue1 = 0;       // Valore letto del potenziometro 2
int potValue2 = 0;       // Valore letto del potenziometro 3
int outputValue0 = 0;    // Valore mappato del potenziometro
int outputValue1 = 0;    // Valore mappato del potenziometro
int outputValue2 = 0;    // Valore mappato del potenziometro

void setup() 
{
  pinMode(pot0,INPUT);
  pinMode(pot1,INPUT);
  pinMode(pot2,INPUT);
  Servo0.attach(9);   
  Servo1.attach(10);   
  Servo2.attach(11);   
  Servo0.write(pos0);  
  Servo1.write(pos1);  
  Servo2.write(pos2);  
  delay(50);
} 

void loop() {
  potValue0 = analogRead(pot0);
  potValue1 = analogRead(pot1);
  potValue2 = analogRead(pot2);
  
  pos0 = map(potValue0, 0, 1023, 0, 180);
  pos1 = map(potValue1, 0, 1023, 0, 180);
  pos2 = map(potValue2, 0, 1023, 0, 180);
  Servo0.write(pos0);  
  Servo1.write(pos1);  
  Servo2.write(pos2);
  delay(30);
}
