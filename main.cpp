#include <iostream>
#include <cmath>
int main(){
	std::cout << "Shape: rectangle" << std::endl;
	int a; // Длина прямоугольника
	int b; // Ширина прямоугольника
	std::cin >> a;
	std::cin >> b;
	int P = 2 * (a + b);
	int S = a * b;
	int d = sqrt(a*a + b*b);
	std::cout << "Perimeter = " << P << "\n" << "Area = " << S << "\n" << "Diagonal length = " << d << std::endl; 
	return 0;
}
