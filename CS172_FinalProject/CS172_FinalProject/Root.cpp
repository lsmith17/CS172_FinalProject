#include "Root.h"
#include <iostream>
#include <cmath>
using namespace std;

Root :: Root(int new_a, int new_b){
	a = new_a;
	b = new_b;
}

int Root::getA(){
	return a;
}

int Root::getB(){
	return b;
}
int Root::getRoot(){
	return a / b;
}