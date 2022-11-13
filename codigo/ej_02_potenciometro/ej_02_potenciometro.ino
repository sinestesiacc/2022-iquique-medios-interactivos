// ej_02_potenciometro
// por montoyamoraga
// para Academia Sinestesia
// Fondart Iquique Medios Interactivos 2022
// v0.0.1 noviembre 2022
// hecho con Arduino 2.0.1

// variable para patita conectada a LED
int patitaLED = 13;

// variables para tiempo, en milisegundos
int tiempoEncendido = 1000;
int tiempoApagado = 500;

int valorSensor;
int patitaSensor = A0;

// setup() ocurre una vez al principio
void setup() {
  pinMode(patitaLED, OUTPUT);

  // iniciar comunicacion serial
  Serial.begin(9600);
}

// loop() ocurre despues de setup, en bucle
void loop() {

  // leer sensor
  valorSensor = analogRead(patitaSensor);

  // imprimir valor sensor
  Serial.println(valorSensor);

  // prender LED
  digitalWrite(patitaLED, 1);
  // hacer pausa correspondiente
  delay(tiempoEncendido);

  // apagar LED
  digitalWrite(patitaLED, 0);
  // hacer pausa correspondiente
  delay(tiempoApagado);
}