/*
 * add.c
 *
 * Demonstrates displaying text one character at a time
 * using ncurses.
 *
 * Based on:
 *   Dan Gookin's Guide to Ncurses Programming
 *   Chapter 2, Exercise 2
 */

#include <ncurses.h>

int main(void) {
  char text[] = "Greetings from Ncurses!";
  char *t = text;

  initscr();

  while (*t) {
    addch(*t);
    ++t;
    refresh();
    napms(100);
  }
  getch();
  endwin();

  return 0;
}
