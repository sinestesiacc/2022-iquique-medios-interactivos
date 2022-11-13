// ej_04_pulsador
// por montoyamoraga
// para Academia Sinestesia
// Fondart Iquique Medios Interactivos 2022
// v0.0.1 noviembre 2022
// hecho con Arduino 2.0.1

// variable para patita conectada a LED
int patitaLED = 3;

// variable para definir patita de lectura analogica
int patitaPerilla = A0;
// variable para almacenar valor de la perilla
int valorPerilla = 0;
// variable para almacenar valor mapeado de la perilla
int valorPerillaMapeado = 0;

// patita pulsador
int patitaPulsador = 7;
// valor del sensor patita pulsador
int valorPulsador = 0;

// setup() ocurre una vez al principio
void setup() {
  // definir la patita conectada a LED como salida
  pinMode(patitaLED, OUTPUT);

  // definir la patita conectada a LED como entrada
  pinMode(patitaPulsador, INPUT);

  // iniciar comunicacion serial
  Serial.begin(9600);
}

// loop() ocurre despues de setup, en bucle
void loop() {

  // leer perilla
  valorPerilla = analogRead(patitaPerilla);

  // leer pulsador
  valorPulsador = digitalRead(patitaPulsador);

  // como el valor de entrada analogica es entre 0 y 1023
  // y el valor de salida analoga que podemos hacer es entre 0 y 255
  // usamos la funcion map() para ajustar el valor
  valorPerillaMapeado = map(valorPerilla, 0, 1023, 0, 255);

  // imprimir valores sensores
  Serial.print(valorPulsador);
  Serial.print(", ");
  Serial.print(valorPerilla);
  Serial.print(", ");
  Serial.println(valorPerillaMapeado);

  // si el boton no esta presionado
  if (valorPulsador == 0) {
    // apagar LED
    analogWrite(patitaLED, 0);
  }
  // si el boton esta presionado
  else {
    // prender LED con funcion analogWrite
    analogWrite(patitaLED, valorPerillaMapeado);
  }
}