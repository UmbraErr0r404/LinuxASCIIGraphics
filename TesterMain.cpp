#include <iostream>
#include "ScreenManager.hpp"
#include <ncurses.h> //base graphics
#include <chrono> //time 
#include <thread> //sleep

int main(int argc, char **argv) {
	
	using namespace std::chrono_literals;

	ScreenManager Boss("Boss");

	std::cout << "Hello, World!" << std::endl;

	initscr();

	//std::stdscr.T
	int h, w;

	getmaxyx(stdscr, h, w);

	WINDOW * win = newwin(h, w, 0, 0);
	
	wmove(win, 2, 2);

	waddstr(win, "Hello World!");
	
	waddch(win,'?');

	wrefresh(win);

	std::this_thread::sleep_for(10s);	

	return 0;
}
