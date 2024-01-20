#include <bits/stdc++.h>>
using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int ans_max = 0;
        int curr_max = 0;
        for (auto &num : nums)
        {
            if (num == 1)
            {
                curr_max++;
                ans_max = max(curr_max, ans_max);
            }
            else
            {
                curr_max = 0;
            }
        }
        return ans_max;
    }
};