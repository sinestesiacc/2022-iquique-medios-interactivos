// ej_04_rgb
// por montoyamoraga
// para Academia Sinestesia
// Fondart Iquique Medios Interactivos 2022
// v0.0.1 noviembre 2022
// hecho con Arduino 2.0.1

// variable para patitas conectada a LED RGB
int patitaR = 9;
int patitaG = 10;
int patitaB = 11;

// variable para definir patita de lectura analogica
int patitaPerilla = A0;
// variable para almacenar valor de la perilla
int valorPerilla = 0;
// variable para almacenar valor mapeado de la perilla
int valorPerillaMapeado = 0;

// patitas pulsadores
int patitaPulsadorIzq = 7;
int patitaPulsadorDer = 6;
// valor de los sensores pulsador
int valorPulsadorIzq = 0;
int valorPulsadorDer = 0;

// setup() ocurre una vez al principio
void setup() {
  // definir la patitas conectada a LED RGB como salida
  pinMode(patitaR, OUTPUT);
  pinMode(patitaG, OUTPUT);
  pinMode(patitaB, OUTPUT);

  // definir la patitas conectada a pulsador como entrada
  pinMode(patitaPulsadorIzq, INPUT);
  pinMode(patitaPulsadorDer, INPUT);

  // iniciar comunicacion serial
  Serial.begin(9600);
}

// loop() ocurre despues de setup, en bucle
void loop() {

  // leer perilla
  valorPerilla = analogRead(patitaPerilla);

  // leer pulsadores
  valorPulsadorIzq = digitalRead(patitaPulsadorIzq);
  valorPulsadorDer = digitalRead(patitaPulsadorDer);

  // como el valor de entrada analogica es entre 0 y 1023
  // y el valor de salida analoga que podemos hacer es entre 0 y 255
  // usamos la funcion map() para ajustar el valor
  valorPerillaMapeado = map(valorPerilla, 0, 1023, 0, 255);

  // imprimir valores sensores
  Serial.print(valorPulsadorIzq);
  Serial.print(", ");
  Serial.print(valorPulsadorDer);
  Serial.print(", ");
  Serial.print(valorPerilla);
  Serial.print(", ");
  Serial.println(valorPerillaMapeado);

  // si ningun boton esta presionado
  if (valorPulsadorIzq == 0 && valorPulsadorDer == 0) {
    // hacer nada
  }
  // si solamente pulsador izquierdo esta presionado
  else if (valorPulsadorIzq == 1 && valorPulsadorDer == 0) {

    // escribir en canal rojo
    analogWrite(patitaR, valorPerillaMapeado);
  }
  // si solamente pulsador derecho esta presionado
  else if (valorPulsadorIzq == 0 && valorPulsadorDer == 1) {

    // escribir en canal verde
    analogWrite(patitaG, valorPerillaMapeado);
  }
  // si ambos botones estan presionados
  else if (valorPulsadorIzq == 1 && valorPulsadorDer == 1) {

    // escribir en canal azul
    analogWrite(patitaB, valorPerillaMapeado);
  }

}