int LDR; //declara a variável
int tempo;

void setup() { 
pinMode(A0, INPUT); 
Serial.begin(9600);
}

void loop() {
tempo= millis(); // base de tempo para a coleta
LDR = analogRead(A0);
{
Serial.print(tempo);
Serial.print(" "); // introduz um espaço entre as colunas 
Serial.print(LDR);
}
Serial.println(); // imprime em linhas
delay(250); 
}
