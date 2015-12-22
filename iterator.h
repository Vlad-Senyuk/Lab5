#pragma once
#include <iostream>
using namespace std;

class transp_sred
{
	static transp_sred *head;
public:

	transp_sred *next;
	virtual void set(int);
	virtual transp_sred* get(int);
	virtual void add();
	virtual void show();
	virtual int getkiborgyear() { return 0; }
	virtual int getkiborgvatt() { return 0; }
	virtual int getk_vo() { return 0; }
	virtual void print();
	void del(int);
	friend class Controller;
};
