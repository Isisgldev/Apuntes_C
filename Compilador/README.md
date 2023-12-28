# Compilador

Un compilador es un programa que convierte el código en un progrsma ejecutable por la computadora o pc.

Esto implica leer el código de un archivo y compilarlo en un código que el procesador de la computadora pueda ejecutar. 


## Compilar un programa escrito en C.

Un compilador de C ampliamente utilizado es gcc, que significa colección de compiladores GNU.

Por ejemplo, para compilar nuestro programa [Hello World!](https://github.com/Isisgldev/Apuntes_C/blob/main/Hello%20World!/HelloWorld.c). Necesitaremos ejecutar el siguiente comando en la terminal:

```
gcc HelloWorld.c -o HelloWorld
```

Para entender el comando anterior vamos a dividirlo en tres partes:

- **gcc**: Así es como se llama al compilador para ejecutarlo.
- **HelloWorld.c**: El nombre del archivo que contiene el cóidigo a compilar.
- **HelloWorld**: Es una opción adicional pero común. Indica al compilador que genere el archivo o programa ejecutable con el nombre HelloWorld en vez del nombre por defecto a.out. En otras palabras, si no se incluye la bandera -o junto al nombre que le queremos dar al archivo ejecutable, el archivo ejecutable se llamará a.out.


## Ejecutar el programa compilado (archivo ejecutable)




