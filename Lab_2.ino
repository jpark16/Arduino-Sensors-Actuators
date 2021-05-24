int ledpin=11;// initialize pin 11
int ledpin2=5;// initialize pin 5
int inpin=7;// initialize pin 7
int val;// define val
int bpress =0;

void setup()
{
  pinMode(ledpin2,OUTPUT);// set LED pin as “output”
  pinMode(ledpin,OUTPUT);// set LED pin as “output”
  pinMode(inpin,INPUT);// set button pin as “input”

}
void loop()
{
  val=digitalRead(inpin);// read the level value of pin 7 and assign if to val
  if(val==HIGH && bpress < 6)// check if the button is pressed, if yes, turn on the LED
{ bpress++;
  digitalWrite(ledpin,LOW);
  digitalWrite(ledpin2,HIGH);
  delay(1000*bpress);
  digitalWrite(ledpin2,LOW);
  digitalWrite(ledpin,HIGH);
  delay(1000*bpress);
  digitalWrite(ledpin,LOW);
  digitalWrite(ledpin2,LOW);}
else if (val = LOW && bpress > 5)
{ digitalWrite(ledpin,HIGH);
digitalWrite(ledpin2,HIGH);
}
}
