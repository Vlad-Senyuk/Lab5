#include "ierarhia.h"
#include "iterator.h"
#include <iostream>
#include <string>
#include <cstring>
#include "Controller.h"
using namespace std;

transp_sred * transp_sred::head = NULL;

void transp_sred::set(int x)
{
	transp_sred *p = head;
	transp_sred *t = head->next;
	int i = 1;

	if (x == 1)
	{
		this->next = head;
		head = this;
		return;
	}

	while (t) {
		if (i == x - 1) {
			p->next = this;
			this->next = t;
			return;
		}
		p = p->next;
		t = p->next;
		i++;
	}
	add();
}

transp_sred * transp_sred::get(int n)
{
	int i = 1;
	transp_sred *p = head;

	while (p) {
		if (i == n) {
			return p;
		}
		p = p->next;
		i++;
	}
	cout << "net n\n";
	return nullptr;
}

void transp_sred::add()
{
	if (!head) {
		head = this;
		this->next = NULL;
	}
	else
	{
		transp_sred *p = head;
		if (p->next == NULL)
		{
			p->next = this;
			this->next = NULL;
		}
		else {
			while (p->next != NULL)
				p = p->next;
		}
		p->next = this;
		this->next = NULL;
	}
}

void transp_sred::show()
{
	transp_sred *p = head;
	while (p)
	{
		cout << "\n\n\n";
		p->print();
		p = p->next;
	}
}

void transp_sred::del(int n)
{
	transp_sred *ptr;
	transp_sred *current = head;
	for (int i = 1; i < n && current != NULL; i++)
		current = current->next;
	if (current != NULL) {
		if (current == head) {
			head = head->next;
			current = head;
		}
		else {
			ptr = head;
			while (ptr->next != current)
				ptr = ptr->next;
			ptr->next = current->next;
			current = ptr;
		}
	}
}

void transp_sred::print()
{
	transp_sred *current = head;
	while (head != NULL)
	{
		cout << current << endl;
		current = current->next;
	}
}

//------------------------------------------

void mashina::setKlass(string h)
{
	klass = h;
}

string mashina::getKlass()
{
	return klass;
}

void mashina::print()
{
	cout << klass;
}

//------------------------------------------

void dvigatel::setdvigatel(int x)
{
	num = x;
}

int dvigatel::getdvigatel()
{
	return num;
}

void dvigatel::print()
{
	cout << num;
}

//--------------------------------------------

void raz_s::setraz_s(string h)
{
	type = h;
}

string raz_s::getraz_s()
{
	return type;
}

void raz_s::print()
{
	cout << type;
}

//--------------------------------------------

void telovek::settelovek(string h)
{
	sex = h;
}

string telovek::gettelovek()
{
	return sex;
}

void telovek::print()
{
	cout << sex;
}

//--------------------------------------------

transformer::transformer(string h, int x, int y)
{
	name = h;
	year = x;
	p = y;
}

void transformer::settransf(string h, int x, int y)
{
	name = h;
	year = x;
	p = y;
}

string transformer::gettransf()
{
	return name;
}

void transformer::print()
{
	cout << name << endl;
	cout << year << endl;
	cout << p << endl;
}

int transformer::getkiborgyear()
{
	return year;
}

int transformer::getkiborgvatt()
{
	return p;
}

//--------------------------------------------

void Controller::f1()
{
	transp_sred *p = transp_sred::head;
	int g;
	cout << "Input year transformer: " << endl;
	cin >> g;
	while (p != NULL) {
		if (p->getkiborgyear() == g) {
			p->print();
		}
		p = p->next;
	}
}

void Controller::f2()
{
	transp_sred *p = transp_sred::head;
	int g;
	cout << "Input p(vatt) transformer: " << endl;
	cin >> g;
	while (p != NULL) {
		if (p->getkiborgvatt() == g) {
			p->print();
		}
		p = p->next;
	}
}

void Controller::f3()
{
	transp_sred *p = transp_sred::head;
	int g = 0;
	while (p != NULL) {
		g++;
		p = p->next;
	}
	cout << "K-vo robotov= " << g << endl;
}


