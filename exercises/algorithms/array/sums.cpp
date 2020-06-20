//
//  sums.cpp
//  exercises
//
//  Created by 冀宸 on 2020/6/15.
//  Copyright © 2020 冀宸. All rights reserved.
//

#include <map>
#include <unordered_map>
#include "sums.hpp"

using namespace std;
using namespace algorithms::array;

pair<int, int>
TwoSum::run(vector<int> &nums, int k)
{
    unordered_map<int, int> hashMap;
    pair<int, int> retval = {-1, -1};

    // sanity check
    if (nums.size() < 2) {
        return retval;
    }

    for (auto i = 0; i < nums.size(); ++i) {
        auto it = hashMap.find(k - nums[i]);
        if (it != hashMap.end()) {
            retval.first = it->second;
            retval.second = i;
            break;
        }
        hashMap[nums[i]] = i;
    }

    return retval;
}

pair<int, int>
OrderedTwoSum::run(vector<int> &nums, int k)
{
    pair<int, int> retval = {-1, -1};

    // sanity check
    if (nums.size() < 2 || nums[0] > k) {
        return retval;
    }

    int l = 0;
    int r = int(nums.size()) - 1;

    while (l != r) {
        int sum = nums[l] + nums[r];
        if (sum == k) {
            retval.first = l;
            retval.second = r;
            break;
        } else if (sum > k) {
            --r;
        } else {
            ++l;
        }
    }

    return retval;
}

pair<int, int>
TwoSumLessThanK::run(vector<int> &nums, int k)
{
    pair<int, int> retval = {-1, -1};
    int max = INT_MIN;
    map<int, int> orderedMap;

    // sanity check
    if (nums.size() < 2) {
        return retval;
    }

    for (auto i = 0; i < nums.size(); ++i) {
        // notice: upper_bound(k) will return an it that points to an element
        // grater than k!
        // lower_bound's retval will point exactly to k, or the greater one next
        // to k.
        auto it = orderedMap.lower_bound(k - nums[i]);
        if (it != orderedMap.begin()) {
            --it;
            int sum = it->first + nums[i];
            if (sum > max) {
                max = sum;
                retval.first = it->second;
                retval.second = i;
            }
        }
        orderedMap[nums[i]] = i;
    }

    return retval;
}
