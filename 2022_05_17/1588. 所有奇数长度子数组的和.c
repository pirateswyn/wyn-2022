int sumOddLengthSubarrays(int* arr, int arrSize){
    int sum = 0;
    for(int start = 0; start < arrSize; ++start)
    {
        for(int length = 1; start + length <= arrSize; length += 2)
        {
            int end = start + length - 1;
            for(int i = start; i <= end; ++i)
            {
                sum += arr[i];
            }
        }
    }
    return sum;
}
