#include <Keypad.h>

//pins
int ign = 10;
int pet = 11;
int red = 12;
int green = 13;
int key = 9;

//variables
int character = 0;
int activated =0;
char Str[16] = {' ', ' ', ' ', ' ', ' ', ' ', '-', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' '};

//Keypad config
const byte ROWS = 3; //four rows
const byte COLS = 4; //four columns
//define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
  {'1','4','7','*'},
  {'2','5','8','0'},
  {'3','6','9','#'}
};
byte rowPins[ROWS] = {4, 3, 2}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {8, 7, 6, 5}; //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

void setup(){
  pinMode(ign,OUTPUT);
  pinMode(pet,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(key,INPUT);
  
  
}
  
void loop(){
    
///////////////KEYPAD OPEN/CLOSE////////////  
  char customKey = customKeypad.getKey(); //this function reads the presed key
  
  if (customKey){

    if (character ==0)
    {  
    Serial.println(customKey);
    Str[6]= customKey;   
   
    }

    if (character ==1)
    {  
    Serial.println(customKey);
    Str[7]= customKey;   
   
    }

    if (character ==2)
    {  
    Serial.println(customKey);
    Str[8]= customKey;   
   
    }

    if (character ==3)
    {  
    Serial.println(customKey);
    Str[9]= customKey;   
   
    }

    if (character ==4)
    {  
    Serial.println(customKey);
    Str[10]= customKey;
    activated=1;
   
    }
    character=character+1;
  }

  if (activated == 1)
    {
/*Change your password below!!! 
Change each of Str[6], Str[7], Str[8], Str[9]*/

    if(Str[10]='*' && character==5 && Str[6]=='1' && Str[7]=='2' && Str[8]=='3' && Str[9]=='4' )
    {
      digitalWrite(green,HIGH);
      digitalWrite(red,LOW);
      delay(500);
      digitalWrite(ign,HIGH);
      digitalWrite(pet,HIGH);
      activated = 2;
    }
    else
    {
      digitalWrite(red,HIGH);
      character=0;
      Str[6]= '-';
      Str[7]= '*'; 
      Str[8]= '*'; 
      Str[9]= '*';
      Str[10]= ' ';
      activated = 0;
    }
  }
  if (activated == 2)
    {
    if(customKey == '#' )
    {
      digitalWrite(pet,LOW);
      digitalWrite(ign,LOW);
      digitalWrite(green,LOW);
      activated = 0;
      character=0;
      Str[6]= '-';
      Str[7]= '*'; 
      Str[8]= '*'; 
      Str[9]= '*';
      Str[10]= ' ';   
    }
    if(digitalRead(key) == LOW)
    {
      digitalWrite(pet,LOW);
      digitalWrite(ign,LOW);
      digitalWrite(green,LOW);
      activated = 0;
      character=0;
      Str[6]= '-';
      Str[7]= '*'; 
      Str[8]= '*'; 
      Str[9]= '*';
      Str[10]= ' ';  
    }
  }  
}
