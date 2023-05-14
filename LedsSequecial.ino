int timer = 100; //tempo para controle ALTERE SE QUISER
void setup() {
// For para configurar cada pino como saida
for (int thisPin = 3; thisPin < 8; thisPin++)
{
 pinMode(thisPin, OUTPUT);
}
}
void loop() {
// loop do pino 3 ao 7
for (int thisPin = 3; thisPin < 8; thisPin++) {
 // liga este pino:
 digitalWrite(thisPin, HIGH);
 delay(timer);
 // desliga este pino:
 digitalWrite(thisPin, LOW);
}
// loop do pino 7 ao 3
for (int thisPin = 7; thisPin >= 3; thisPin--) {
 // liga este pino:
 digitalWrite(thisPin, HIGH);
 delay(timer);
 // desliga este pino:
 digitalWrite(thisPin, LOW);
}
}
