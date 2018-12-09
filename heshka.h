#pragma once
#include<iostream>
#include<list>
#include<string>
#include"h.h"


struct HachTable
{
    
    int cell_count = 300;
	std::list<Table>* hachtable = new std::list<Table>[300];
	void insert(std::string nameofbook);
	void destroy(std::string nameofbook);
	void find(std::string nameofbook);
	void readfile(std::string filename);
    void excel();
};

