int search(vector<int> &nums, int target)
{
    // Write your code here.
    int n = nums.size();
    int lower = 0;
    int higher = n - 1;
    while (lower <= higher)
    {
        int mid = (lower + higher) / 2;
        if (nums[mid] == target)
            return mid;
        else if (target > nums[mid])
            lower = mid + 1;
        else
            higher = mid - 1;
    }
    return -1;
}