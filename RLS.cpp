#include "RLS.h"
using namespace std;

int linear_search_last(const vector<int>& items, int target, size_t pos) {
    if (pos == -1) // Base case 
        return -1;
    if (items[pos] == target) // Finding the target number
        return pos;
    return linear_search_last(items, target, pos - 1); // Goes through the code again
}

int findLastOccurrence(const vector<int>& items, int target) {
    return linear_search_last(items, target, items.size() - 1);
}
