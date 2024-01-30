#include <bits/stdc++.h>>
using namespace std;

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> opVect;
        stack<int> helperSt;
        unordered_map<int, int> helperMp;

        for (int i = 0; i < nums2.size(); i++)
        {
            while (!helperSt.empty() && helperSt.top() < nums2[i])
            {
                helperMp[helperSt.top()] = nums2[i];
                helperSt.pop();
            }
            helperSt.push(nums2[i]);
        }

        while (!helperSt.empty())
        {
            helperMp[helperSt.top()] = -1;
            helperSt.pop();
        }

        for (int i = 0; i < nums1.size(); i++)
        {
            opVect.push_back(helperMp[nums1[i]]);
        }

        return opVect;
    }
};