Given a sorted array A[], your task is to do some operations, i.e., search an element, insert an element, and delete an element by completing the functions.

Input:
First line of input consists if T, number of test cases. First line of every test case consists of an integer N, denotes the number of elements in an array. Second line of every test cases consists of N spaced integers Ai. Third line of every test case consists of three integers X ,Y and Z, denoting the elements for search operation, insert operation and delete operation respectively.

Output:
Return 1 for each operation if done successfully else 0.

Constraints:
1<=T<=100
1<=N<=100
1<=Ai<=100

Example:
Input:
1
5
1 2 3 4 5
1 6 3
Output:
1 1 1

--CODE--

int search(int arr[],int x,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
            return i;
    }
    return 0;
}
bool insert(int arr[], int y,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        if(arr[i]>y)
            break;
    }
    for(j=n;j>i;j--)
    {
        arr[j]=arr[j-1];
    }
    arr[i]=y;
    n++;
    return true;
}
bool deleteEle(int arr[], int z,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        if(arr[i]==z)
            break;
    }
    if(i==n)
        return false;
    for(j=i;j<n-1;j++)
    {
        arr[j]=arr[j+1];
    }
    n--;
    return true;
}
