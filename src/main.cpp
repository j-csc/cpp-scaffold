#include <iostream>
#include <fmt/core.h>
#include <project_header.hpp>

int main() {
    // Test fmt library with different formatting examples
    std::string name = "World";
    int answer = 42;
    
    fmt::print("Hello, {}!\n", name);
    fmt::print("The answer is {}\n", answer);
    fmt::print("Formatted number: {:02d}\n", 7);
    
    return 0;
}
