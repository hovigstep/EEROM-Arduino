#include "Keyboard.h"
#include "math.h"
#include <EEPROM.h>
#define ledpin 2

int f;  //Variable to store in EEPROM.
int eeAddress = 0;   //Location we want the data to be put.
  //One simple call, with the address first and the object second.

int Choice;
int MaxChoices= 10 ;
int password;
int newpassword;

void setup()
{
Choice =0;
  pinMode(ledpin, OUTPUT);// For the LED
  digitalWrite(ledpin, LOW);

  Serial.begin(9600);
  EEPROM.put(eeAddress, f);

    Serial.print("Weclome\n");
    Serial.print("Please Enter One One of the following choices \n");
    Serial.print("1 - Enter Password \n");
    Serial.print("2 - Change Password \n");
    Serial.print("3 - Set Password \n");

}
void loop()
{
 
    while (Serial.available()== 0) 
    {
      
    int Choice = Serial.parseInt();
    
        switch (Choice)
    {
        case 1:
    
    Serial.print(" Please Enter Password \n");

    while (Serial.available() == 0) {
    int password = Serial.parseInt();

    if (password == f)
    {
      Serial.print("Weclome\n");
      digitalWrite(ledpin, HIGH);
    }
    if (password == 0)
    {
      digitalWrite(ledpin, LOW);
    }
    else
    break;
    
  }
break;

    case 2:
    Serial.print(" Changing Password \n");
    Serial.print(" Please Enter New Password \n");
    while (Serial.available() == 0) 
    {
    int newpassword = Serial.parseInt();
    if (newpassword !=0){
      newpassword = f;
      Serial.print(" Password Changed \n");
      break;
    }
    }
    
    break;



    case 3:

      
      
      break;
  
  }
  }}

