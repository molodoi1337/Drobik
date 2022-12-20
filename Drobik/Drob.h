#pragma once
#include <iostream>
using namespace std;
class Drob
{
	float chisl;
	float znam;
public:
	Drob(float a, float b) {
		chisl = a;
		znam = b;
	}
	Drob() :chisl{ 1 }, znam{ 1 } {

	}
	Drob operator+(Drob& b) {
		return Drob (chisl*b.znam+b.chisl*znam,znam*b.znam);
	}
	Drob operator-(Drob& b) {
		return Drob (chisl * b.znam - b.chisl * znam,znam * b.znam);
	}
	Drob operator*( Drob& b){
		return Drob (chisl*b.chisl,znam*b.znam);
	}
	Drob operator/(Drob & b) {
		return Drob (chisl * b.znam , znam * b.chisl);
	}
	friend ostream& operator<<(ostream& outstream, Drob& a) {
		outstream << a.chisl << " / " << a.znam << endl;
		return outstream;
	}
};

