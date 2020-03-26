/*    This is a default program--
    Use File->Load Prog to load a different program
*/

#include <Servo.h> 

Servo servo; 
int snelheid = 45;
const int buttonHoger = 3;
const int buttonLager = 4;
const int buttonReset = 5;

int buttonHogerV = 0;
int buttonResetV = 0;
int buttonLagerV = 0;


void setup()
{
	Serial.begin(9600);
	servo.attach(2);
}

void loop()
{
	buttonHogerV = digitalRead(buttonHoger);
	buttonLagerV = digitalRead(buttonLager);
	buttonResetV = digitalRead(buttonReset);
	
	
	
	if(buttonHogerV == 0){
		if(snelheid <180){
			
			snelheid = snelheid + 1;
		}
	}
	
	if(buttonLagerV == 0){
		if(snelheid >0){
			
			snelheid = snelheid -1;
		}
	}
	
	if(buttonResetV == 0){
		snelheid = snelheid =90;
	}
	
	servo.write(snelheid);
	delay(100);
}

