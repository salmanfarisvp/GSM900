
//salman faris 
//farissalmannbr@gmail.com
//7736626642
#include <SoftwareSerial.h>

SoftwareSerial mySerial(9, 10);
int val;

void setup()
{
  mySerial.begin(9600);   // Setting the baud rate of GSM Module  
  Serial.begin(9600);    // Setting the baud rate of Serial Monitor (Arduino)
  delay(100);
}


void loop()
{
  if (Serial.available()>0)
   switch(Serial.read())
  {
    case '49':
      digitalWrite(22,HIGH);
      break; //
    case '50':
       digitalWrite(22,LOW);
      break;
    case '51':
       digitalWrite(24,HIGH);
      break;
     case '52':
       digitalWrite(24,LOW);
      break;
     case '53':
       digitalWrite(26,HIGH);
      break;
     case '54':
       digitalWrite(26,LOW);
      break;
      case '55':
       digitalWrite(28,HIGH);
      break;
     case '56':
       digitalWrite(28,LOW);
      break;
     case '57':
       digitalWrite(30,HIGH);
      break;
     case '58':
       digitalWrite(30,LOW);
      break;
     case '59':
       digitalWrite(32,HIGH);
      break;
     case '60':
       digitalWrite(32,LOW);
      break;
     case '61':
       digitalWrite(34,HIGH);
      break;
     case '62':
       digitalWrite(34,LOW);
      break;
     case '63':
       digitalWrite(36,HIGH);
      break;
      case '64':
       digitalWrite(36,LOW);
      break;
      
     
  }
}
