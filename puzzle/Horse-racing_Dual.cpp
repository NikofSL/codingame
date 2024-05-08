#include <iostream>
#include <vector>
#include <algorithm> // for std::sort
#include <limits> // for std::numeric_limits

int main() {
    int n; // The number of strengths
    std::cin >> n;

    if (n < 2) {
        std::cout << "Not enough strengths to compare" << std::endl;
        return 0;
    }

    std::vector<int> strengths(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> strengths[i]; // Read each strength
    }

    // Sort the list of strengths
    std::sort(strengths.begin(), strengths.end());

    // Initialize the minimum difference to the largest possible value
    int min_difference = std::numeric_limits<int>::max();

    // Find the minimum difference between consecutive sorted strengths
    for (int i = 1; i < n; ++i) {
        int diff = strengths[i] - strengths[i - 1]; // Calculate difference
        if (diff < min_difference) {
            min_difference = diff; // Update the minimum difference
        }
    }

    std::cout << min_difference << std::endl;

    return 0;
}
