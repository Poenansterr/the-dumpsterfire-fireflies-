#include <unistd.h>
#include <ncurses.h>

void add_bord();
void iniz();
void clean();
void redo();
void add_poz(int y, int x, char ch);
char get_IN();

WINDOW *board_win;

int Board(int height, int width) {
    int xmax, ymax;
    getmaxyx(stdscr, ymax, xmax);

    board_win = newwin(height, width, (ymax/2)-(height/2), (xmax/2)-(width/2));
    add_bord();
    redo();
    
}

void iniz() {
    clean();
    redo();
}

void clean() {
    wclear(board_win);
    add_bord();
}

void redo() {
    wrefresh(board_win);
}

void add_bord() {
    box(board_win,0,0);
}

void add_poz(int y, int x, char ch) {
    mvwaddch(board_win, y, x, ch);
}

char get_IN() {
    return wgetch(board_win);
}