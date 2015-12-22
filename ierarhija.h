#pragma once
#include <iostream>
#include "iterator.h"
using namespace std;

class mashina : public transp_sred
{
	string klass;
	//dvigatel *p;
public:
	mashina() {};
	void setKlass(string);
	string getKlass();
	virtual void print();
};

class dvigatel
{
	int num;
public:
	dvigatel() {};
	void setdvigatel(int);
	int getdvigatel();
	virtual void print();
};

class raz_s
{
	string type;
public:
	raz_s() {};
	void setraz_s(string);
	string getraz_s();
	virtual void print();
};

class telovek : public raz_s
{
	string sex;
public:
	telovek() {};
	void settelovek(string);
	string gettelovek();
	virtual void print();
};

class transformer : public raz_s, public transp_sred
{
	string name;
	int year;
	int p;
public:
	transformer(string, int, int);
	void settransf(string, int, int);
	string gettransf();
	virtual void print();
	virtual int getkiborgyear();
	virtual int getkiborgvatt();
};
