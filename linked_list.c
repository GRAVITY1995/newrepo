#include<stdio.h>
typedef struct linked_list link;
struct linked_list
{
    int value;
    link *next;
};
link *head=NULL;
link *tail=NULL;
void insert();
void fetch();
void main()
{
     int ch;
     do
     {
         printf("\n\n----- LINKED LIST MENU -----\n");
         printf("1. \"INSERT\" an Element in Linked List\n");
         printf("2. \"FETCH\" an Element from Linked List\n");
         printf("3. \"DISPLAY\" Linked List\n");
         printf("4. Exit\n");
         printf("PLEASE ENTER VALID CHOICE....\n");
         scanf("%d",&ch);
         switch(ch)
         {
             case 1: insert();
             break;
             case 2: fetch();
             break;
             case 3:// disp();
             break;
             case 4: break;
         }
     }while(ch!=4);

}
void insert()
{
    link new_node;
    if(head==NULL)
    {
        printf("Enter The Element\n\n");
        scanf("%d",&new_node.value);
        head=tail=&new_node;
    }
    else
    {
        /*link new_node;
        printf("Enter The Element\n\n");
        scanf("%d",&new_node.value);
        (*tail).next=&new_node;*/
        tail=&new_node;
    }
}
void fetch()
{
    int i,j;
    printf("Which value do you want to fetch??????");
    scanf("%d",&i);
    if(head==NULL)
    {
        printf("\nList Is Empty\n\n");
    }
    else
    {
        link element=*head;
        for(j=0 ; j < i ; j++)
        {
            if(element.next==NULL)
            {
                printf("Node Is Not Present");
                break;
            }
            else
            {
                element=*(element.next);
            }
            printf("Value fetched %d : ",element.value);

        }
    }
}
