#include <iostream>
#include <cmath>
int main(){
        std::cout << "Shape: rectangle" << std::endl;
        int a; // Длина прямоугольника
        int b; // Ширина прямоугольника
        
        // Защита для первого числа
        do {
                std::cout << "y = ?";
                std::cin >> a;
                if (std::cin.fail() || a <= 0) {
                        std::cout << "ERROR\n";
                        std::cin.clear();
                        std::cin.ignore(10000, '\n');
                        a = -1;
                }
        } while (a <= 0);
        
        // Защита для второго числа
        do {
                std::cout << "x = ?";
                std::cin >> b;
                if (std::cin.fail() || b <= 0) {
                        std::cout << "ERROR\n";
                        std::cin.clear();
                        std::cin.ignore(10000, '\n');
                        b = -1;
                }
        } while (b <= 0);
        
        int P = 2 * (a + b);
        int S = a * b;
        double d = sqrt(a*a + b*b);
        std::cout << "Perimeter = " << P << "\n" << "Area = " << S << "\n" << "Diagonal length = " << d << std::endl;
        return 0;
}