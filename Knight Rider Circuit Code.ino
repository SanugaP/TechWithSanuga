void setup() {
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  int time = 150;

  for(int i = 1; i < 7; i++){
    digitalWrite(i, HIGH);A
    delay(time);
    digitalWrite(i, LOW);
  }
  for(int q = 5; q < 1; q--){
    digitalWrite(q, HIGH);
    delay(time);
    digitalWrite(q, LOW);
  }
}






