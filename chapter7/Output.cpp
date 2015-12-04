#include"PrimNumber.h"


void Output::printOut(int *ary , int num){

	for (int i = 2; i <= num; i++){
		if (ary[i] != 0)
		cout << ary[i] << ","; 
	};

	delete[] ary;

}
