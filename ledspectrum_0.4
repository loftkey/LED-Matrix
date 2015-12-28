/*
by Ody
12-2015
*/
int colpin1 = 7;
int colpin2 = 8;
int colpin3 = 9;
int colpin4 = 10;
int colpin5 = 11;
int colpin6 = 12;
int colpin7 = 13;


int rowpin1 = 6;
int rowpin2 = A2;
int rowpin3 = A3;
int rowpin4 = A4;
int rowpin5 = A5;

int strobe = 4; // strobe pins on digital 4
int res = 5; // reset pins on digital 5
int left[7]; // store band values in these arrays
int right[7];
int band;
void setup()
{

	Serial.begin(115200);
	pinMode(res, OUTPUT); // reset
	pinMode(strobe, OUTPUT); // strobe

	pinMode(colpin1, OUTPUT);
	pinMode(colpin2, OUTPUT);
	pinMode(colpin3, OUTPUT);
	pinMode(colpin4, OUTPUT);
	pinMode(colpin5, OUTPUT);
	pinMode(colpin6, OUTPUT);
	pinMode(colpin7, OUTPUT);

	pinMode(rowpin1, OUTPUT);
	pinMode(rowpin2, OUTPUT);
	pinMode(rowpin3, OUTPUT);
	pinMode(rowpin4, OUTPUT);
	pinMode(rowpin5, OUTPUT);

	digitalWrite(res, LOW); // reset low
	digitalWrite(strobe, HIGH); //pin 5 is RESET on the shield
}

void loop()
{
	readMSGEQ7();


	// display values of left channel on serial monitor
	for (band = 0; band < 7; band++)
	{
		Serial.print(left[band]);
		Serial.print(" ");
	}
	Serial.println(" - Left ");
	// display values of right channel on serial monitor
	for (band = 0; band < 7; band++)
	{
		Serial.print(right[band]);
		Serial.print(" ");
	}
	Serial.println(" - Right" );



	spec(colpin1, left[0]);
	spec(colpin2, left[1]);
	spec(colpin3, left[2]);
	spec(colpin4, left[3]);
	spec(colpin5, left[4]);
	spec(colpin6, left[5]);
	spec(colpin7, left[6]);

	/*
	spec(colpin1, right[0]);
	spec(colpin2, right[1]);
	spec(colpin3, right[2]);
	spec(colpin4, right[3]);
	spec(colpin5, right[4]);
	spec(colpin6, right[5]);
	spec(colpin7, right[6]);
	*/
}

void readMSGEQ7()
// Function to read 7 band equalizers
{
	digitalWrite(res, HIGH);
	digitalWrite(res, LOW);
	for (band = 0; band < 7; band++)
	{
		digitalWrite(strobe, LOW); // strobe pin on the shield - kicks the IC up to the next band 
		delayMicroseconds(30); // 
		left[band] = analogRead(0); // store left band reading
		right[band] = analogRead(1); // ... and the right
		digitalWrite(strobe, HIGH);
	}
}

// function that lights of a column depending on height
void spec(int col, int height)
{
	digitalWrite(colpin1, HIGH);
	digitalWrite(colpin2, HIGH);
	digitalWrite(colpin3, HIGH);
	digitalWrite(colpin4, HIGH);
	digitalWrite(colpin5, HIGH);
	digitalWrite(colpin6, HIGH);
	digitalWrite(colpin7, HIGH);

	digitalWrite(rowpin1, LOW);
	digitalWrite(rowpin2, LOW);
	digitalWrite(rowpin3, LOW);
	digitalWrite(rowpin4, LOW);
	digitalWrite(rowpin5, LOW);

	digitalWrite(col, LOW);

	//for height
	if (height > 73)
	{
		digitalWrite(rowpin1, HIGH);
	}

	if (height > 80)
	{
		digitalWrite(rowpin2, HIGH);
	}

	if (height > 100)
	{
		digitalWrite(rowpin3, HIGH);
	}

	if (height > 120)
	{
		digitalWrite(rowpin4, HIGH);
	}

	if (height > 140)
	{
		digitalWrite(rowpin5, HIGH);
	}

	delay(2);
}
