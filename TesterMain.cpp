//#include "ScreenManager.hpp"
#include <chrono> //time
#include <iostream>
#include <ncurses.h> //base graphics
#include <thread>    //sleep

// http://www.asciitable.com/

using namespace std::chrono_literals;

class Window {
private:
  int height;
  int width;
  WINDOW *win;

public:
  Window() {
    initscr();
    // set height and width to there maxiums
    getmaxyx(stdscr, height, width);
    win = newwin(height, width, 0, 0);
  }
  void DrawChar(int x, int y, char var) {
    wmove(win, x, y);
    waddch(win, var);
  }
  void Refresh() { wrefresh(win); }
};

int main(/*int argc, char **argv*/) {

  // waddstr(win, "Hello World!");
  Window Hello;
  Hello.DrawChar(2, 2, '?');
  Hello.Refresh();
  Window Cat;
  Cat.DrawChar(3,3, '@');
  Cat.Refresh();
  Hello.Refresh();

  std::this_thread::sleep_for(10s);
  endwin();

  return 0;
}
