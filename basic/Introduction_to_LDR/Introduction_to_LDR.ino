int LDR; //declara a variavel

void setup() { 
pinMode(A0, INPUT); 
Serial.begin(9600);
}

void loop() {
LDR = analogRead(A0); 
Serial.print("Valor lido no LDR:\t"); 
Serial.println(LDR);
delay(250); 
}
