# clase1

jueves 03 noviembre 2022, en línea

hoy aprenderemos:

- contexto artes mediales y Arduino
- funciones básicas de Arduino: setup() y loop()

## programa y organización

- organización: https://github.com/sinestesiacc
- programa: https://github.com/sinestesiacc/2022-iquique-medios-interactivos/
- berlin code of conduct: https://berlincodeofconduct.org/es/

## presentación estudiantes

cada estudiante se presenta durante 60 segundos, respondiendo un subconjunto de las siguientes preguntas:

- nombre
- pronombre
- experiencia en artes
- experiencia en programación
- por qué tomaste este curso de Sinestesia?

## presentación de profesor

direcciones web:

- https://montoyamoraga.io/
- https://github.com/montoyamoraga/

organizaciones:

- NYU ITP https://tisch.nyu.edu/itp
- MIT Media Lab https://www.media.mit.edu/
- Opera of the Future https://www.media.mit.edu/groups/opera-of-the-future/
- Future Sketches https://www.media.mit.edu/groups/future-sketches/
- Processing Foundation https://processingfoundation.org/
- p5.js https://p5js.org/
- School of Machines, Making and Make-Believe https://www.schoolofma.org/
- Departamento de Diseño, Facultad de Arquitectura y Urbanismo, Universidad de Chile https://www.fau.uchile.cl/diseno

## sistemas numéricos (15 min)

- decimal: base 10
- binario: base 2
- hexadecimal: base 16

un número como 123,456 en decimal

lo descomponemos como 1*$10^{2}$ + 2*$10^{1}$ + 3*$10^{0}$ + 4*$10^{-1}$ + 5*$10^{-2}$ + 6*$10^{-3}$

| base 10 | base 2 | base 16 |
| ------- | ------ | ------- |
| 00      | 00000  | 00      |
| 01      | 00001  | 01      |
| 02      | 00010  | 02      |
| 03      | 00011  | 03      |
| 04      | 00100  | 04      |
| 05      | 00101  | 05      |
| 06      | 00110  | 06      |
| 07      | 00110  | 07      |
| 08      | 01000  | 08      |
| 09      | 01001  | 09      |
| 10      | 01010  | 0A      |
| 11      | 01011  | 0B      |
| 12      | 01100  | 0C      |
| 13      | 01101  | 0D      |
| 14      | 01110  | 0E      |
| 15      | 01110  | 0F      |
| 16      | 10000  | 10      |
| 17      | 10001  | 11      |
| 18      | 10010  | 12      |
| 19      | 10011  | 13      |
| 20      | 10100  | 14      |
| 21      | 10101  | 15      |
| 22      | 10110  | 16      |
| 23      | 10111  | 17      |

## convenciones en programación (15 min)

- en programación, contamos desde 0, por ejemplo si hay 3 elementos, son 0, 1, 2.

- en este curso no usaremos espacios para nombres de carpetas, archivos o variables, en vez de eso, usaremos distintas estrategias:

  - usaremos guiones "-", guiones bajos "\_" para nuestros archivos y carpetas.
  - las variables de nuestro código estarán escritas en notación camello: donde escribimos todas las palabras juntas sin espacios, la primera es todo con minúsculas, y después cada palabra adicional empieza con mayúscula, por ejemplo estaPalabraEstaEscritaEnNotacionCamello.

- generalmente los espacios entre palabras importan, pero no importa cuánto espacio hay, el computador los omite, pero son muy importantes para que nuestro código sea legible y esté formateado de una manera legible.

# descargar Arduino IDE

- ir a https://www.arduino.cc/
- luego a la sección de software https://www.arduino.cc/en/software
- descargar Arduino IDE 2.0.1 o más reciente, para su sistema operativo.

## placa Arduino Uno

- https://en.wikipedia.org/wiki/Arduino_Uno
- https://en.wikipedia.org/wiki/ATmega328

## instrumentos musicales relacionados

- Bastl microGranny 2 https://bastl-instruments.com/instruments/microgranny
- https://bleeplabs.com/product/the-bleep-drum/
- http://www.oficinadesonido.org/htr2-hanan-cumbia/

## próximas clases

- introducción al lenguaje Arduino
- funciones y variables
- sensores y actuadores
- interactividad
- comunicación serial
- protocolos de comunicación
