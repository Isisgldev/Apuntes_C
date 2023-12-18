# Salida (output)

El objetivo del código [Hello World!](https://github.com/Isisgldev/Apuntes_C/blob/main/Hello%20World!/HelloWorld.c) es enviar o imprimir en la consola el texto "Hello World!". La linea de comando con la función que realiza esta función es:

```
printf("Hello World!\n");
```

Esta línea de código se puede dividir en dos partes:

- **printf()**: Es la función y en este caso imprime el texto que se ubica dentro del paréntesis a la consola.
- **"Hello World!\n"**: En este caso se imprime una cadena. La cadena de texto se ubica entre comillas dobles ("xxxx").

En resumen:

Colocar la cadena entre los paréntesis de la función printf() imprime el texto (sin las comillas) en la consola. también, dentro de la cadena encontramos la secuencia de escape que permite realizar un salto de línea (\n), que es un caracter uqe no se imprime.

## Secuencias de Escape

Las secuencias de escape se utilizan para agregar un carácter no visual dentro de la cadena (carácter no imprimible). Se las consideran caracteres y por tanto deben estar como o dentro de una cadena de texto, entre comillas ("xxxx").
