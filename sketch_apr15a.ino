#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2); // Set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init(); // Initialize the LCD
  lcd.backlight();
}

void loop()
{
  lcd.clear();
  
  // Print numbers
  for(int i = 0; i <= 9; i++) {
    lcd.setCursor(0,0);
    lcd.print("Number: ");
    lcd.setCursor(8,0);
    lcd.print(i);
    delay(2000);
  }
  
  lcd.clear();
  // Print names
  lcd.setCursor(0,0);
  lcd.print("Name: Akshat");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Name: Abhijeet");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Name: Akash");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Name: Kartik");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Name: Aryan");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Name: Divyanshu");
  delay(2000);
  
  lcd.clear();
  // Print current time with seconds
  unsigned long currentMillis = millis(); // Get the current time in milliseconds
  int hours = (currentMillis / 1000 / 60 / 60) % 24; // Convert milliseconds to hours (24-hour format)
  int minutes = (currentMillis / 1000 / 60) % 60; // Convert milliseconds to minutes
  int seconds = (currentMillis / 1000) % 60; // Convert milliseconds to seconds
  
  // Display time on LCD
  lcd.setCursor(0,0);
  lcd.print("Time: ");
  if (hours < 10) {
    lcd.print("0"); // Print leading zero for single-digit hours
  }
  lcd.print(hours);
  lcd.print(":");
  if (minutes < 10) {
    lcd.print("0"); // Print leading zero for single-digit minutes
  }
  lcd.print(minutes);
  lcd.print(":");
  if (seconds < 10) {
    lcd.print("0"); // Print leading zero for single-digit seconds
  }
  lcd.print(seconds);
  
  delay(5000); // Delay to control refresh rate
}



