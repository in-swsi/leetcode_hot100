//
// Created by admin on 2023/10/22.
//
# include <iostream>
#include <vector>

#ifndef LEETCODE_HOT100_CODE0001_H
#define LEETCODE_HOT100_CODE0001_H

#endif //LEETCODE_HOT100_CODE0001_H

using namespace std;

class Solution{
public:
    vector<int> twoSum(vector<int> &nums, int target){
        vector<int> result;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if (nums[i] + nums[j] == target){
                    result.push_back(i);
                    result.push_back(j);
                    break;
                }
            }
        }
        return result;
    }
};

