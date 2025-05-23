#include "headern.h"

int main() {
    const int MAX_SIZE = 300;
    char* str[MAX_SIZE][MAX_SIZE];

    std::cout << "Enter amount of lines";
    int N{};
    std::cin >> N;
    while ((N >= MAX_SIZE) || (N < 0)) {
        std::cout << "Invalid value.Pleace, try again:";
        std::cin >> N;
    }
    for (int i{}; i < N; ++i) {
        std::cout << "Enter the lines: ";
        std::cin.getline(str[i], MAX_SIZE);
    }
    int arr[MAX_SIZE];

    return 0;
}