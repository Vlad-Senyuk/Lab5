#include "ierarhia.h"
#include "iterator.h"
#include <iostream>
#include <string>
#include <cstring>
#include "Controller.h"
using namespace std;

int main()
{
	transp_sred *a = NULL;
	transformer ob1("Kiborg-1", 2015, 1000);
	transformer ob2("Kiborg-2", 2014, 999);
	transformer ob3("Kiborg-3", 2020, 10100);

	a = &ob1;
	a->add();
	a->show();
	a = &ob2;
	a->add();
	a->show();
	a = &ob3;
	a->add();

	Controller vb(a);
	vb.f3();
	vb.f1();
	vb.f2();
	return 0;
}
