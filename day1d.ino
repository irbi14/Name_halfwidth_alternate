#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
}

void loop() 
{

  for (int pc = 0; pc < 6; pc++)
  {
    if (pc == 5)
    {
      for (int pc = 5; pc > 0; --pc)
      {
        lcd.setCursor(pc, 0);
        lcd.print("RISHI");
        lcd.setCursor(11 - pc, 1);
        lcd.print("RISHI");
        delay(150);
        lcd.clear();
      }
    }
    else
    {
      lcd.setCursor(pc, 0);
      lcd.print("RISHI");
      lcd.setCursor(11 - pc, 1);
      lcd.print("RISHI");
      delay(150);
      lcd.clear();
    }
  }
}

