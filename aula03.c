#include <stdio.h> 
#include <ncurses.h>

int  main (void) {

   initscr();
   noecho();
   cbreak();

   int i, destaque, escolha;
   int ymax, xmax;
   char opcoes[3][10] = {"opcao 1", "opcao 2", "opcao 3"};
   

   getmaxyx(stdscr, ymax, xmax);
   WINDOW * janela = newwin(7, (xmax - 6), (ymax - 9), 3);
   box(janela, 0, 0);
   refresh();
   wrefresh(janela);

   keypad(janela, true);

   while (1) {
      for(i = 0; i < 3; i++) {
        mvwprintw(janela, 1, 1, "escolha seu lider comunista: ");
        if (i == destaque) wattron(janela, A_REVERSE);
        mvwprintw(janela, i+2, 1, "%s", opcoes[i]);
        wattroff(janela, A_REVERSE);
      }
      escolha = wgetch(janela);

      switch(escolha) {
             case KEY_UP:
                        destaque--;
                        if (destaque == -1)
                            destaque = 0;
              break;
              case KEY_DOWN:
                           destaque++; 
                           if (destaque == 3)
                               destaque = 2;
              break;
              default:
              break;
      }
      if (escolha == 10){
          break;
      }
   }
   
   mvprintw(2, 7, "você escolheu: %s", opcoes[destaque]);

   getch();
   endwin();

   return 0;
}
