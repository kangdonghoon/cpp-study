#include"PrimNumber.h"
Controller::Controller(){
	in = Input();
	oper = Operater();
	out = Output();
}

void Controller::Control(){
	in.inputNum();
	oper.operaterSet(in.getNum());
	oper.operate();
	out.printOut(oper.getAry(), oper.OperaterNum());
}