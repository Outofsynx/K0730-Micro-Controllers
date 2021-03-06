/*
Het volgende script wordt gebruikt voor opdracht 1 en 2.
LET OP! Opdracht 1 en 2 moeten apart worden ingeleverd.
*/

int a = 5;
int b = 4;
int c = 3;
int d = 2;
int btn = 6;
int ON = 7;
bool S = 0;

long timer = 0;
int timerdelay = 1000;
int stand = 0;
long randNumber;

void setup() {
	pinMode(btn, INPUT);
	pinMode(ON, OUTPUT);
	
	digitalWrite(ON, LOW);
	Serial.begin(9600);
	randomSeed(analogRead(0));
}

void loop() {
	if (digitalRead(btn) == HIGH && S == 0) {
		S = 1;
		stand = 1;
	}
	randNumber = random(1, 7);
	if (millis() >= timer + timerdelay && S == 1) {
		timer = millis();
		if(randNumber == 1){
			EEN();
		}
		else if(randNumber == 2){
			TWEE();
		}
		else if(randNumber == 3){
			DRIE();
		}
		else if(randNumber == 4){
			VIER();
		}
		else if(randNumber == 5){
			VIJF();
		}
		else if(randNumber == 6){
			ZES();
		}
		switch (stand) {
			case 1:
				Serial.println(randNumber);
				break;
			case 2:
				Serial.println(randNumber);
				break;
			case 3:
				Serial.println(randNumber);
				break;
			case 4:
				Serial.println(randNumber);
				S = 0;
				break;
				
		}
		
		stand++;
	}
}
void CLEAR() {
	digitalWrite(a, LOW);
	digitalWrite(b, LOW);
	digitalWrite(c, LOW);
	digitalWrite(d, LOW);
}
void EEN() {
	digitalWrite(a, LOW);
	digitalWrite(b, LOW);
	digitalWrite(c, LOW);
	digitalWrite(d, HIGH);
}

void TWEE() {
	digitalWrite(a, LOW);
	digitalWrite(b, LOW);
	digitalWrite(c, HIGH);
	digitalWrite(d, LOW);
}

void DRIE() {
	digitalWrite(a, LOW);
	digitalWrite(b, LOW);
	digitalWrite(c, HIGH);
	digitalWrite(d, HIGH);
}


void VIER() {
	digitalWrite(a, LOW);
	digitalWrite(b, HIGH);
	digitalWrite(c, LOW);
	digitalWrite(d, LOW);
}


void VIJF() {
	digitalWrite(a, LOW);
	digitalWrite(b, HIGH);
	digitalWrite(c, LOW);
	digitalWrite(d, HIGH);
}


void ZES() {
	digitalWrite(a, LOW);
	digitalWrite(b, HIGH);
	digitalWrite(c, HIGH);
	digitalWrite(d, LOW);
}
