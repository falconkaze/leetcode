int findDuplicate(int* nums, int numsSize){
    for(int i = 0; i < numsSize - 1; i ++){
        for(int j = i + 1; j < numsSize;j ++){
            if(nums[i] == nums[j]){
                return nums[i];
            }
        }
    }
    return -1;
}
