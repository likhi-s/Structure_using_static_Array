#include<stdio.h>
struct student
{
    char name[50];
    unsigned int id;
    char address[100];
};
int main()
{
    int i;
    struct student s[20];
    printf("Record of 20 students\n");
    for(i=0;i<20;i++)
    {
        printf("Enter Details of Student %d\n",i+1);
        printf("Enter Student Name:");
        scanf("%s",&s[i].name);
        printf("Enter Student ID:");
        scanf("%d",&s[i].id);
        printf("Enter Student Address:");
        scanf("%s",&s[i].address);
    }
    for(i=0;i<20;i++)
    {
        printf("Record of Student-%d\n",i+1);
        printf("Name:%s;ID:%d;Address:%s\n",s[i].name,s[i].id,s[i].address);
    }

    return 0;
}
