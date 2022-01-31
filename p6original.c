#include<stdio.h>
void input_two_string(char *a,char *b)
{
 printf("enter two strings\n");
 scanf("%s%s",a,b);
 return ;
}
int strcmpp(char *a,char *b)
{
    int str1,str2,n;
    for(int i=0;i<n;i++)
    {
    str1+=str1+a[i];
    str2+=str2+a[i];
    break;
    }
    if(str1>str2)
    return 1;
    else if(str1==str2)
    return 0;
    else
    return -1;
}
void output(char *a,char *b,int result)
{
    if(result==1)
    printf("%s is greater than %s\n",a,b);
    else if(result==0)
    printf("%s is equal to %s\n",a,b);
    else
    printf("%s is lesser than %s",a,b);
}
int main()
{
    char a[100],b[100];
    int result;
    input_two_string(a,b);
    strcmpp(a,b);
    output(a,b,result);
    return 0;
}