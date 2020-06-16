//
//  sums.cpp
//  exercises
//
//  Created by 冀宸 on 2020/6/15.
//  Copyright © 2020 冀宸. All rights reserved.
//

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
    if (nums.size() < 2) {
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
