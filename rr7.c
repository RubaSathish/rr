#include<stdio.h>
int main()
{
    char s[50];
    int i,n,c=0;
    scanf("%[^\n]",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(!(s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
        {
            c++;
        }
    }
    printf("%d",c-1);
    return 0;
}
