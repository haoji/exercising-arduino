int ledPin = 13; //define o pino em que o led está ligado
char leitura; //define a variável leitura que corresponde a uma letra do teclado

void setup() {
pinMode(ledPin, OUTPUT); //define que o pino 13 será uma saida 
Serial.begin(9600);
}

void loop() {
leitura = Serial.read(); // a variável leitura será obtida através do teclado 
if (leitura == 'L') {
digitalWrite(ledPin, LOW); 
  }
else if (leitura == 'H') {
digitalWrite(ledPin, HIGH); 
  }
}
