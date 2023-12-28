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

Para ejecutar el programa o archivo ejecutable debemos escribir en la terminal el simbolo punto y barra inclinada (./) junto al nombre del archivo. Para el ejemplo anterior sería:

```
./HelloWorld
```

Este comando indicará al la computadora que busque en el directorio actual el archivo ejecutable HelloWorld y lo ejecute.

 
***

### Enlaces


***

### Contribuciones

¡Las contribuciones son bienvenidas! Si encuentras errores o deseas mejorar la documentación, no dudes en enviar un [pull request](https://github.com/Isisgldev/Apuntes-HTML/pulls).

### Licencia

Este proyecto está bajo la [Licencia MIT](https://es.wikipedia.org/wiki/Licencia_MIT).
