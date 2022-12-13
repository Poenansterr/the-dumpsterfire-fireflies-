#include <unistd.h>
#include <ncurses.h>
#include "Board.h"

#define BOARD_DIM 27
#define BOARD_ROwS BOARD_DIM
#define BOARD_COLS BOARD_DIM * 2

int main() {
    int maxx, maxy;


    initscr();
    refresh();
    keypad(stdscr, true);

    iniz();
    Board(BOARD_ROwS, BOARD_COLS);

    //input from ser

    //update game state

    //redraw display

    //loop or end game


    add_poz(15, 28, '@');
    redo();

    getchar();
    endwin();


    return 0;
}