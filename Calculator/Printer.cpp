#include "Printer.hpp"

#include <sstream>

namespace cpp_exercises::calculator {

    std::string Printer::GenerateTitle(const std::string& title, const size_t char_count) {
        std::ostringstream buffer;
        buffer << std::string(char_count, '=')
            << " "
            << title
            << " "
            << std::string(char_count, '=');
        return buffer.str();
    }

    size_t Printer::PrintTitle(const std::string& title, const size_t char_count) {
        std::string title_res = GenerateTitle(title, char_count);
        std::cout << title_res << std::endl;
        return title_res.length();
    }

}