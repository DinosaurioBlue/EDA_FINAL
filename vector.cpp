#include <iostream>
#include <vector>

int main()
{
std::vector<int> x = { 7, 5, 16, 8 };

x.push_front(25); // Insert at start
x.push_back(13); // Insert at end

// Print out the vector
std::cout << "x = { ";

for (auto it = x.begin())

std::cout << "};\n";
}
