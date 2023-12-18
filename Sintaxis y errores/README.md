# Sintaxis y errores

Al escribir en C, debemos seguir un conjunto de reglas para que el código se ejecute correctamente. Estas reglas se conocen como Sintaxis.


## Sintaxis común para todos los programas

- **Sensibilidad de Mayúsculas y Minúsculas**: La mayoría de las palabras del código utilizan letras minúsculas. Esto se conoce como distinción entre mayúsculas y minúsculas.
Ya sean mayúsculas o minúsculas. Ciertas palabras en el código deben seguir el orden correcto de mayúsculas y minúsculas para que el código se ejecute.
las únicas líneas de texto que pueden cambiar entre mayúsculas o minúsculas son los comentarios y las cadenas de texto (texto entre comillas).

- **El Punto y Coma (;)**: Todas las declaraciones - como la función printf() en [Hello World!](https://github.com/Isisgldev/Apuntes_C/blob/main/Hello%20World!/HelloWorld.c) -, deben terminar con un punto y coma. Esto identificará el final de la declaración y es necesario para que el código se ejecute correctamente.

- **Doble comillas ("")**: El texto entre comillas dobles ("xxxxx xxxx"), se conoce como cadena. En otras palabras, todas las cadenas de texto deben estar entre comillas dobles.


## Errores

Los errores ocurren cuando rompemos las reglas de Sintaxis.

El siguiente ejemplo es el error que se genera cuando omitimos el punto y coma de la instrucción, en este caso, printf().


<img width="385" alt="Captura de pantalla 2023-12-18 a las 12 11 27" src="https://github.com/Isisgldev/Apuntes_C/assets/43893808/c41aec06-4242-4e50-b1a9-fd32d41eae6b">


La información que aporta el mensaje anterior es:

+ La ubicación del componente (In function ´main´), está dentro de la función main.
+ El número de línea y columna del error es 6:1.
+ La descripción del error: expected (;) before ({).

Estos mensajes describen los errores de la mejor manera posible con el fin de ayudar a corregir nuestro código.
  
***

### Enlaces

[Vídeo: gcc: Entendiendo algunos errores simples que devuelve gcc al compilar mi código en lenguaje C](https://www.youtube.com/watch?v=9gCIgvnDJhQ)

***

### Contribuciones

¡Las contribuciones son bienvenidas! Si encuentras errores o deseas mejorar la documentación, no dudes en enviar un [pull request](https://github.com/Isisgldev/Apuntes-HTML/pulls).

### Licencia

Este proyecto está bajo la [Licencia MIT](https://es.wikipedia.org/wiki/Licencia_MIT).
