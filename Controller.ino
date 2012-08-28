//
void setup() {
  pinMode(A0, INPUT);
  digitalWrite(A0, HIGH);
  
  pinMode(A1, INPUT);
  digitalWrite(A1, HIGH);
  
  pinMode(A2, INPUT);
  digitalWrite(A2, HIGH);
  
  pinMode(A3, INPUT);
  digitalWrite(A3, HIGH);
  
  pinMode(A4, INPUT);
  digitalWrite(A4, HIGH);
}

void loop() {
  
  //Serial.println(analogRead(A3));
  Keyboard.set_key6(0);
  
  if (analogRead(A0) < 1000) {
    Keyboard.set_key1(KEY_T); 
  }
  else {
    Keyboard.set_key1(0); 
  }
  
  if (analogRead(A1) < 1000) {
    Keyboard.set_key2(KEY_R);
  }
  else {
    Keyboard.set_key2(0); 
  }

  if (analogRead(A2) < 1000) {
    Keyboard.set_key3(KEY_E);
  }
  else {
    Keyboard.set_key3(0); 
  }

  if (analogRead(A3) < 1000) {
    Serial.println("derp");
    Keyboard.set_key4(KEY_W);
  }
  else {
    Keyboard.set_key4(0); 
  }
  
  if (analogRead(A4) < 1000) {
    Keyboard.set_key5(KEY_Q);
  }
  else {
    Keyboard.set_key5(0); 
  }
  
  Keyboard.send_now();
}
