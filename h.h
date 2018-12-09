#pragma once
#include<string>

int generetichash(std::string nameofbook);

struct Table
{
	int hash = 0;
	std::string nameofbook;
	Table(std::string name);
	
};
