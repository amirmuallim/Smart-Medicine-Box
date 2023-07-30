int tablet1 = 11, tablet2 = 12, tablet3 = 13;
int buzzer = 10;


void setup() {

  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  // 00 hours 1 SEC == 1 HOUR
  delay(9000);  // 09 or 9am
  // digitWrite(buzzer,HIGH); // BUZZER FUNCTION(INCOMPLETE)
  digitalWrite(tablet1, HIGH);
  digitalWrite(tablet3, HIGH);
  delay(1000);  // wait for 1 second or 1 hours to turn off the leds
  digitalWrite(tablet1, LOW);
  digitalWrite(tablet1, LOW);


  delay(5000);  // 14 or 2pm
  digitalWrite(tablet2, HIGH);
  digitalWrite(tablet1, HIGH);
  delay(1000);  // wait for 1 second or 1 hours to turn off the leds
  digitalWrite(tablet2, LOW);
  digitalWrite(tablet1, LOW);

  delay(7000);  // 21 or 9pm
  digitalWrite(tablet2, HIGH);
  digitalWrite(tablet3, HIGH);
  delay(1000);  // wait for 1 second or 1 hours to turn off the leds
  digitalWrite(tablet2, LOW);
  digitalWrite(tablet3, LOW);
}
