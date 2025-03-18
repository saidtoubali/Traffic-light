int red = 2;
int orange = 3;
int green = 4;
void setup() {
  pinMode(red, OUTPUT);
  pinMode(orange, OUTPUT);
  pinMode(green, OUTPUT);
}
void loop() {
  digitalWrite(red, HIGH);
  digitalWrite(orange, LOW);
  digitalWrite(green, LOW);
    delay(1000);
  digitalWrite(red, LOW);
  digitalWrite(orange, HIGH);
  digitalWrite(green, LOW);
    delay(500);
  digitalWrite(red, LOW);
  digitalWrite(orange, LOW);
  digitalWrite(green, HIGH);
    delay(1000);
}
