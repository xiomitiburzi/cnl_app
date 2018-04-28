void setup(void)
{
	pinMode(21, OUTPUT);
}

void loop(void)
{
	digitalWrite(21, HIGH);
	delay(1500);
	digitalWrite(21, LOW);
	delay(1500);
}
