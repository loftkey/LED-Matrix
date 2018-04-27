int colpin1 = 12;
int colpin2 = 11;
int colpin3 = 10;
int rowpin1 = 9;
int rowpin2 = 8;
int rowpin3 = 7;

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
 pinMode(rowpin1, OUTPUT); // strobe
 pinMode(rowpin2, OUTPUT); // strobe
 pinMode(rowpin3, OUTPUT); // strobe

 digitalWrite(res,LOW); // reset low
 digitalWrite(strobe,HIGH); //pin 5 is RESET on the shield
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
 Serial.println();
// display values of right channel on serial monitor
 for (band = 0; band < 7; band++)
 {
 Serial.print(right[band]);
 Serial.print(" ");
 }
 Serial.println();



spec(colpin1, left[0]);
spec(colpin2, left[1]);
spec(colpin3, left[2]);
   
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
  digitalWrite(col, LOW);
  
  
   digitalWrite(rowpin1, LOW); 
   digitalWrite(rowpin2, LOW); 
   digitalWrite(rowpin3, LOW); 
  //for height
  if(height > 60)
  {
  digitalWrite(rowpin1, HIGH); 
  }
  
  if(height > 80)
  {
  digitalWrite(rowpin2, HIGH); 
  }
  
  if(height > 100)
  {
  digitalWrite(rowpin3, HIGH); 
  }
  
  delay(6);
}
