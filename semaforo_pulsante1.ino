// Definizione dei pin
int Verde = 3;
int Giallo = 4;
int Rosso = 5;
int Pulsante = 2;
int statoPulsante = 0;

void setup() {
  
  pinMode(Verde, OUTPUT);
  pinMode(Giallo, OUTPUT);
  pinMode(Rosso, OUTPUT);
  pinMode(Pulsante, INPUT);
}

void loop() {
  
  statoPulsante = digitalRead(Pulsante);

  if (statoPulsante == HIGH) {
    
    digitalWrite(Verde, HIGH); 
    delay(2000);                  
    digitalWrite(Verde, LOW);  

    digitalWrite(Giallo, HIGH); 
    delay(1000);                   
    digitalWrite(Giallo, LOW);  

    digitalWrite(Rosso, HIGH); 
    delay(2000);                  
    digitalWrite(Rosso, LOW);  
  }
}