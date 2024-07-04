#define BLYNK_TEMPLATE_ID "TMPL3Ay--NNNU" 
#define BLYNK_TEMPLATE_NAME "door" 
#define BLYNK_FIRMWARE_VERSION        
"0.1. 0" 
#define BLYNK_PRINT Serial 
//#define BLYNK_DEBUG 
#define APP_DEBUG 
// Uncomment your board, or configure a custom board in Settings.h 
//#define USE_SPARKFUN_BLYNK_BOARD 
//#define USE_NODE_MCU_BOARD 
//#define USE_WITTY_CLOUD_BOARD 
//#define USE_WEMOS_D1_MINI 
#include "BlynkEdgent.h" 
BLYNK_WRITE(V0) 
{if(param.asInt()==1) 
{ 
digitalWrite(2,HIGH); 
digitalWrite(12,HIGH); 
} 
else 
{ 
digitalWrite(2,LOW); 
digitalWrite(12,LOW); 
} 
} 
BLYNK_CONNECTED() 
{ 
Blynk.syncVirtual(V0); 
} 
void setup() 
{ 
pinMode(2,OUTPUT); 
pinMode(12,OUTPUT); 
//iitialize digital pin 2 as an output pin  
Serial.begin(115200); 
delay(100); 
BlynkEdgent.begin(); 
} 
void loop() { 
BlynkEdgent.run(); 
}
