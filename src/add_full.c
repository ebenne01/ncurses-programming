/*
 * add_full.c
 *
 * Demonstrates displaying full string of text
 * using ncurses.
 *
 * Based on:
 *   Dan Gookin's Guide to Ncurses Programming
 *   Chapter 2, Exercise 3
 */

#include <ncurses.h>

int main(void) {
  char t1[] = "Shall I compare thee";
  char t2[] = " to a summer's day?";

  initscr();

  addstr(t1);
  addstr(t2);

  refresh();
  getch();

  endwin();

  return 0;
}
