#include<iostream>
int main(){
	int sum = 0, val = 0, last =0;
	std::cin >> last;
	for (; val<=last; ++val)
		sum+=val;
	std::cout << sum << std::endl;
}
