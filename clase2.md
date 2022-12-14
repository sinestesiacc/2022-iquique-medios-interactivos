# clase2

sábado 12 noviembre 2022, presencial

## condiciones iniciales y de refresco con setup() y loop()

las funciones más fundamentales que usaremos en Arduino son setup() y loop().

setup() corre una vez y al principio, y la usaremos para definir las condiciones iniciales del bosquejo, como la configuración de las patitas de la placa Arduino.

loop() corre después de setup(), en bucle y hasta que cerremos la aplicación. sirve para refrescar el bosquejo, para leer sensores y enviar información a actuadores.

setup() y loop() son funciones, que son colecciones de instrucciones de código que siguen la siguiente sintaxis cuando son declaradas:

```arduino
tipo nombre(arg0, arg1, ...) {
  // linea
  // otra linea
  // etc
}
```

donde tipo nos indica el tipo de dato que la función emite tras finalizar, puede ser número, palabra, o nada "void".

en nuestros códigos de este curso siempre declararemos las funciones setup() y loop(), que son llamadas y corridas por Arduino de forma automática.

## condicionales if / else

podemos hacer que nuestro código tenga bifurcaciones para distintos comportamientos, al usar condicionales, que en código tienen esta sintaxis.

```arduino
if (condicion0) {
// este código corre si la condicion0 es verdadera
}
else if (condicion1) {
// este código corre si la condición0 es falsa, y ademas la condicion1 es verdadera
}
else {
// este código corre si la condicion0 y la condicion1 son falsas
}
```

siempre necesitamos un "if" con una condición que si es cierta, hace que el código dentro corra. si queremos comparar más condiciones, podemos usar condiciones adicionales en cascada con "else if", tantas como queramos.

si queremos tener un código que solamente corra si todas las condiciones son falsas, al final escribimos un "else".

## variables y scope

podemos declarar las variables en 2 lugares distintos:

- variables globales: existen fuera de todo lobque de código, y todo el resto del código tiene acceso a estas variables.
- variables locales: solamente existen dentro del bloque de código que las contiene, por ejemplo, dentro de la función setup().

## iteración con bucles for

ya vimos un bucle en Arduino, que es la función loop(), que Arduino se encargar de correrla periódicamente para refrescar el valor de los sensores leídos.

un clásico de programación es el llamado bucle for(), que se construye de la siguiente manera:

```arduino
for (int i = 0; i < 4; i++) {
  Serial.println(i);
}
```

## descargar Arduino IDE y conectar placa

trabajaremos con el software Arduino IDE v2.0.1 en noviembre 2022, disponible para descarga en: https://www.arduino.cc/

para este taller en particular, estamos usando una variante de la placa Arduino Uno que tiene un chip llamado CH340G, que hace necesario además descargar e instalar los drivers disponibles en:

http://www.wch-ic.com/downloads/CH341SER_ZIP.html (Windows) o http://www.wch-ic.com/downloads/CH341SER_MAC_ZIP.html (Mac).

## datos digitales y analógicos

datos digitales de entrada y salida en Arduino: valores de 1 o 0, dígito binario o bit (2 posibles valores)

datos analógicos de entrada en Arduino: se digitalizan al entrar a Arduino, y tienen un rango de 0 a 1023 (son 10 bits, entonces hay 2^10 valores = 1024 valores).

datos analógicos (PWM) de salida en Arduino: Arduino crea en la sección digital una onda PWM que podemos usar como salida analógica, con rango entre 0 y 255 (son 8 bits, entonces hay 2^8 valores = 256 valores).

## comunicación serial

información transmitida en dos direcciones usando el puerto USB.

```arduino
 // iniciar comunicacion serial
Serial.begin (9600);

// ver datos en monitor
Serial.println(datoSensor);
```

## mapeo de valores

```arduino
// mapeo de valores de rango A-B a rango C-D
// map(original, A, B, C, D)
datoMapeado = map(datoOriginal, 0, 1023, 0, 255);
```

0 a 1023 es el rango máximo que entrega un sensor de entrada (10 bits).

0 a 255 es el rango de intensidad de brillo de un LED, en escala RGB (8 bits).

## modulación por ancho de pulsos (PWM ~)

PWM permite variar tiempo de una señal digital con estado alto o bajo (5V o 0V), para que esta señal digital que sube y baja, en promedio parezca una señal entre 0V y 5V, emulando una señal analógica.
