void setup(void)
{
	pinMode(21, OUTPUT);
}

void loop(void)
{
	digitalWrite(21, HIGH);
	delay(2500);
	digitalWrite(21, LOW);
	delay(2500);
}
