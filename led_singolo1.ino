// C++ code
//
int rosso=13;
void setup()
{
  pinMode(rosso, OUTPUT);
}

void loop()
{
  digitalWrite(rosso, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(rosso, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}