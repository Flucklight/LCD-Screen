#include<16f887.h>                                             //Incluimos la libreria para el PIC16F887
#fuses INTRC_IO, NOWDT, PROTECT, NOLVP, MCLR, NOBROWNOUT       //Configuramos los registros del PIC para trabajar con el algoritmo a programar
#use delay(INTERNAL = 8000000)                                 //Configuramos el reloj interno a 8MHz

#include<lcd.c>                                                //Incluimos la libreria para la pantalla LCD

int8 a;                                              //Variable para la funcion de movimiento
void main() {
   
   lcd_init();                                               //Instruccion para la funcion de inicializacion de la pantalla LCD
   
   while(TRUE) {                                //Limpiamos pantalla

      for(a = 1; a <= 10; a++) {       //Este for genera un efecto de recorrido en la pantalla
         lcd_gotoxy(a,1);                                //Mueve el apuntador interno a la 1ra fila y decrementa conforme a la variable en la columna
         printf(lcd_putc, "\fJulio Cesar");                    //Manda a imprimir el nombre "Julio Cesar"
         lcd_gotoxy(a,2);                                //Mueve el apuntador interno a la 2da fila y decrementa conforme a la variable en la columna
         printf(lcd_putc, "Jimenez Bolio");                  //Manda a imprimir el apellido "Jimenez Bolio"
         delay_ms(100);                                      //Tiene un retraso de 100 milisegundos
      }

      printf(lcd_putc, "\f");                               //Limpiamos pamtalla

      for(a = 1; a <= 10; a++) {      //Este for genera un efecto de recorrido en la pantalla
         lcd_gotoxy(a,1);                               //Mueve el apuntador interno a la 1ra fila y decrementa conforme a la variable en la columna
         printf(lcd_putc, "\fVictor Manuel");                 //Manda a imprimir el nombre "Victor Manuel"
         lcd_gotoxy(a,2);                               //Mueve el apuntador interno a la 2da fila y decrementa conforme a la variable en la columna
         printf(lcd_putc, "Sanchez Sanchez");               //Manda a imprimir el apellido "Sanchez Sanchez"
         delay_ms(100);                                     //Tiene un retraso de 100 milisegundos
      }
      
   }
}
