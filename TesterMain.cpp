#include "ScreenManager.hpp"
#include <chrono> //time
#include <iostream>
#include <ncurses.h> //base graphics
#include <thread>    //sleep

using namespace std::chrono_literals;

int main(int argc, char **argv) {

  int h, w;
  WINDOW *win = newwin(h, w, 0, 0);

  initscr();
  getmaxyx(stdscr, h, w);
  wmove(win, 2, 2);
  waddstr(win, "Hello World!");
  waddch(win, '?');
  wrefresh(win);
  std::this_thread::sleep_for(10s);

  return 0;
}
