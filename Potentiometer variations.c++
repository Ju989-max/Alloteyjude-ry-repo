
const int potPin = 32;  

void setup() {
  Serial.begin(115200);         
  pinMode(potPin, INPUT);       
}
void loop() {
  int potValue = analogRead(potPin);    
  Serial.print("Potentiometer Value: ");
  Serial.println(potValue);            

  delay(200);                           
}
