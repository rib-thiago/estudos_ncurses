#include <stdio.h> 
#include <ncurses.h>

int  main (void) {

   initscr();                         /* inicia a janela */
   noecho();                          /* remove os inputs */
   cbreak();                          /* fechar a janela usando a tecla Ctlr + C */

   int ymax, xmax;
   getmaxyx(stdscr, ymax, xmax);      /* obtém coordenadas máximas da tela */

   /* sempre vai imprimir no meio se usar /2 - tamanho do texto) */
   mvprintw((ymax/2), (xmax/2-5), "hello");

   getch();                           /* função responsável por fechar o programa pressionando qualquer tecla */
   endwin();                          /* ao final do programa, encerra a tela. */

   return 0;
}
