// Simple "blinking LED's" program to test outputs 
// Krzysztof Dymianiuk @ Seaside Customs Garage

int led = 29;   //Ignition1
int led2 = 30;  //Ignition2
int led3 = 31;  //Ignition3
int led4 = 32;  //Ignition4
int led5 = 13;  //LED on Teensy
int led6 = 2;   //injector1
int led7 = 10;  //injector2
int led8 = 6;   //injector3
int led9 = 9;   //injector4
int led10 = 8;   //HC1
int led11 = 7;   //HC2
int led12 = 11;  //Boost
int led13 = 5;   //Idle
int led14 = 21;  //LC1
int led15 = 38;  //Fuel pump
int led16 = 37;  //Fan control
int led17 = 20;  //Tacho out


void setup() {               
// initialize the digital pin as an output.
pinMode(led, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT); 
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
pinMode(led6, OUTPUT);
pinMode(led7, OUTPUT);
pinMode(led8, OUTPUT);
pinMode(led9, OUTPUT);
pinMode(led10, OUTPUT);
pinMode(led11, OUTPUT);
pinMode(led12, OUTPUT);
pinMode(led13, OUTPUT);
pinMode(led14, OUTPUT);
pinMode(led15, OUTPUT);
pinMode(led16, OUTPUT);
pinMode(led17, OUTPUT);
}

void loop() 
{digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
delay(100);                 // wait for a second
digitalWrite(led, LOW);     // turn the LED off by making the voltage LOW
delay(100);                 // wait for a second

{digitalWrite(led2, HIGH);
delay(100);
digitalWrite(led2, LOW);
delay(100);}

{digitalWrite(led3, HIGH);
delay(100);
digitalWrite(led3, LOW);
delay(100);}

{digitalWrite(led4, HIGH);
delay(100);
digitalWrite(led4, LOW);
delay(100);}

{digitalWrite(led5, HIGH);
delay(100);
digitalWrite(led5, LOW);
delay(100);}

{digitalWrite(led6, HIGH);
delay(100);
digitalWrite(led6, LOW);
delay(100);}

{digitalWrite(led7, HIGH);
delay(100);
digitalWrite(led7, LOW);
delay(100);}

{digitalWrite(led8, HIGH);
delay(100);
digitalWrite(led8, LOW);
delay(100);}

{digitalWrite(led9, HIGH);
delay(100);
digitalWrite(led9, LOW);
delay(100);}

{digitalWrite(led10, HIGH);
delay(100);
digitalWrite(led10, LOW);
delay(100);}

{digitalWrite(led11, HIGH);
delay(100);
digitalWrite(led11, LOW);
delay(100);}

{digitalWrite(led12, HIGH);
delay(100);
digitalWrite(led12, LOW);
delay(100);}

{digitalWrite(led13, HIGH);
delay(100);
digitalWrite(led13, LOW);
delay(100);}

{digitalWrite(led14, HIGH);
delay(100);
digitalWrite(led14, LOW);
delay(100);}

{digitalWrite(led15, HIGH);
delay(100);
digitalWrite(led15, LOW);
delay(100);}

{digitalWrite(led16, HIGH);
delay(100);
digitalWrite(led16, LOW);
delay(100);}

{digitalWrite(led17, HIGH);
delay(100);
digitalWrite(led17, LOW);
delay(100);}

}






