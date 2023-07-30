// Pin assignments
#include <LiquidCrystal.h>

LiquidCrystal lcd(7,6,5,4,3,2); //(rs, en, d4, d5, d6, d7)

const int buttonPin = 8;   // Pushbutton connected to digital pin 2
const int ledPin1 = 11;     // LED 1 connected to digital pin 3
const int ledPin2 = 12;     // LED 2 connected to digital pin 4
const int ledPin3 = 13;     // LED 3 connected to digital pin 5
const int buzzer = 10;

// Variables
int ledState = 0;          // Current LED state
int buttonState = 0;       // Current button state
int lastButtonState = 0;   // Previous button state

void setup() {
  // Set the pin modes
  pinMode(buttonPin, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(buzzer,OUTPUT);

  lcd.begin(16,2);
  lcd.print("Hello World");

}

void loop() {
  // Read the button state
  buttonState = digitalRead(buttonPin);

  // Check for button press
  if (buttonState == HIGH && lastButtonState == LOW) {
    ledState++; // Increment the LED state
    if (ledState > 9) {
      ledState = 1; // Reset the LED state if it exceeds the number of LEDs
    }
    updateLED(); // Update the LED based on the new state
  }

  // Store the current button state as the last state for the next iteration
  lastButtonState = buttonState;
}

void updateLED() {
  // Turn off all LEDs
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(buzzer, LOW);
  lcd.clear();

  // Turn on the appropriate LED based on the current state

/////////////////////////////////////////////////////////////////////////////////////////////  Morinin Medication 9am
  if (ledState == 1) {
  delay(9000);
  //while(buttonState == HIGH && lastButtonState == LOW){*/
  digitalWrite(buzzer, HIGH);
  /*delay(500);
  digitalWrite(buzzer, LOW);
  delay(500);}*/

  lcd.print("Morning: 9 AM ");
  lcd.setCursor(0, 1);
  lcd.print("Medication");
  } 
  else if (ledState == 2) {
  digitalWrite(ledPin1, HIGH);
  lcd.print("No of Tablets");
  lcd.setCursor(0,1);
  lcd.print("1 pill");
  } 
  else if (ledState == 3) {
  digitalWrite(ledPin2, HIGH);
  lcd.print("No of Tablets");
  lcd.setCursor(0,1);
  lcd.print("2 pill");
  }

////////////////////////////////////////////////////////////////////////////////////////////////////// Afternoon Medication 2pm
  else if (ledState == 4) {
  delay(5000);
  digitalWrite(buzzer, HIGH);
  lcd.print("Afternoon: 2 PM");
  lcd.setCursor(0, 1);
  lcd.print("Medication");

  } 
  else if (ledState == 5) {
  digitalWrite(ledPin3, HIGH);
  lcd.print("No of Tablets");
  lcd.setCursor(0,1);
  lcd.print("3 pill");
  }
  else if (ledState == 6) {
  digitalWrite(ledPin1, HIGH);
  lcd.print("No of Tablets");
  lcd.setCursor(0,1);
  lcd.print("4 pill");
  }

///////////////////////////////////////////////////////////////////////////////////////////////////// Evening Medication 9pm
  else if (ledState == 7) {
  delay(7000);  
  digitalWrite(buzzer, HIGH);
  lcd.print("Evening: 9 PM ");
  lcd.setCursor(0, 1);
  lcd.print("Medication");

  } 
  else if (ledState == 8) {
  digitalWrite(ledPin2, HIGH);
  lcd.print("No of Tablets");
  lcd.setCursor(0,1);
  lcd.print("5 pill");
  }
  else if (ledState == 9) {
  digitalWrite(ledPin3, HIGH);
  lcd.print("No of Tablets");
  lcd.setCursor(0,1);
  lcd.print("6 pill");
  }
}

