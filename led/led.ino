int LED = 12;

void setup() 
{
  pinMode(LED, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED, HIGH);   
  delay(1000);                      
  digitalWrite(LED, LOW);    
  delay(1000);                      
}
