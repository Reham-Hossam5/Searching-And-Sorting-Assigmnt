#include "LinearSearch.h"

int LinearSearch::search(const std::vector<int>& array, int target) {
    for (int i = 0; i < array.size(); ++i) {
        if (array[i] == target) {
            return i; // Return index if found
        }
    }
    return -1; // Return -1 if not found
}
