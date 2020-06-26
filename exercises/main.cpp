//
//  main.cpp
//  exercises
//
//  Created by 冀宸 on 2020/6/16.
//  Copyright © 2020 冀宸. All rights reserved.
//

#include <iostream>
#include "algorithms/array/sums.hpp"

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main(int argc, const char *argv[])
{
    cout << "TwoSum:\n";
    do {
        algorithms::array::TwoSum c;
        std::vector<int> nums = {-1, 7, 3, 6, 24, 18, -9, 0, 8, 62};
        int k = 62;
        cout << "nums=[";
        for (int i = 0; i < nums.size(); ++i) {
            if (i) { cout << ","; }
            cout << nums[i];
        }
        cout << "], k=" << k << endl;
        std::pair<int, int> rst = c.run(nums, k);
        cout << "rst: <" << rst.first << "," << rst.second << ">\n";
    } while (0);
    cout << endl;

    cout << "OrderedTwoSum:\n";
    do {
        algorithms::array::OrderedTwoSum c;
        std::vector<int> nums = {-99, -98, -3, -2, -1, 9, 100, 101};
        int k = 6;
        cout << "nums=[";
        for (int i = 0; i < nums.size(); ++i) {
            if (i) { cout << ","; }
            cout << nums[i];
        }
        cout << "], k=" << k << endl;
        std::pair<int, int> rst = c.run(nums, k);
        cout << "rst: <" << rst.first << "," << rst.second << ">\n";
    } while (0);
    cout << endl;

    cout << "TwoSumLessThanK:\n";
    do {
        algorithms::array::TwoSumLessThanK c;
        std::vector<int> nums = {9, 7, 1, -3, 3, 4, -10};
        int k = 7;
        cout << "nums=[";
        for (int i = 0; i < nums.size(); ++i) {
            if (i) { cout << ","; }
            cout << nums[i];
        }
        cout << "], k=" << k << endl;
        std::pair<int, int> rst = c.run(nums, k);
        cout << "rst: <" << rst.first << "," << rst.second << ">\n";
    } while (0);
    cout << endl;

    cout << "ThreeSum:\n";
    do {
        algorithms::array::ThreeSum c;
        std::vector<int> nums = {8, 13, -7, 6, 15, 0, 9, -8, 5, -23};
        int target = 8;
        cout << "nums=[";
        for (int i = 0; i < nums.size(); ++i) {
            if (i) { cout << ","; }
            cout << nums[i];
        }
        cout << "], target=" << target << endl;
        std::vector<std::vector<int>> rst = c.run(nums, target);
        cout << "rst:\n[";
        for (auto i = 0; i < rst.size(); ++i) {
            if (i) { cout << ","; }
            cout << "\n    [";
            for (auto j = 0; j < rst[i].size(); ++j) {
                if (j) { cout << ","; }
                cout << rst[i][j];
            }
            cout << "]";
        }
        if (!rst.empty()) {
            cout << endl;
        }
        cout << "]\n";
    } while (0);
    cout << endl;

    return 0;
}
