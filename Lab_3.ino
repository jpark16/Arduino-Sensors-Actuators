int buzzer=8;// select digital IO pin for the buzzer
int i;
  void setup() 
  { 
    pinMode(buzzer,OUTPUT);// set digital IO pin pattern, OUTPUT to be output 
    Serial.begin(9600);
    Serial.println("Current frequency");
    Serial.println(i);
  } 
  void loop() 
  { 
    unsigned char i,j;//define variable
while(1) 
  { 
    for(i=0;i<80;i++)// output a frequency sound
     {  
        digitalWrite(buzzer,HIGH);// sound
        delayMicroseconds(i);//pauses for 50 microseconds 
        digitalWrite(buzzer,LOW);//not sound
        delayMicroseconds(i);//pauses for 50 microseconds
        Serial.println(i);
     } 
     for(i=0;i<10000;i++)// output a frequency sound
     { 
        digitalWrite(buzzer,HIGH);// sound
        delayMicroseconds(i);//pauses for 50 microseconds  
        digitalWrite(buzzer,LOW);//not sound
        delayMicroseconds(i);//pauses for 50 microseconds   
      }
     }  
   }
