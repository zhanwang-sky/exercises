//
//  sums.hpp
//  exercises
//
//  Created by 冀宸 on 2020/6/15.
//  Copyright © 2020 冀宸. All rights reserved.
//

#ifndef sums_hpp
#define sums_hpp

#include <utility>
#include <vector>

namespace algorithms {

    namespace array {

    class TwoSum {
    public:
        std::pair<int, int>
        run(std::vector<int> &nums, int k);
    };

    class OrderedTwoSum {
    public:
        std::pair<int, int>
        run(std::vector<int> &nums, int k);
    };

    class TwoSumLessThanK {
    public:
        std::pair<int, int>
        run(std::vector<int> &nums, int k);
    };

    } /* array */

} /* algorithms */

#endif /* sums_hpp */
