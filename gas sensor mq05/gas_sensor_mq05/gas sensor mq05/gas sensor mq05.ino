#define sensorPin A0

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  Serial.print("Analog output: ");
  Serial.println(readSensor());
  delay(500);
}

int readSensor() {
  unsigned int sensorValue = analogRead(sensorPin);  
  unsigned int outputValue = map(sensorValue, 0, 1023, 0, 255); 

  if (outputValue > 65)
    analogWrite(ledPin, outputValue); 

  else
    digitalWrite(ledPin, LOW);
  return outputValue;             
