#include <iostream>
#include <vector>
#include <cmath>
#include <limits> // for std::numeric_limits

int main() {
    int n; // Number of temperatures
    std::cin >> n;

    if (n == 0) {
        std::cout << 0 << std::endl;
        return 0; // If there's no temperature, there's nothing to do
    }

    std::vector<int> temperatures(n); // Array to store the temperatures
    for (int i = 0; i < n; ++i) {
        std::cin >> temperatures[i]; // Read each temperature
    }

    int closest_temperature = std::numeric_limits<int>::max(); // Initialize with a large value

    for (const auto& temp : temperatures) {
        if (std::abs(temp) < std::abs(closest_temperature) || 
            (std::abs(temp) == std::abs(closest_temperature) && temp > closest_temperature)) {
            closest_temperature = temp; // Update closest temperature
        }
    }

    std::cout << closest_temperature << std::endl; // Output the closest temperature to 0

    return 0;
    }
