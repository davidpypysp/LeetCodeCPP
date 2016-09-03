#include "stdafx.h"
#include<iostream>

using namespace std;

class Test
{
public:
	void f(int val) {
		cout << "Test" << endl;
		val++;
		cout << val << endl;
	}
};
