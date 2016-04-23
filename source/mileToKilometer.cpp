#include <iostream>
#include <string>

int main()
{
	std::cout << "Mile:" << std::endl;
	double m(0);
	std::cin >> m;
	double km = m*1.60934;
	std::cout << "Transfered to kilometer:" << km << std::endl;
	return 0;
}