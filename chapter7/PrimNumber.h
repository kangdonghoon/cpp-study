#include<iostream>
using namespace std;

class Input{
private:
	int num;
public:
	void inputNum();
	int getNum();
};

class Operater{
private:
	int num;
	int *ary;
public:
	void operaterSet(int num);
	void operate();
	int OperaterNum();
	int* getAry();
};

class Output{
private:

public:
	void printOut(int *ary, int num);
};

class Controller{
private:
	Input in;
	Operater oper;
	Output out;

public:
	Controller();
	void Control();
};

