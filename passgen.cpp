#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "Usage:" << argv[0] << " <number of passwords>" << std::endl;
        return 1;
    }

    int passwords = std::atoi(argv[1]);

    char letters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    char digits[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    for (int i = 0; i < passwords; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                std::cout << letters[rand() % 26] << digits[rand() % 10];
            };

            if (j < 3) {
                std::cout << "-";
            }

            if (j == 3) {
                std::cout << " ";
            }
        }

        std::cout << std::endl;
    }

    return 0;
}