#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>

class MergeSort {
public:
    static void merge(std::vector<int>& array, int left, int mid, int right);
    static void mergeSort(std::vector<int>& array, int left, int right);
};

#endif // MERGESORT_H
