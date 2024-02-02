#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    /*You are required to complete this method */
    int atoi(string s)
    {
        // Your code here
        int ans = 0;
        int i = 0;
        int sign = 0;

        if (s[0] == '-')
        {
            i = 1;
            sign = -1;
        }

        for (; i < s.length(); i++)
        {
            if (s[i] >= 48 && s[i] <= 57)
            {
                ans = ans * 10 + (s[i] - 48);
            }
            else
            {
                return -1;
            }
        }

        if (sign)
        {
            return -1 * ans;
        }

        return ans;
    }
};