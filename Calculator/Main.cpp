#include "Calculator.hpp"
#include "Printer.hpp"

#include <iostream>
#include <iomanip>
#include <sstream>

namespace calculator = cpp_exercises::calculator;

int main() {
    size_t title_char_count = 8;
    double n1 = 2, n2 = 5, n3 = 0, n4 = -2;

    cpp_exercises::calculator::Calculator calculator;

    double add_result = calculator.Add(n1, n2, n3, n4);
    double subtract_result = calculator.Subtract(n1, n2, n3, n4);
    double multiply_result = calculator.Multiply(n1, n2, n3, n4);
    double divide_result = calculator.Divide(n1, n2, n3, n4);

    size_t title_length = calculator::Printer::PrintTitle("Basic arithmetics", title_char_count);
    calculator::Printer::PrintOperation('+', add_result, n1, n2, n3, n4);
    calculator::Printer::PrintOperation('-', subtract_result, n1, n2, n3, n4);
    calculator::Printer::PrintOperation('*', multiply_result, n1, n2, n3, n4);
    calculator::Printer::PrintOperation('/', divide_result, n1, n2, n3, n4);
    std::cout << std::string(title_length, '=');

    return 0;
}
