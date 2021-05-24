int potpin=0;// initialize analog pin 0
int ledpin1=13;// initialize digital pin 13; red
int ledpin2=12;// initialize digital pin 12; blue
int ledpin3=11;// initialize digital pin 11; yellow
int val=0;// define val, assign initial value 0
void setup()
{
  pinMode(ledpin1,OUTPUT);// set digital pin as “output”
  pinMode(ledpin2,OUTPUT);// set digital pin as “output”
  pinMode(ledpin3,OUTPUT);// set digital pin as “output”
  Serial.begin(9600);// set baud rate at 9600
}

void loop()
{ 
  if(val < 340)
  { 
    digitalWrite(ledpin1,HIGH);// turn on the LED on pin 13
    delay(10);// wait for 0.05 second
    digitalWrite(ledpin1,LOW);// turn off the LED on pin 13
    delay(10);// wait for 0.05 second
  }
   else if(val < 680)
  { 
    digitalWrite(ledpin2,HIGH);// turn on the LED on pin 12
    delay(10);// wait for 0.05 second
    digitalWrite(ledpin2,LOW);// turn off the LED on pin 12
    delay(10);// wait for 0.05 second
  }
    else if(val > 680)
  { 
    digitalWrite(ledpin3,HIGH);// turn on the LED on pin 11
    delay(10);// wait for 0.05 second
    digitalWrite(ledpin3,LOW);// turn off the LED on pin 11
    delay(10);// wait for 0.05 second
  }
  val=analogRead(potpin);// read the analog value of analog pin 0, and assign it to val 
  Serial.println(val);// display val’s value
}
