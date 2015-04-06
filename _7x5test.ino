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
 
 pinMode(colpin1, OUTPUT); // strobe
 pinMode(colpin2, OUTPUT); // strobe
 pinMode(colpin3, OUTPUT); // strobe
 pinMode(colpin4, OUTPUT); // strobe
 pinMode(colpin5, OUTPUT); // strobe
 pinMode(colpin6, OUTPUT); // strobe
 pinMode(colpin7, OUTPUT); // strobe
 
 pinMode(rowpin1, OUTPUT); // strobe
 pinMode(rowpin2, OUTPUT); // strobe
 pinMode(rowpin3, OUTPUT); // strobe
 pinMode(rowpin4, OUTPUT); // strobe
 pinMode(rowpin5, OUTPUT); // strobe

 digitalWrite(res,LOW); // reset low
 digitalWrite(strobe,HIGH); //pin 5 is RESET on the shield
}

void loop()
{
 

 



spec(colpin1, 5);
spec(colpin2, 5);
spec(colpin3, 5);
spec(colpin4, 5);
spec(colpin5, 5);
spec(colpin6, 5);
spec(colpin7, 5);
   
}

void readMSGEQ7()
// Function to read 7 band equalizers
{
 digitalWrite(res, HIGH);
 digitalWrite(res, LOW);
 for(band=0; band < 7; band++)
 {
 digitalWrite(strobe,LOW); // strobe pin on the shield - kicks the IC up to the next band 
 delayMicroseconds(30); // 
 left[band] = analogRead(0); // store left band reading
 right[band] = analogRead(1); // ... and the right
 digitalWrite(strobe,HIGH); 
 }
}

void spec(int col, int height)
{
  digitalWrite(colpin1, HIGH); 
  digitalWrite(colpin2, HIGH); 
  digitalWrite(colpin3, HIGH); 
  digitalWrite(colpin4, HIGH); 
  digitalWrite(colpin5, HIGH); 
  digitalWrite(colpin6, HIGH);
  digitalWrite(colpin7, HIGH); 
   
  digitalWrite(col, LOW);
  
  
   digitalWrite(rowpin1, LOW); 
   digitalWrite(rowpin2, LOW); 
   digitalWrite(rowpin3, LOW); 
   digitalWrite(rowpin4, LOW);
   digitalWrite(rowpin5, LOW);
  //for height
  if(height > 0)
  {
  digitalWrite(rowpin1, HIGH); 
  }
  
  if(height > 1)
  {
  digitalWrite(rowpin2, HIGH); 
  }
  if(height > 2)
  {
  digitalWrite(rowpin3, HIGH); 
  }
  
  if(height > 3)
  {
  digitalWrite(rowpin4, HIGH); 
  }
  
  if(height > 4)
  {
  digitalWrite(rowpin5, HIGH); 
  }
  
  delay(2);
}
