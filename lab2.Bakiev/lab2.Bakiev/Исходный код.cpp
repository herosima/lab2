#include "equipment.h"
#include <iostream>
#include <windows.h>
using namespace std;
Tovar mass[5];
int q = 3;
char text[50];
int money;
int main()
{
	PC *A = new PC("Asus", 5000);
	A->printTovar();
	Scanner *B = new Scanner("Black", 10);
	B->printTovar();
	Planhet *C = new Planhet("Lenovo", 1000);
	C->printTovar();
	PechUstr *D = new PechUstr("A4tech", 500);
	D->printTovar();
	cout << "========================"<< endl;
	Tehnika *E = new Tehnika("pro; ", "Asus; ", 5000);
	E->printTex();
	E->printTovar();
	system("pause");
}