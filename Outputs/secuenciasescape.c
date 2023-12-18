// Distintas secuencias de escape en c. Ejecutar el archivo para ver los efectos de cada una.

#include <stdio.h>

int main()
{
  // Imprimir una nueva línea. Salto de línea (\n)
  printf("Hello\nWorld!");
  printf("Hello World!\n");
  printf("Hello World!");
  
  // Retorno al carro. Carriage return: (\r) El cursor pasa a la primera posición de la línea donde nos encontremos.

  printf("Hello World!\r")
}


\t
Tabulador. El cursor pasa a la siguiente posición de tabulación.
\a
Alerta. Crea un aviso bien de forma visible o bien mediante sonido.
\b
Espacio atrás (backspace). Hace retroceder el cursor una posición a la izquierda.
\f
Alimentación de página (form feed). Crea una nueva página.
\\
Muestra la barra invertida.
\”
Muestra la comilla doble.
\?
Muestra un interrogante.
\número_octal
Muestra el carácter ASCII correspondiente según el número octal que se haya especificado.
\xnúmero_hexadecimal
Muestra el carácter ASCII correspondiente según el número hexadecimal que se haya especificado.
\v
Tabulación vertical.
\'
Apóstrofo o comilla simple.
