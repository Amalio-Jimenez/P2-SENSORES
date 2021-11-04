#include <Arduino.h>

bool bandera = 1;
int acontador = 0;
void STATUS1();
void STATUS2();
void STATUS3();
void STATUS4();
void STATUS5();
void STATUS6();
void STATUS7();
const int boton1 = 11;
int val = 0;
int state = 0;
int oldval = 0;
//int boton1 = digitalRead(11);
void setup() {
  // put your setup code here, to run once:
  DDRD = 255;
  DDRB = 56;
  DDRC = 255;
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(boton1);
  if ((val == HIGH) && oldval == LOW)
  {
    state=1-state;
    delay(10);
  }
  if (state ==1)
  
  STATUS1();
  STATUS2();
  STATUS3();
  STATUS4();
  STATUS5();
  STATUS6();
  STATUS7();
  //delay(1000);
}

void STATUS1() {
  PORTD = 0B01001001;
  PORTB = 0B00000100;
  delay(1000);
  PORTD = 0B01001001;
  PORTB = 0B00000100;
  delay(1000);
  //contador++;
  for (int  i = 0; i<6; i++)
  {
    if (bandera)
     {PORTD = 0B01000001;
     PORTB = 0B00000100;
     delay(250);}
      else {PORTD = 0B01001001;
      PORTB = 0B00000100;
      delay(250);}
  bandera = !bandera;
  }
  }
  //contador++;
  void STATUS2(){
    int boton1 = digitalRead(11);
    if (boton1 == HIGH)
    {
      PORTC=255;
    }
    
  PORTD = 0B00010001;
  PORTB = 0B00000100;
  delay(1000); 
  PORTD = 0B00010001;
  PORTB = 0B00000100;
  delay(1000);
  //contador++;
  for (int  i = 0; i<6; i++)
  {
    if (bandera)
     {PORTD = 0B00010000;
     PORTB = 0B00000100;
     delay(250);}
      else {PORTD = 0B00010001;
      PORTB = 0B00000100;
      delay(250);}
  bandera = !bandera;
  }
  }
  void STATUS3(){
PORTD = 0B00010010;
PORTB = 0B00000100;
  delay(1000);
  //contador++;
  for (int  i = 0; i<6; i++)
  {
    if (bandera)
     {PORTD =0B00010000;
     PORTB = 0B00000100;
     delay(250);}
      else {PORTD = 0B00010010;
      PORTB = 0B00000100;
      delay(250);}
  bandera = !bandera;
  }
  }
void STATUS4(){
PORTD = 0B10010100;
PORTB = 0B00000100;
//contador++;
delay(1000);
  for (int  i = 0; i<6; i++)
  {
    if (bandera)
     {PORTD =0B00000100;
     PORTB = 0B00000100;
     delay(250);}
      else {PORTD = 0B10010100;
      PORTB = 0B00000100;
      delay(250);}
  bandera = !bandera;
  }
}
void STATUS5(){
PORTD = 0B00100100;
PORTB = 0B00000100;
delay(1000);
//contador++;
  for (int  i = 0; i<6; i++)
  {
    if (bandera)
     {PORTD =0B00100100;
     PORTB = 0B00000100;
     delay(250);}
      else {PORTD = 0B00000000;
      PORTB = 0B00000000;
      delay(250);}
  bandera = !bandera;
  }
  }
void STATUS6(){
PORTD = 0B01000100;
PORTB = 0B00000001;
delay(1000);
//contador++;
  for (int  i = 0; i<6; i++)
  {
    if (bandera)
     {PORTD = 0B01000100;
      PORTB = 0B00000001;
     delay(250);}
      else {PORTD = 0B01000100;
      PORTB = 0B00000000;
      delay(250);}
  bandera = !bandera;
  }
  }
  void STATUS7(){
  PORTD = 0B01000100;
  PORTB = 0B00000010;
  delay(1000);
  //contador++;
  for (int  i = 0; i<6; i++)
  {
    if (bandera)
     {PORTD = 0B01000100;
      PORTB = 0B00000010;
     delay(250);}
      else {PORTD = 0B01000100;
      PORTB = 0B00000000;
      delay(250);}
  bandera = !bandera;
  }
}