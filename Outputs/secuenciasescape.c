// Distintas secuencias de escape en c. Ejecutar el archivo para ver los efectos de cada una.

#include <stdio.h>

int main()
{
  // Imprimir una nueva línea. Salto de línea (\n).
  printf("Salto de línea\n\n");
  printf("Hello\nWorld!");
  printf("Hello World!\n");
  printf("Hello World!");
  
  // Retorno al carro. Carriage return: (\r) El cursor pasa a la primera posición de la línea donde nos encontremos.
  printf("\n\nRetorno al carro\n");
  printf("Hello Wor\rld!");

  // Añadir una tabulación o dos espacios en el texto. Tabulación (\t).
  printf("\n\nTabulación\n");
  printf("Hello\tWorld!\n");
  printf("\tHello World!");
  
  // Añade una señal de alerta. Puede ser un aviso visible o de sonido. Alerta (\a)
  printf("\n\nSeñal de alerta\n");
  printf("\a");

  // Hace retroceder el cursor a un espacio anterior, a la izquierda. Espacio atrás (\b).
  printf("\n\nEspacio atrás\n");
  printf("Hello W\borl!");

  //Crear una nueva página. Alimentación de página (\f).
  printf("\n\nNueva página\n");
  printf("Hello W\forl!");
}



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
