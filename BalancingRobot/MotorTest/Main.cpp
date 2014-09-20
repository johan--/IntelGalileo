// Main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "arduino.h"

int _tmain(int argc, _TCHAR* argv[])
{
	return RunArduinoSketch();
}

int motorADir = 4;
int motorBDir = 7;

int motorASpeed = 5;
int motorBSpeed = 6;


void setup()
{
	pinMode(motorADir, OUTPUT);
	pinMode(motorBDir, OUTPUT);
	pinMode(motorASpeed, OUTPUT);
	pinMode(motorBSpeed, OUTPUT);

	wprintf(L"Motor shield initialized\n");

	wprintf(L"Motor shield initialized\n");
}

// the loop routine runs over and over again forever:
void loop()
{
	digitalWrite(motorADir, HIGH);
	digitalWrite(motorBDir, HIGH);
	analogWrite(motorASpeed, 128);
	analogWrite(motorBSpeed, 128);

	delay(1000);
}