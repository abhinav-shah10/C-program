#include <stdio.h>
int split(char s[],int a)
{
    int i=0,p=-1;
    for(i=0;s[i]!='\0';i++)
    {
    if(s[i]=='.')
    {
        p=i;
        break;
    }
    }
    if(a==0)
    {
        while(s[i]!='.')
        {
            printf("%c",s[i]);
            i++;
        }
    }
   else if(a==1)
    {
        i=p+1;
        while(s[i]!='\0')
        {
            printf("%c",s[i]);
            i++;

        }
    }
    return 0;
}
int main()
{
char str[50]="kiit.jpg";
int ch;
printf("enter the choice 0 or 1");
scanf("%d",&ch);
split(str,ch);
return 0;
}