
#include<iostream>
#include<list>
#include<string>
#include"heshka.h"
#include"h.h"
#include<math.h>
#include<fstream>


void HachTable::insert(std::string nameofbook)
{

	int index = (int)abs(generetichash(nameofbook)%cell_count);
	std::cout << index << std::endl;
	Table book(nameofbook);
	hachtable [index].push_back(book);
    
}

void HachTable::destroy(std::string nameofbook)
{
	
	int index = (int)abs(generetichash(nameofbook)%cell_count);
	int hash = generetichash(nameofbook);
	std::list<Table>::iterator it;
	for (it = hachtable[index].begin(); it != hachtable[index].end(); it++)
	{
		if (nameofbook == it->nameofbook)
		{
			hachtable[index].erase(it);
			break;
		}
	}
	
	
}

void HachTable::find(std::string nameofbook)
{

	int index = (int)abs(generetichash(nameofbook) %cell_count);
	int hash = generetichash(nameofbook);
	std::list<Table>::iterator it;
	for (it = hachtable[index].begin(); it != hachtable[index].end(); it++)
	{
		if (nameofbook == it->nameofbook)
		{
			std::cout << "We have this book" << std::endl;
			break; //
		}
	}
}


void HachTable::readfile(std::string filename)
{
	std::ifstream tmp_file(filename);
	std::string tmp_str = "";
	while (tmp_file)
	{
		std::string str;
		std::getline(tmp_file, str);
		if (str != "")
		{
			HachTable::insert(str);
		}  

	}

}

void HachTable::excel()
{
     std::ofstream database("test.xlsx");
    for (int i = 0; i<cell_count; i++)
    {
        database << hachtable[i].size()<<"\n";
    }
    
    
    
}

