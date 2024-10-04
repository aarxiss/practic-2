#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "uk_UA");
    int number1, number2;

    std::cout << "Введіть перше число: ";
    std::cin >> number1;
    std::cout << "Введіть друге число: ";
    std::cin >> number2;


    int max = (number1 > number2) ? number1 : number2;

    std::cout << "Більше число: " << max << std::endl;

    return 0;
}