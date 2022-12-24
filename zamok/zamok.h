#pragma once
#include "zamok.h"
#include <iostream>

using namespace std;

class zamok {
public:
	zamok();

	~zamok();

	zamok(bool vkl, bool open, bool tok);

	void change_vkl();

	void change_open();

	void change_tok();

	bool get_tok();

	bool get_vkl();

	bool get_open();

	void get_info();
private:
	bool vkl;
	bool tok;
	bool open;

};