#include <LiquidCrystal.h>

// LCD pin connection: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int lm35Pin = A0;       // LM35 OUT pin to A0
const int buzzerPin = 8;      // Buzzer positive pin to D8
float temperature = 0;

void setup() {
  lcd.begin(16, 2);           // Initialize 16x2 LCD
  pinMode(buzzerPin, OUTPUT);
  lcd.print("Temp Monitor");
  delay(2000);
  lcd.clear();
}

void loop() {
  // Read analog value from LM35
  int analogValue = analogRead(lm35Pin);

  // Convert to temperature in Celsius
  temperature = (analogValue * 5.0 * 100.0) / 1024.0;

  // Display temperature
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperature);
  lcd.print(" C   ");

  // Temperature threshold check
  if (temperature > 35.0) {
    digitalWrite(buzzerPin, HIGH);
    lcd.setCursor(0, 1);
    lcd.print("HIGH TEMP ALERT");
  } else {
    digitalWrite(buzzerPin, LOW);
    lcd.setCursor(0, 1);
    lcd.print("Temp Normal    ");
  }

  delay(1000); // Wait 1 second
}
