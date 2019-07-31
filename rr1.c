#include<stdio.h>
#include<conio.h>
void main()
{
    char ch,c=0;
    scanf("%d",&ch);
    if((ch>=0)||(ch=='.'))
    {
        c++;
    }
    if(c>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    getch();
}
