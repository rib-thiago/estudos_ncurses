#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

int main (int argc, char ** argv) {

initscr();
noecho();
cbreak();

if (!has_colors()){
   printw(" o terminal nao consegue reproduzir as cores");
   return -1;
}

start_color();
init_pair(1, COLOR_CYAN, COLOR_WHITE);

attron(COLOR_PAIR(1));
printw("Hello, World");
attroff(COLOR_PAIR(1));

system("read -p");
getch();
endwin();

return 0;

}
