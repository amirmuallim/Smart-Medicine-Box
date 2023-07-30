#include <LiquidCrystal.h>

LiquidCrystal lcd(7,6,5,4,3,2);//(rs, en, d4, d5, d6, d7)

int led1=11,led2=12,led3=13;
int pushButton=10;

int buttonState=0;
int lastState=0; 


void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(pushButton,INPUT);

  lcd.begin(16,2);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState=digitalRead(pushButton);


  if (buttonState == LOW && lastState == HIGH){
    digitalWrite(led1,HIGH);
  }
  lastState= buttonState;
  digitalWrite(led1,LOW);


  if (buttonState == HIGH && lastState == LOW){
    digitalWrite(led2,HIGH);
  }
  lastState= buttonState;
  digitalWrite(led2,LOW);

 if (buttonState == HIGH && lastState == LOW){
    digitalWrite(led3,HIGH);
  }
  lastState= buttonState;
  digitalWrite(led3,LOW);


}
