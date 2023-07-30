
// TABLET== LEDS


#include <LiquidCrystal.h>

LiquidCrystal lcd(7,6,5,4,3,2); //(rs, en, d4, d5, d6, d7)

  int tablet1 = 11;
  int tablet2 = 12;
  int tablet3 = 13;
  int buzzer = 10;


void setup() {
  /*int tablet1 = 11;
  int tablet2 = 12;
  int tablet3 = 13;
  int buzzer = 10;*/

  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
  
  //LCD CODE
  lcd.begin(16,2);

  //lcd.print("No of Tablets");


}

void loop() {
  // 00 hours 1 SEC == 1 HOUR

  //lcd.setCursor(0,1);

  ////////////////////////////////////////////////////////////////////////////////////////////////////////// 09 or 9aM
  
  //Buzz (alarm) function
  delay(10000);  // 09 or 9am
  digitalWrite(buzzer, HIGH);  //BUZZ FOR HALF SECOND
  delay(1000);
  digitalWrite(buzzer, LOW);

  //LFT Function--> lit the LED and display no of pill
  digitalWrite(tablet1, HIGH);
  lcd.print("No of Tablets");
  lcd.setCursor(0,1);
  lcd.print("1 pill"); // diplay the no of pills 
  delay(2000); // wait for 1 second to take the tablet
  lcd.clear();
  digitalWrite(tablet1, LOW);

  digitalWrite(tablet3, HIGH);
  lcd.print("No of Tablets");
  lcd.setCursor(0,1);
  lcd.print("2 pill"); // diplay the no of pills 
  delay(2000); // wait for 1 second to take the tablet
  lcd.clear();
  digitalWrite(tablet3, LOW);

  ////////////////////////////////////////////////////////////////////////////////////////////////////////// 14 or 2pm
  
  //Buzz (alarm) function
  delay(30000);
  digitalWrite(buzzer, HIGH);  //BUZZ FOR HALF SECOND
  delay(1000);
  digitalWrite(buzzer, LOW);

  //LFT Function--> lit the LED and display no of pills
  digitalWrite(tablet2, HIGH);
  lcd.print("No of Tablets");
  lcd.setCursor(0,1);
  lcd.print("3 pill"); // diplay the no of pills 
  delay(2000); // wait for 1 second to take the tablet
  lcd.clear();
  digitalWrite(tablet2, LOW);


  digitalWrite(tablet1, HIGH);
  lcd.print("No of Tablets");
  lcd.setCursor(0,1);
  lcd.print("4 pill"); // diplay the no of pills 
  delay(2000); // wait for 1 second to take the tablet
  lcd.clear();
  digitalWrite(tablet1, LOW);

  ////////////////////////////////////////////////////////////////////////////////////////////////////////// 21 or 9pm
  
  //Buzz (alarm) function
  delay(20000);
  digitalWrite(buzzer, HIGH);  //BUZZ FOR HALF SECOND
  delay(1000);
  digitalWrite(buzzer, LOW);

  //LFT Function--> lit the LED and display no of pills
  digitalWrite(tablet2, HIGH);
  lcd.print("No of Tablets");
  lcd.setCursor(0,1);
  lcd.print("5 pill"); // diplay the no of pills 
  delay(2000); // wait for 1 second to take the tablet
  lcd.clear();
  digitalWrite(tablet2, LOW);

  digitalWrite(tablet3, HIGH);
  lcd.print("No of Tablets");
  lcd.setCursor(0,1);
  lcd.print("6 pill"); // diplay the no of pills 
  delay(2000); // wait for 1 second to take the tablet
  lcd.clear();
  digitalWrite(tablet3, LOW);
}
