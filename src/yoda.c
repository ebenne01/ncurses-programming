/*
 * yoda.c
 *
 * Demonstrates displaying formatted text output
 * using ncurses.
 *
 * Based on:
 *   Dan Gookin's Guide to Ncurses Programming
 *   Chapter 2, Exercise 5
 */

#import <ncurses.h>

int main(void) {

  int yoda = 874;
  int ss = 65;

  initscr();

  printw("Yoda is %d years old\n", yoda);
  printw("He's collected %d years", yoda - ss);
  printw(" of Social Security.");

  refresh();
  getch();

  endwin();
  return 0;
}
