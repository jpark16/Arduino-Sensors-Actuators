#include <Servo.h>
/* define a header file. Special attention here, you can call the servo function directly from Arduino's software menu  bar Sketch>Importlibrary>Servo, or input 
#include <Servo.h>. Make sure there is a space between #include and  <Servo.h>. Otherwise, it will cause compile error.*/
Servo myservo;// define servo variable name
int servopin=9;// select digital pin 9 for servomotor signal line
int myangle;// initialize angle variable
int pulsewidth;// initialize width variable
int val;
int val_1;
int potpin=0;
void servopulse(int servopin,int myangle)// define a servo pulse function
{
  pulsewidth=(myangle*11)+500;// convert angle to 500-2480 pulse width
  digitalWrite(servopin,HIGH);// set the level of servo pin as “high”
  delayMicroseconds(pulsewidth);// delay microsecond of pulse width
  digitalWrite(servopin,LOW);// set the level of servo pin as “low”
  delay(20-pulsewidth/1000);
}

void setup()
{
  myservo.attach(9);// select servo pin(9 or 10)
  pinMode(servopin,OUTPUT);// set servo pin as “output”
  Serial.begin(9600);// connect to serial port, set baud rate at “9600”
  Serial.println("servo=o_seral_simple ready");
}

void phase1(int val)
{
  if(val>='0'&&val<='9')
    {
     val=val-'0';// convert characteristic quantity to numerical variable
      val=val*(180/9);// convert number to angle
      Serial.print("moving servo to ");
      Serial.print(val,DEC);
      Serial.println();
      for(int i=0;i<=50;i++) // giving the servo time to rotate to commanded position
      {
       servopulse(servopin,val);// use the pulse function
      }
    }
}

void phase2(int val)
{
  if(val>='0'&&val<='9')
   {
     val=val-'0';// convert characteristic quantity to numerical variable
     val=val*(180/9);// convert number to angle
      Serial.print("moving servo to ");
      Serial.print(val,DEC);
      Serial.println();
      for(int i=0;i<=50;i++) // giving the servo time to rotate to commanded position
      {
       servopulse(servopin,val);// use the pulse function
      }
    }
}

void phase3(int val)
{
   if(val>='0'&&val<='9')
   {
     val=val-'0';// convert characteristic quantity to numerical variable
     val=val*(180/9);// convert number to angle
      Serial.print("moving servo to ");
      Serial.print(val,DEC);
      Serial.println();
      for(int i=0;i<=50;i++) // giving the servo time to rotate to commanded position
      {
       servopulse(servopin,val);// use the pulse function
      }
    }
}

void phase4(int val)
{
   if(val>='0'&&val<='9')
   {
     val=val-'0';// convert characteristic quantity to numerical variable
     val=val*(180/9);// convert number to angle
      Serial.print("moving servo to ");
      Serial.print(val,DEC);
      Serial.println();
      for(int i=0;i<=50;i++) // giving the servo time to rotate to commanded position
      {
       servopulse(servopin,val);// use the pulse function
      }
    }
}


void phase5(int val)
{
  if(val>='0'&&val<='9')
   {
     val=val-'0';// convert characteristic quantity to numerical variable
     val=val*(180/9);// convert number to angle
      Serial.print("moving servo to ");
      Serial.print(val,DEC);
      Serial.println();
      for(int i=0;i<=50;i++) // giving the servo time to rotate to commanded position
      {
       servopulse(servopin,val);// use the pulse function
      }
   }
}

void phase6(int val)
{
  if(val>='0'&&val<='9')
   {
     val=val-'0';// convert characteristic quantity to numerical variable
     val=val*(180/9);// convert number to angle
      Serial.print("moving servo to ");
      Serial.print(val,DEC);
      Serial.println();
      for(int i=0;i<=50;i++) // giving the servo time to rotate to commanded position
      {
       servopulse(servopin,val);// use the pulse function
      }
   }
}

void phase7(int val)
{
  if(val>='0'&&val<='9')
   {
     val=val-'0';// convert characteristic quantity to numerical variable
     val=val*(180/9);// convert number to angle
      Serial.print("moving servo to ");
      Serial.print(val,DEC);
      Serial.println();
      for(int i=0;i<=50;i++) // giving the servo time to rotate to commanded position
      {
       servopulse(servopin,val);// use the pulse function
      }
   }
}

void phase8(int val)
{
  if(val>='0'&&val<='9')
   {
     val=val-'0';// convert characteristic quantity to numerical variable
     val=val*(180/9);// convert number to angle
      Serial.print("moving servo to ");
      Serial.print(val,DEC);
      Serial.println();
      for(int i=0;i<=50;i++) // giving the servo time to rotate to commanded position
      {
       servopulse(servopin,val);// use the pulse function
      }
   }
}

void phase9(int val)
{
  if(val>='0'&&val<='9')
   {
     val=val-'0';// convert characteristic quantity to numerical variable
     val=val*(180/9);// convert number to angle
      Serial.print("moving servo to ");
      Serial.print(val,DEC);
      Serial.println();
      for(int i=0;i<=50;i++) // giving the servo time to rotate to commanded position
      {
       servopulse(servopin,val);// use the pulse function
      }
   }
}

void phase10(int val)
{
  if(val>='0'&&val<='9')
   {
     val=val-'0';// convert characteristic quantity to numerical variable
     val=val*(180/9);// convert number to angle
      Serial.print("moving servo to ");
      Serial.print(val,DEC);
      Serial.println();
      for(int i=0;i<=50;i++) // giving the servo time to rotate to commanded position
      {
       servopulse(servopin,val);// use the pulse function
      }
   }
}
void loop()// convert number 0 to 9 to corresponding 0-180 degree angle, LED blinks corresponding number of time
{
  myservo.write(0);// set rotation angle of the motor
  val=Serial.read();// read serial port value
  
  while(1)
  {
   if(val_1 < 110)
   {
    phase1('0');
   }
   else if(val_1 < 220)
   {
     phase2('1');
   }
   else if(val_1 < 330)
   {
    phase3('2');
   }
   else if(val_1 < 440)
   {
    phase4('3');
   }
   else if(val_1 < 550)
   {
    phase5('4');
   }
   else if(val_1 < 660)
   {
    phase6('5');
   }
   else if(val_1 < 770)
   {
    phase7('6');
   }
   else if(val_1 < 880)
   {
    phase8('7');
   }
   else if(val_1 < 990)
   {
    phase9('8');
   }
   else if(val_1 < 1024)
   {
    phase10('9');
   }
   val_1 = analogRead(potpin);
   Serial.println(val_1);
 }
}
  
