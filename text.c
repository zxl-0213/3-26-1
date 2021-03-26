

int findRepeatNumber(int* nums, int numsSize){
    int new[numsSize];
    memset(new,0,sizeof(new));
    for(int i=0;i<numsSize;i++)
    {
        if(new[nums[i]]++)
            return nums[i];
    }
    return -1;
}
