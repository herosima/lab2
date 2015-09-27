#pragma once
#include <iostream>
class Tovar{
protected: 
	char *name;
	int cena;
public:
	Tovar();
	Tovar(char* name, int cena);
	void printTovar();
};

class Tehnika:public Tovar {
protected:
	char *names;
public:
	Tehnika();
	Tehnika::Tehnika(char *n, char* name, int cena) :Tovar(name, cena)
	{
		names = n;
	};
	void Tehnika::printTex();
};

class Scanner :public Tovar {
public:
	Scanner(char* name, int cena) :Tovar(name, cena){};
};

class PC :public Tovar{
public:
	PC(char* name, int cena) :Tovar(name, cena){};
};

class Planhet :public Tovar{
public:
	Planhet(char* name, int cena) :Tovar(name, cena){};
};

class PechUstr :public Tovar{
public:
	PechUstr(char* name, int cena) :Tovar(name, cena){};
};