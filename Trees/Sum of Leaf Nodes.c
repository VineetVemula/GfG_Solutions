Given a Binary Tree of size N, your task is to complete the function sumLeaf(), that should return the sum of all the leaf nodes of the given binary tree.

Input:
The function takes a single arguments as input, the reference pointer to the root of the binary tree.
There are T test cases and for each test case the function will be called separately.

Output:
The function should return the sum of all the leaf nodes of the binary tree.

Constraints:
1<=T<=100
1<=N<=100

Example:
Input:
2
2
1 2 L 1 3 R
5
10 20 L 10 30 R 20 40 L 20 60 R 30 90 L
Output:
5
190

--code--

void in(Node *x,int *m)
{
    if(x!=NULL)
    {
        if(x->left==NULL && x->right==NULL)
        {
            *m=*m+x->data;
        }
        in(x->left,m);
        in(x->right,m);
    }
}
int sumLeaf(Node* root)
{
    int ans=0;
    in(root,&ans);
    return ans;
}
