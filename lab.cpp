#include <iostream>

int main() {
    std::cout << "trapezoid\n";

    double a, b, c, d, h;

    auto input = [](const char* trapezoid) {
        double a;
        do {
            std::cout << trapezoid << " = ";
            std::cin >> a;
            if (std::cin.fail() || a <= 0) {
                std::cout << "ERROR\n";
                std::cin.clear();
                std::cin.ignore(10000, '\n');
                a = -1;
            }
        } while (a <= 0);
        return a;
        };

    a = input("Bottom base");
    b = input("Top base");
    c = input("Left side");
    d = input("Right side");
    h = input("Height");

    std::cout << "Perimeter = " << a + b + c + d << "\n"
        << "Area = " << ((a + b) / 2) * h << "\n"
        << "Midline length = " << (a + b) / 2 << std::endl;
}
