int LDR; // declara a variavel LDR sensor de luz 
float VLDR;
unsigned long tempo; //declara a variável 

void setup() {
pinMode(A0, INPUT); 
Serial.begin(9600);
}

void loop() {
tempo= millis(); // base de tempo para a coleta LDR = analogRead(A0);
VLDR = LDR * (5.00)/1024;
{
Serial.print(tempo);
Serial.print(" "); // introduz um espaço para as colunas Serial.print(LDR);
Serial.print(" ");
Serial.print(VLDR);
Serial.println(); // imprime em linhas
delay(250);
  } 
}
