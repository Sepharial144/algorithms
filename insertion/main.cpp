#include "insertion.hpp"

#include <iostream>


int main(int argc, char* argv[])
{
    std::vector<int> toSort{ 8, 5, 1, 2 ,3, 6};
    insertion(toSort);
    for(auto& el: toSort)
        std::cout << el << " ";
    return 0;
}