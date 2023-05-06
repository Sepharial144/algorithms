#ifndef _SELECTION_HPP_
#define _SELECTION_HPP_

#include <algorithm>
#include <vector>

void selectionSort(std::vector<int>& v)
{
    for (size_t i = 0ul; i < v.size() - 1ul; ++i) {
        size_t idx_min = i;
        int minValue = v[idx_min];
        for (size_t j = i + 1ul; j < v.size(); ++j) 
        {
            if (v[j] < minValue)
                idx_min = j;
        }
        std::swap(v[idx_min], v[i]);
    }
}

/*
* 
* C style, need refactoring
void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int idx_min = step;
    for (int i = step + 1; i < size; i++) {

      // To sort in descending order, change > to < in this line.
      // Select the minimum element in each loop.
      if (array[i] < array[idx_min])
        idx_min = i;
    }

    // put min at the correct position
    swap(&array[idx_min], &array[step]);
  }
}
*/

#endif //_SELECTION_HPP_