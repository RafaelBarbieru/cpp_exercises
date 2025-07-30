#ifndef CALCULATOR_PRINTER_HPP_
#define CALCULATOR_PRINTER_HPP_

#include <iomanip>
#include <iostream>

namespace cpp_exercises::calculator {

    class Printer {
    public:

        static std::string GenerateTitle(const std::string& title, const size_t char_count);

        static size_t PrintTitle(const std::string& title, const size_t char_count);

        template <typename... Args>
        static void PrintOperation(char op, double result, Args... args) {
            std::cout << std::fixed << std::setprecision(2);

            // Use fold expression to print: a op b op c ...
            ((std::cout << args << " " << op << " "), ...);

            // Backspace to remove trailing operator
            std::cout << "\b\b= " << result << std::endl;
        }
    };

} // namespace cpp_exercises::calculator

#endif // CALCULATOR_PRINTER_HPP_