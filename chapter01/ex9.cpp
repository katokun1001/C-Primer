#include<iostream>
int main(){
	int sum = 0, index = 100;
	while(index >=50){
		sum+=index--;
	}
	std::cout << sum << std::endl;
}
