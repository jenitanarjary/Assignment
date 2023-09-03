#include <iostream>

class NumberSumCalculator {
private:
    int totalNumbers;
    double totalSum;

public:
    NumberSumCalculator() : totalNumbers(0), totalSum(0) {}

    void getInput() {
        std::cout << "Enter the number of values to sum: ";
        std::cin >> totalNumbers;

        for (int i = 0; i < totalNumbers; ++i) {
            double num;
            std::cout << "Enter a number: ";
            std::cin >> num;
            totalSum += num;
        }
    }

    void displayResult() {
        std::cout << "The sum of " << totalNumbers << " numbers is: " << totalSum << std::endl;
    }
};

int main() {
    NumberSumCalculator calculator;
    calculator.getInput();
    calculator.displayResult();

    return 0;
}
