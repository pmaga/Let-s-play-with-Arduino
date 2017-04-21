// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(8, OUTPUT); //red
  pinMode(7, OUTPUT); //orange
  pinMode(6, OUTPUT); //green
  
  pinMode(5, INPUT_PULLUP); //button

  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);

  delay(1000);
  while(digitalRead(5) == HIGH) {}

  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);

  delay(1000);
  while(digitalRead(5) == HIGH) {}
  
  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);

  delay(1000);
  while(digitalRead(5) == HIGH) {}
  
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);

  delay(1000);
  while(digitalRead(5) == HIGH) {}
}
