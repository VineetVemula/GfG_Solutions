You are given a sorted array containing only numbers 0 and 1. Find the transition point efficiently. Transition point is a point where "0" ends and "1" begins.

Input:

You have to complete the method which takes 2 argument: the array arr[] and size of array N. You should not read any input from stdin/console. There are multiple test cases. For each test cases, this method will be called individually.

Output:

Your function should return transition point.

Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 500000
0 ≤ C[i] ≤ 1

Example:

Input
1
5
0 0 0 1 1

Output
3

--CODE--

int transitionPoint(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
            return i;
    }
}
