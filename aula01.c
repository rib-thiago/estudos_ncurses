#include <stdio.h> 
#include <ncurses.h>

int  main (void) {

   initscr();                         /* inicia a janela */
   noecho();                          /* remove os inputs */
   cbreak();                          /* fechar a janela usando a tecla Ctlr + C */

   mvprintw(20, 40, "Hello, World\n");

   getch();                           /* função responsável por fechar o programa pressionando qualquer tecla */
   endwin();                         /* ao final do programa, encerra a tela. */

   return 0;
}
