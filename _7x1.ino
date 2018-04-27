// Example 48.1 - tronixstuff.com/tutorials > chapter 48 - 30 Jan 2013 
// MSGEQ7 spectrum analyser shield - basic demonstration
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
 pinMode(13, OUTPUT); // strobe
 pinMode(12, OUTPUT); // strobe
 pinMode(11, OUTPUT); // strobe
 pinMode(10, OUTPUT); // strobe
 pinMode(9, OUTPUT); // strobe
 pinMode(8, OUTPUT); // strobe
 pinMode(7, OUTPUT); // strobe
 digitalWrite(res,LOW); // reset low
 digitalWrite(strobe,HIGH); //pin 5 is RESET on the shield
}
void readMSGEQ7()
// Function to read 7 band equalizers
{
 digitalWrite(res, HIGH);
 digitalWrite(res, LOW);
 for(band=0; band <7; band++)
 {
 digitalWrite(strobe,LOW); // strobe pin on the shield - kicks the IC up to the next band 
 delayMicroseconds(30); // 
 left[band] = analogRead(0); // store left band reading
 right[band] = analogRead(1); // ... and the right
 digitalWrite(strobe,HIGH); 
 }
}
void loop()
{
  //delay(100);
 readMSGEQ7();
 /*
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
 */
 if(left[1] > 100)
 {
   digitalWrite(13, HIGH); 
 }
 else
 {
   digitalWrite(13, LOW); 
 }
  if(left[2] > 120)
 {
   digitalWrite(12, HIGH); 
 }
 else
 {
   digitalWrite(12, LOW); 
 }
 
  if(left[3] > 100)
 {
   digitalWrite(11, HIGH); 
 }
 else
 {
   digitalWrite(11, LOW); 
 }
 
  if(left[4] > 100)
 {
   digitalWrite(10, HIGH); 
 }
 else
 {
   digitalWrite(10, LOW); 
 }
 
 
  if(left[5] > 100)
 {
   digitalWrite(9, HIGH); 
 }
 else
 {
   digitalWrite(9, LOW); 
 }
 
 
  if(left[6] > 100)
 {
   digitalWrite(8, HIGH); 
 }
 else
 {
   digitalWrite(8, LOW); 
 }
   
  if(left[7] > 100)
 {
   digitalWrite(7, HIGH); 
 }
 else
 {
   digitalWrite(7, LOW); 
 }
 
}
