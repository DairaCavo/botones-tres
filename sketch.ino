#include <LiquidCrystal_I2C.h>

//vcc --> 5v
//gnd --> gnd
//SDA --> A4
//SCL -->A5


LiquidCrystal_I2C lcd(0x27, 16, 2);
int botonrojo = 4;
int botonazul = 5;
int botonverde = 6;
void setup()
{
  pinMode(botonrojo, INPUT);
  pinMode(botonazul, INPUT);
  pinMode(botonverde, INPUT);
  lcd.init();
  lcd.backlight();
}


void loop()
{
  if (digitalRead(botonrojo)) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("boton rojo");
    lcd.setCursor(2, 1);
    lcd.print("anda!");
  } else if (digitalRead(botonazul)) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("boton azul");
    lcd.setCursor(2, 1);
    lcd.print("anda!");
  } else if (digitalRead(botonverde)) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("boton verde");
    lcd.setCursor(2, 1);
    lcd.print("anda!");
  } 
}