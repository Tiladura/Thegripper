#include <Arduino.h>
#include <Servo.h>

Servo mg1;
Servo mg2;
Servo mg3;

Servo sg1;
Servo sg2;

const int mg1pin = 3;
const int mg2pin = 5;
const int mg3pin = 6;

const int sg1pin = 9;
const int sg2pin = 10;

const int mgmin = 90;
const int sgmin = 90;


// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  mg1.attach(mg1pin);
  mg2.attach(mg2pin);
  mg3.attach(mg3pin);

  sg1.attach(sg1pin);
  sg2.attach(sg2pin);
  
  mg1.write(mgmin);
  mg2.write(mgmin);
  mg3.write(mgmin);

  sg1.write(sgmin);
  sg2.write(sgmin);
  
  Serial.println("Setup complete");

}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  // i will add functions later
}