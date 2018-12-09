#include "heshka.h"
#include <iostream>
#include "h.h"
#include <vector>


int main()
{
	HachTable S;
    S.readfile( "Katrinlistok.txt" );
	S.insert("Pink_Helicopter_biography");
	S.find("Pink_Helicopter_biography");
	S.destroy("Tri porosenka");
	S.find("Tri porosenka");
    S.excel();
	return 0;
}
