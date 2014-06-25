#ifndef Root_H
#define Root_H
#include <iostream>
using namespace std;

class Root{
private:
	int a;
	int b;

public:
	Root(int new_a, int new_b);
	
	int getA();
	int getB();
	int getRoot();
};
#endif