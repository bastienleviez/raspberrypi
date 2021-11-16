#ifdef WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif
#include <wiringPi.h>

void delay(int ms){
#ifdef WIN32
  Sleep(ms);
#else
  usleep(ms*1000);
#endif
}

#include "MFRC522.h"

int main(){
  int LEDROUGE = 25;
  int LEDVERTE = 27;
  MFRC522 mfrc;

  mfrc.PCD_Init();
  wiringPiSetup();    /* initialize wiringPi setup <wiringPi.h>*/
  pinMode(LEDROUGE,OUTPUT);    /* set GPIO as output <wiringPi.h>*/
  pinMode(LEDVERTE,OUTPUT);

    digitalWrite(LEDROUGE,HIGH);
  while(1){
    // Look for a card
    if(!mfrc.PICC_IsNewCardPresent())
      continue;

    if( !mfrc.PICC_ReadCardSerial())
      continue;

    // Print UID
    
        digitalWrite(LEDROUGE,HIGH);
        delay(100);
        digitalWrite(LEDROUGE,LOW);
        delay(100);
        digitalWrite(LEDROUGE,HIGH);
        delay(100);
        digitalWrite(LEDROUGE,LOW);
        delay(100);
        digitalWrite(LEDROUGE,HIGH);
        delay(100);
        digitalWrite(LEDROUGE,LOW);
        delay(100);
        digitalWrite(LEDROUGE,LOW);
        
std::string test = "";
for(int i = 0; i < mfrc.uid.size; ++i){
      if(mfrc.uid.uidByte[i] < 0x10){
    test = test + std::to_string(mfrc.uid.uidByte[i]);
      }
      else{
          test = test + std::to_string(mfrc.uid.uidByte[i]);
      }
}
        cout << test;
        printf("\n");
        if(test == "2042382423"){
          digitalWrite(LEDVERTE,HIGH);
          digitalWrite(LEDROUGE,LOW);
          delay(2000);
          digitalWrite(LEDROUGE,HIGH);
          digitalWrite(LEDVERTE,LOW);
        } else {
          digitalWrite(LEDROUGE,HIGH);
        }
    delay(1000);
  }
  return 0;
}