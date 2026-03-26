int rossoN=13;
int gialloN=12;
int verdeN=11;
int rossoS=6;
int gialloS=5;
int verdeS=4;
int rossoO=3;
int gialloO=2;
int verdeO=1;
int rossoE=10;
int gialloE=9;
int verdeE=8;

void setup(){
  pinMode(rossoN, OUTPUT);
  pinMode(gialloN, OUTPUT);
  pinMode(verdeN, OUTPUT);
  pinMode(rossoS, OUTPUT);
  pinMode(gialloS, OUTPUT);
  pinMode(verdeS, OUTPUT);
  pinMode(rossoO, OUTPUT);
  pinMode(gialloO, OUTPUT);
  pinMode(verdeO, OUTPUT);
  pinMode(rossoE, OUTPUT);
  pinMode(gialloE, OUTPUT);
  pinMode(verdeE, OUTPUT);
}

void loop() {
  // NORD e SUD VERDI EST e OVEST ROSSI 
  digitalWrite(verdeN, HIGH); digitalWrite(verdeS, HIGH);
  digitalWrite(rossoN, LOW);  digitalWrite(rossoS, LOW);
  digitalWrite(gialloN, LOW); digitalWrite(gialloS, LOW);
  
  digitalWrite(rossoE, HIGH); digitalWrite(rossoO, HIGH);
  digitalWrite(verdeE, LOW);  digitalWrite(verdeO, LOW);
  digitalWrite(gialloE, LOW); digitalWrite(gialloO, LOW);
  delay(5000); 

  //  NORD e SUD GIALLI EST e OVEST ROSSI 
  digitalWrite(verdeN, LOW);   digitalWrite(verdeS, LOW);
  digitalWrite(gialloN, HIGH); digitalWrite(gialloS, HIGH);
  delay(2000); 

  
  digitalWrite(gialloN, LOW); digitalWrite(gialloS, LOW);
  digitalWrite(rossoN, HIGH); digitalWrite(rossoS, HIGH);
  delay(1000); 

  //  EST e OVEST VERDI NORD e SUD ROSSI 
  digitalWrite(rossoE, LOW);  digitalWrite(rossoO, LOW);
  digitalWrite(verdeE, HIGH); digitalWrite(verdeO, HIGH);
  
  digitalWrite(rossoN, HIGH); digitalWrite(rossoS, HIGH);
  delay(5000); 

  //EST e OVEST GIALLI NORD e SUD ROSSI 
  digitalWrite(verdeE, LOW);   digitalWrite(verdeO, LOW);
  digitalWrite(gialloE, HIGH); digitalWrite(gialloO, HIGH);
  delay(2000);

    
  digitalWrite(gialloE, LOW); digitalWrite(gialloO, LOW);
  digitalWrite(rossoE, HIGH); digitalWrite(rossoO, HIGH);
  delay(1000);
}