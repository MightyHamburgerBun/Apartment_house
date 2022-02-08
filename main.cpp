#include <iostream>

int main() {
    std::string tenants[10];

    for (int i = 0; i < 10; ++i) {
        std::cin >> tenants[i];
    }

    int apartment;
    std::cout << "Apartment #";
    std::cin >> apartment;
    while (apartment < 0 || apartment >= 10) {
        std::cout << "Input Error \n";
        std::cout << "Apartment #";
        std::cin >> apartment;
    }
    apartment -= 1;
    std::cout << tenants[apartment] << std::endl;
}
