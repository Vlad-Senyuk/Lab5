#pragma once
#include "ierarhia.h"
#include "iterator.h"
#include <iostream>
using namespace std;

class Controller {
	transp_sred *s;
public:
	Controller(transp_sred *a) { s = a; };
	void f1();
	void f2();
	void f3();
};
