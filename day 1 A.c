int missingNumber(int* nums, int numsSize) {
    int c;
    for(int i=0;i<=numsSize;i++)
    {
        c=0;
        for(int j=0;j<numsSize;j++)
        {
            if(i==nums[j])
            {
                c=1;
            }
        }
        if(c==0)
        {
            return i;
            
        }
    }
    return -1;

    
}
