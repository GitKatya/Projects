#include"h.h"
#include<string>
#include<math.h>

int generetichash(std::string nameofbook)
{
	long long int hash = 0;
	long long int mark = 0;
	for (int i = 0; i < nameofbook.length(); i++)
	{
		mark = sqrt((int)(nameofbook[i]));
		mark = (int)mark;
		mark = (mark + 56) - (int)(nameofbook[i]) % 10;
		mark = pow((mark), 4);
		hash += mark;

	}

	return hash;

}

Table::Table(std::string name)

	{
		this->nameofbook = name;
		this->hash = generetichash(nameofbook);
	}
