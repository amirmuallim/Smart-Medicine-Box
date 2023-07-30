
// TABLET== LEDS


#include <LiquidCrystal.h>

LiquidCrystal lcd(7,6,5,4,3,2); //(rs, en, d4, d5, d6, d7)

  int tablet1 = 11;
  int tablet2 = 12;
  int tablet3 = 13;
  int buzzer = 10;
  int button = 8;   
  int buttonState=0;                                                                                                              

void setup() {
  /*int tablet1 = 11;
  int tablet2 = 12;
  int tablet3 = 13;
  int buzzer = 10;*/

  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(8,INPUT);
  
  //LCD CODE
  lcd.begin(16,2);

  lcd.print("No of Tablets");


}

void loop() {
  // 00 hours 1 SEC == 1 HOUR

  buttonState=HIGH;
  buttonState=digitalRead(button);
  //lcd.setCursor(0,1);

  ////////////////////////////////////////////////////////////////////////////////////////// 09 or 9aM
  
  //Buzz (alarm) function
  delay(10000);  // 09 or 9am

  while(buttonState==LOW){
   /*digitalWrite(buzzer,HIGH);
   delay(1000);
   digitalWrite(buzzer,LOW);
   delay(1000);*/
     digitalWrite(buzzer,HIGH);
   delay(1000);
   digitalWrite(buzzer,LOW);
   delay(1000);
   
    break;}
   
   //buttonState=LOW;

  //if(buttonState==HIGH){}

  //LFT Function--> lit the LED and display no of pill
  while(buttonState==LOW){
   /* digitalWrite(tablet1, HIGH);
  lcd.print("No of Tablets");
  lcd.setCursor(0,1);
  lcd.print("1 pill");*/ 
   digitalWrite(tablet1, HIGH);
  lcd.print("No of Tablets");
  lcd.setCursor(0,1);
  lcd.print("1 pill"); 
  
  break;}
   
  lcd.clear();
  digitalWrite(tablet1, LOW);
  //delay(2000); // wait for 1 second to take the tablet

  

  while(buttonState==LOW){
    digitalWrite(tablet3, HIGH);
  lcd.print("No of Tablets");
  lcd.setCursor(0,1);
  lcd.print("2 pill"); 
    break;
   }  
  lcd.clear();
  digitalWrite(tablet3, LOW);

  /* ////////////////////////////////////////////////////////////////////////////////////////// 14 or 2pm
  
  //Buzz (alarm) function
  delay(30000);

  while(1){
   digitalWrite(buzzer,HIGH);
   delay(1000);
   digitalWrite(buzzer,LOW);
   delay(1000);
   if (buttonState==HIGH){
    break;}
   }

  //LFT Function--> lit the LED and display no of pills
  while(1){
    digitalWrite(tablet2, HIGH);
  lcd.print("No of Tablets");
  lcd.setCursor(0,1);
  lcd.print("3 pill"); 
  if (buttonState==HIGH){
    break;}
   }  
  lcd.clear();
  digitalWrite(tablet2, LOW);


  while(1){
    digitalWrite(tablet1, HIGH);
  lcd.print("No of Tablets");
  lcd.setCursor(0,1);
  lcd.print("4 pill"); 
  if (buttonState==HIGH){
    break;}
   }  
  lcd.clear();
  digitalWrite(tablet1, LOW);

  ///////////////////////////////////////////////////////////////////////////////////// 21 or 9pm
  
  //Buzz (alarm) function
  delay(20000);

   while(1){
   digitalWrite(buzzer,HIGH);
   delay(1000);
   digitalWrite(buzzer,LOW);
   delay(1000);
   if (buttonState==HIGH){
    break;}
   }


  //LFT Function--> lit the LED and display no of pills
  while(1){
    digitalWrite(tablet2, HIGH);
  lcd.print("No of Tablets");
  lcd.setCursor(0,1);
  lcd.print("5 pill"); 
  if (buttonState==HIGH){
    break;}
   }  
  lcd.clear();
  digitalWrite(tablet2, LOW);

  while(1){
    digitalWrite(tablet3, HIGH);
  lcd.print("No of Tablets");
  lcd.setCursor(0,1);
  lcd.print("4 pill"); 
  if (buttonState==HIGH){
    break;}
   }  
  lcd.clear();
  digitalWrite(tablet3, LOW); */
}


  
