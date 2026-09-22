#include <stdio.h>
int split(char s[],int a)
{
    int i=0;
    if(a==0)
    {
        while(s[i]!='.')
        {
            printf("%[^/n]",s[i]);
            i++;
        }
    }
   else if(a==1)
    {
        while(s!='\0')
        {
            printf("%[^/n]",s[i]);
            i++;

        }
    }
}
int main()
{
char str[100]="kiit.jpg";
int ch;
printf("enter the choice 0 or 1");
scanf("%d",&ch);
split(str,ch);
return 0;
}