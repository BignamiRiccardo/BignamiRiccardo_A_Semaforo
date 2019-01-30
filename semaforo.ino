  int red1 = 2;
  int yellow1 = 3;
  int green1 = 4;
  int red2 = 5;
  int yellow2 = 6;
  int green2 = 7;
  
void setup() {
  // put your setup code here, to run once:
  pinMode(red1, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(green2, OUTPUT);
}
void lampeggia1()
{
  digitalWrite (green1, HIGH);
  delay (500);
  digitalWrite (green1, LOW);
  delay (500);
}
void lampeggia2()
{
  digitalWrite(green2, HIGH);
  delay(500);
  digitalWrite(green2, LOW);
  delay(500);
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (red1, HIGH);
  digitalWrite (green2, HIGH);
  delay (5000);
  digitalWrite (yellow1, HIGH);
  lampeggia2();
  lampeggia2();
  lampeggia2();
  lampeggia2();
  digitalWrite (red1, LOW);
  digitalWrite (yellow1, LOW);
  digitalWrite (green1, HIGH);
  digitalWrite (yellow2, HIGH);
  delay(1000);
  digitalWrite (red2, HIGH);
  delay(5000); 
  digitalWrite(yellow2, HIGH);
  lampeggia1();
  lampeggia1();
  lampeggia1();
  lampeggia1();
  digitalWrite(red2, LOW);
  digitalWrite(green2, HIGH);
  digitalWrite(yellow2, LOW);
  digitalWrite (yellow1, HIGH);
  delay (1000);
  digitalWrite (red1, HIGH);
  delay(5000);
  
}
