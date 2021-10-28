#include <iostream>
#include "calculator.h"

int main(){
	Calculator * calculator = new Calculator();

	calculator->Add(5, 7);
	std::cout<<"calculator added 5 and 7"<<std::endl;
	calculator->Mul(5, 3);
	std::cout<<"calculator multiplied 5 and 3"<<std::endl;
	return 0;
}