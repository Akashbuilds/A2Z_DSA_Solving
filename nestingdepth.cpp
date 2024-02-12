int maxDepth(string s)
{
    // Write your code here.
    int n = s.length();

    int maximumNestingDepth = 0;

    int currNestingDepth = 0;

    for (int i = 0; i < n; i++)

    {

        switch (s[i])

        {

        case '(':

            currNestingDepth++;

            maximumNestingDepth = max(maximumNestingDepth, currNestingDepth);

            break;

        case ')':

            currNestingDepth--;
        }
    }

    return maximumNestingDepth;
}
