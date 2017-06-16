#include<iostream>
int main(){
	int a = 0, b= 0;
	std::cin >> a >> b; 
	while(a<=b){
		std::cout << a++ << std::endl;
	}
}
