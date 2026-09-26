#include <iostream>
#include "../src/grading.cpp"

// Chhota sa apna test-checker function
void check(bool condition, std::string testName) {
    if (condition) {
        std::cout << "PASS: " << testName << std::endl;
    } else {
        std::cout << "FAIL: " << testName << std::endl;
    }
}

int main() {
    // Test 1: normal GPA calculation
    check(calculateGPA(3.7, 3, 3.3, 4) == 3.47, "Basic GPA calculation");

    return 0;
}