#ifndef CALCULATOR_CALCULATOR_HPP_
#define CALCULATOR_CALCULATOR_HPP_

#include <limits>

namespace cpp_exercises::calculator {

    class Calculator {
    public:

        template <typename T, typename... Args>
        double Add(T first, Args... rest) {
            return static_cast<double>(first) + (static_cast<double>(rest) + ...);
        }

        template <typename T, typename... Args>
        double Subtract(T first, Args... rest) {
            return static_cast<double>(first) - (static_cast<double>(rest) + ...);
        }

        template <typename T, typename... Args>
        double Multiply(T first, Args... rest) {
            return static_cast<double>(first) * (static_cast<double>(rest) * ...);
        }

        template <typename T, typename... Args>
        double Divide(T first, Args... rest) {
            if (((rest == 0) || ...)) {
                return std::numeric_limits<double>::quiet_NaN();
            }
            return static_cast<double>(first) / (static_cast<double>(rest) * ...);
        }
    };

}  // namespace cpp_exercises::calculator

#endif  // CALCULATOR_CALCULATOR_HPP_
