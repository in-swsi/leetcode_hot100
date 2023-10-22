#include <iostream>
#include <iostream>
#include "code001.h"


using namespace std;

int main() {
    vector<int> nums = {3, 2, 4};
    Solution s;
    vector<int> res = s.twoSum(nums, 6);
    for (int re : res) {
        cout << re << " ";
    }
    return 0;
}
