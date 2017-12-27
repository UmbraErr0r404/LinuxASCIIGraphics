#ifndef __SCREENMANAGER_HPP__
#define __SCREENMANAGER_HPP__

#include "Screen.hpp"
#include <vector>
#include <string>

class ScreenManager{
	private:
		std::string name;
		std::vector<Screen> ScreenList;

	public:
		ScreenManager();
		ScreenManager(std::string aName);
		void CreateNewScreen();
		int GetNumberOfScreens();
		void DeleteScreen(int IndexOfScreen);
};

#endif
