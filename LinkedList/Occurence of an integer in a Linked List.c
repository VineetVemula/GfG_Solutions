Given a singly linked list and a key, count number of occurrences of given key in linked list. For example, if given linked list is 1->2->1->2->1->3->1 and given key is 1, then output should be 4.

Input:
You have to complete the method which takes two argument: the head of the linked list and int k. You should not read any input from stdin/console.
The struct Node has a data part which stores the data and a next pointer which points to the next element of the linked list. 
There are multiple test cases. For each test case, this method will be called individually.

Output:
You have to count a number of occurrences of given key in linked list and return the count value.

Note: If you use "Test" or "Expected Output Button" use below example format

Example:
Input:
1
8
1 2 2 4 5 6 7 8
2

Output:
2

--CODE--

int count(struct node* head, int search_for)
{
    node *p;
    int c=0,m=search_for;
    p=head;
    while(p!=NULL)
    {
        if(p->data==m)
            c++;
        p=p->next;
    }
    return c;
}
