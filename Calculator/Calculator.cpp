#include "Calculator.hpp"

namespace cpp_exercises::calculator {

template <typename T, typename... Args>
double Calculator::Add(T first, Args... rest) {
    return static_cast<double>(first) + (static_cast<double>(rest) + ...);
}

template <typename T, typename... Args>
double Calculator::Subtract(T first, Args... rest) {
    return static_cast<double>(first) - (static_cast<double>(rest) + ...);
}

template <typename T, typename... Args>
double Calculator::Multiply(T first, Args... rest) {
    return static_cast<double>(first) * (static_cast<double>(rest) + ...);
}

template <typename T, typename... Args>
double Calculator::Divide(T first, Args... rest) {
    return static_cast<double>(first) / (static_cast<double>(rest) + ...);
}

} // namespace cpp_exercises::calculator