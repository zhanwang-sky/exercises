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
        cout << "<" << rst.first << "," << rst.second << ">\n";
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
        cout << "<" << rst.first << "," << rst.second << ">\n";
    } while (0);
    cout << endl;

    return 0;
}
