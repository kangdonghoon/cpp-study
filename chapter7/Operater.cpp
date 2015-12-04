#include"PrimNumber.h"

void Operater::operaterSet(int num){
	Operater::num = num;
}
void Operater::operate(){

	ary = new int[num];

	for (int i = 2; i <= num; i++){
		ary[i] = i;
	};

	for (int i = 2; i <= num; i++){
		for (int j = 2; j <= num; j++){
			if (ary[j] != i && ary[j] % i == 0){
				ary[j] = 0;
			}
		}
	}
	
}

int Operater::OperaterNum(){
	return num;
}
int* Operater::getAry(){
	return ary;
}