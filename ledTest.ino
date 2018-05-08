#define red		D0		// Really Blue??
#define blue    D1		// Really Green??
#define green   D2		// Really Purple?? 

void setup()
{
	/* add setup code here */

	pinMode(red, OUTPUT);
	pinMode(blue, OUTPUT);
	pinMode(green, OUTPUT);
}

void loop()
{
	/* add main program code here */

	digitalWrite(blue, HIGH); //Flash Red
	digitalWrite(red, LOW);
	digitalWrite(green, HIGH);
	delay(1000);
	digitalWrite(blue, LOW); //Flash Blue
	digitalWrite(red, HIGH);
	digitalWrite(green, HIGH);
	delay(1000);
	digitalWrite(blue, HIGH); //Flash Green
	digitalWrite(red, HIGH);
	digitalWrite(green, LOW);
	delay(1000);
}