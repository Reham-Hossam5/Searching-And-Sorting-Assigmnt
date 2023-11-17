#include <iostream>
#include "LinearSearch.h"
#include "BinarySearch.h"
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "MergeSort.h"

int main() {
    // Linear Search
    std::vector<int> linearSearchArray = {64, 25, 12, 22, 11};
    int linearSearchResult = LinearSearch::search(linearSearchArray, 22);
    std::cout << "Linear Search Result: " << linearSearchResult << std::endl;

    // Binary Search (Array must be sorted)
    std::vector<int> binarySearchArray = {11, 12, 22, 25, 64};
    int binarySearchResult = BinarySearch::search(binarySearchArray, 22);
    std::cout << "Binary Search Result: " << binarySearchResult << std::endl;

    // Bubble Sort
    std::vector<int> bubbleSortArray = {64, 34, 25, 12, 22, 11, 90};
    BubbleSort::sort(bubbleSortArray);
    std::cout << "Bubble Sorted Array: ";
    for (int num : bubbleSortArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Selection Sort
    std::vector<int> selectionSortArray = {64, 25, 12, 22, 11};
    SelectionSort::sort(selectionSortArray);
    std::cout << "Selection Sorted Array: ";
    for (int num : selectionSortArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Merge Sort
    std::vector<int> mergeSortArray = {12, 11, 13, 5, 6, 7};
    MergeSort::mergeSort(mergeSortArray, 0, mergeSortArray.size() - 1);
    std::cout << "Merge Sorted Array: ";
    for (int num : mergeSortArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
