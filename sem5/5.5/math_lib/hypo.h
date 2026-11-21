#pragma once
#include <cmath>
#include <random>

namespace Hypo {
    template <typename T>
    T hypotenuse(const T& a, const T& b) {
        return static_cast<T>(std::sqrt(a * a + b * b));
    }
}

namespace Mod_Hypo {
    template <typename T>
    T hypotenuse(const T& a, const T& b) {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<int> coin(1, 2);
        std::uniform_real_distribution<double> extra(1.0, 100.0);

        double base = std::sqrt(a * a + b * b);
        if (coin(gen) == 1) {
            return static_cast<T>(base);
        }
        return static_cast<T>(base + extra(gen));
    }
}
