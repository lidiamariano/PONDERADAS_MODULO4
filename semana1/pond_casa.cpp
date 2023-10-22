const int redPin = 9;    // Pino do LED vermelho
const int greenPin = 10; // Pino do LED verde
const int bluePin = 11;  // Pino do LED azul

void setup() {
  // Define os pinos como saídas
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Piscar freneticamente e trocar as cores do LED RGB
  digitalWrite(redPin, random(2));
  digitalWrite(greenPin, random(2));
  digitalWrite(bluePin, random(2));
  delay(100); // Ajuste a velocidade de piscar alterando o valor do delay
}
