int print2largest(vector<int> &arr) 
{
    int largest = INT32_MIN ; 
    int second_largest = INT32_MIN ;

    for (int data : arr)
    {
        if (largest < data)
        {
            second_largest = largest ;
            largest = data ;
        }
        else if (data != largest)
        {
            if (second_largest < data)
                second_largest = data ;
        }
    }
    return (second_largest==INT32_MIN)?-1:second_largest  ;
}
