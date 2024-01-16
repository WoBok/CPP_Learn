#include <iostream>

#define Func(x) x+x*2
#define N 10
#define Func1(x) x*N
#define MM(x) 10+10*x
#define FF(type,var) var

int main()
{
	std::cout << "Func(5): " << Func(5) << std::endl;
	std::cout << "Func1(Func(5)): " << Func1(Func(5)) << std::endl;   //5+5*2*10
	std::cout << "MM*MM: " << MM(2) * MM(2) << std::endl;//10+10*10+10 //10+10*2*10+10*2
	char a = FF('a', '2');
	int b = FF(1, 3);
	std::cout << "FF: " << FF(1, 2) << std::endl;
	std::cout << "a,b: " << a << "," << b << std::endl;
}