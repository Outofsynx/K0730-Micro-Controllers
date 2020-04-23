/*
Het volgende script wordt gebruikt voor opdracht 3.
*/
int Number=1;
int btn = 9;

void setup()
{
	pinMode(btn, INPUT);
	for (int i  = 3; i <= 8; i++)
		pinMode(i, OUTPUT);
	
}

void loop()
{
	if(digitalRead(btn) == HIGH){	
		Number++;
		if(Number > 6){
			Number = 1;
		}	
	} else if(digitalRead(btn) == LOW){
		delay(5000);
	}
	Display();
}       


void Display(){
	for (int pin = 4; pin <= 7; pin++) // For each pin
		digitalWrite(pin, (bool)(Number & (1 << pin - 4)));
}