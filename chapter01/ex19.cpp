#include <iostream>
int main()
{
	int a=0,b=0;
	std::cin >> a >> b ;
	if(b>a){
		int tmp =a;
		a = b;
		b = tmp;
	}
	while(a>=b){
		std::cout << b++ << std::endl;
	}
}
