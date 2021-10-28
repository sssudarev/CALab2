#include <iostream>
#include "calculator.h"

int main(){
	Calculator * calculator = new Calculator();


	calculator->Add(12, 8);
	std::cout<<"calculator added 12 and 8"<<std::endl;
	calculator->Mul(10, 3);
	std::cout<<"calculator multiplied 10 and 3"<<std::endl;

	return 0;
}