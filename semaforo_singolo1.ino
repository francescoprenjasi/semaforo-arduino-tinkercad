// C++ code
//
int rosso=13;
int giallo=12;
int verde=11;
void setup()
{
  pinMode(rosso, OUTPUT);
  pinMode(giallo,OUTPUT);
  pinMode(verde,OUTPUT);
}

void loop()
{
  digitalWrite(rosso, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(rosso, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(giallo, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(giallo, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(verde, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(verde, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}