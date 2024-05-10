/*
 * @lc app=leetcode id=1 lang=c
 *
 * [1] Two Sum
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = NULL;
    *returnSize = 0;
    for (int i=0;i<numsSize-1;i++) {
        for (int j=i+1;j<numsSize;j++) {
            if (nums[i] + nums[j] == target) {
                result = malloc(sizeof(int) * 2);
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
            }
        }
    }
    return result;

}
// @lc code=end

