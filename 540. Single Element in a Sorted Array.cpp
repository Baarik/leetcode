//  540. Single Element in a Sorted Array

#include <bits/stdc++.h>

usig namespace std;

class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int n = nums.size();
        int l = 0, r = n - 1;
        int ans;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (mid & 1)
                mid--;
            if (mid + 1 < n && nums[mid] == nums[mid + 1])
                l = mid + 2;
            else
            {
                r = mid - 1;
                ans = nums[mid];
            }
        }
        return ans;
    }
};