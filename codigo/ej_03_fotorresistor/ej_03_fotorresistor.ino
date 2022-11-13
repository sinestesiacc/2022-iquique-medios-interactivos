// ej_03_fotorresistor
// por montoyamoraga
// para Academia Sinestesia
// Fondart Iquique Medios Interactivos 2022
// v0.0.1 noviembre 2022
// hecho con Arduino 2.0.1

// variable para patita conectada a LED
int patitaLED = 3;

// variable para definir patita de lectura analogica
int patitaSensor = A5;
// variable para almacenar valor del potenciometro
int valorSensor = 0;
// variable para almacenar valor del sensor mapeado
int valorSensorMapeado = 0;

// valores minimo sensor
int valorMin = 1023;
int valorMax = 0;

// setup() ocurre una vez al principio
void setup() {
  // definir la patita conectada a LED como salida
  pinMode(patitaLED, OUTPUT);

    // definir la patita conectada a fotorresistor como entrada
  pinMode(patitaSensor, INPUT);

  // iniciar comunicacion serial
  Serial.begin(9600);
}

// loop() ocurre despues de setup, en bucle
void loop() {

  // leer sensor
  valorSensor = analogRead(patitaSensor);

  // imprimir valor sensor
  Serial.println(valorSensor);

  // actualizar valores minimo y maximo
  if (valorSensor < valorMin) {
    valorMin = valorSensor;
  }

  if (valorSensor > valorMax) {
    valorMax = valorSensor;
  }

  // como el valor de entrada analogica es entre 0 y 1023
  // y el valor de salida analoga que podemos hacer es entre 0 y 255
  // usamos la funcion map() para ajustar el valor
  valorSensorMapeado = map(valorSensor, valorMin, valorMax, 0, 255);

  // prender LED con funcion analogWrite
  analogWrite(patitaLED, valorSensorMapeado);
}