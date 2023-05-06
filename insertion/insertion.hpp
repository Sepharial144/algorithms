#ifndef _INSERTION_HPP_
#define _INSERTION_HPP_

#include <algorithm>
#include <vector>

void insertionSort(std::vector<int>& v)
{
    for(size_t i = 1; i < v.size(); ++i)     
        for(size_t j = i; j > 0 && v[j-1] > v[j]; --j)
                std::swap(v[j - 1], v[j]);   
}

#endif //_INSERTION_HPP_