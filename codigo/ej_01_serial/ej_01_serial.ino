// ej_01_serial
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

// setup() ocurre una vez al principio
void setup() {

  // configurar la patita digital como salida
  pinMode(patitaLED, OUTPUT);

  // iniciar comunicacion serial
  Serial.begin(9600);
}

// loop() ocurre despues de setup, en bucle
void loop() {

  // prender LED
  digitalWrite(patitaLED, 1);
  // imprimir mensaje en consola
  Serial.println("LED encendido");
  // hacer pausa correspondiente
  delay(tiempoEncendido);

  // apagar LED
  digitalWrite(patitaLED, 0);
  // imprimir mensaje en consola
  Serial.println("LED apagado");
  // hacer pausa correspondiente
  delay(tiempoApagado);
}