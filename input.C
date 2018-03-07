#include<stdio.h>
int main()
{
int merge(my_list t*a,my_list t*b);
{
node_t*head;
 mylist_t *c = &head;
    while((a != NULL) && (b != NULL))
    {
        if(a->value < b->value)

        {
            c->next = a;

            c = a;

     a = a->next;
        }

         

        else

       {

            c->next = b;

            c = b;

            b = b->next;
        }
        }        

    c->next = (a == NULL) ? b : a;

    return head.next;  
}

