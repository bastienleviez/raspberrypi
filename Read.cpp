#include "MFRC522.h"
#include <wiringPi.h>
#include <stdio.h>
#include <iostream>

using namespace std;
int main(){
  int LED1 = 27;
  int LED2 = 25; 
  MFRC522 mfrc;

  mfrc.PCD_Init();
  wiringPiSetup();    /* initialize wiringPi setup <wiringPi.h>*/
  pinMode(LED1,OUTPUT);    /* set GPIO as output <wiringPi.h>*/
  pinMode(LED2,OUTPUT);

  while(1){
    digitalWrite(LED1,HIGH);        /* write high on GPIO <wiringPi.h>*/
        digitalWrite(LED2, LOW);
        delay(1000);
        digitalWrite(LED1, LOW);        /* write low on GPIO */
        digitalWrite(LED2,HIGH);
        delay(1000);
  }
  return 0;
}

