/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *array = malloc(2*sizeof(int));
    *returnSize = 2;
    for(int a = 0;a<numsSize-1;a++ ){
        for(int b = a+1;b<numsSize;b++){
            if ((nums[a]+nums[b]) == target){
                array[0]= a;
                array[1]= b;
                return array;
            }
        }
    }
    return 0;
}

