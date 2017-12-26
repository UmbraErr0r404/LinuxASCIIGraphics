#ifdef __SCREENMANAGER_HPP__
#define __SCREENMANAGER_HPP__

#include "Screen.hpp"
#include <vector>
#include <string>

class ScreenManager(){
	private:
		std::string name;
		ScreenList<Screen>;

	public:
		ScreenManager();
}

#endif
