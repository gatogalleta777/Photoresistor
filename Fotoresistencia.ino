const int fotoresistenciaPin = A0;  
const int focoYami = 2; 
const int focoHikari = 3;  
const int umbralOscuro = 5;


void setup() {
  Serial.begin(9600);
  pinMode(focoYami, OUTPUT);
  pinMode(focoHikari, OUTPUT);
}

void loop() {
  int lectura = analogRead(fotoresistenciaPin);

  Serial.print("Valor de la fotoresistencia: ");
  Serial.println(lectura);


  if (lectura <= umbralOscuro) {
    digitalWrite(focoYami, HIGH);
    digitalWrite(focoHikari, LOW);
    
  } 
  
  else {
    digitalWrite(focoYami, LOW);
    digitalWrite(focoHikari, HIGH);
  }

  delay(500);  
}