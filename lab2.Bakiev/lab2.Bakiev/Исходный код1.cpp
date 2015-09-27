#include "equipment.h"
#include <iostream>
using namespace std;
Tovar::Tovar()
{

}
Tovar::Tovar(char *text, int stoim)
{
	this->name = new char[strlen(text) + 1];
	strcpy_s(name, strlen(name) + 1, text);
	cena = stoim;
}
void Tovar::printTovar()
{
	cout << "Name tovara: " << Tovar::name <<" Cena: " << Tovar::cena<<endl;
}


void Tehnika::printTex()
{
	cout << "Proizvoditel: " << names;
}
