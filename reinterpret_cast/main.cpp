
// Your First C++ Program

#include <iostream>
#include <cstdint>

int main() {
    char b = 10;
    uint32_t cpp_a = *reinterpret_cast<uint32_t*>(&b);
    uint32_t c_a = *(uint32_t *)&b;
    std::cout << cpp_a;
    std::cout << c_a;
    return 0;
}
