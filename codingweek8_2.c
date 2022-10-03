#include<stdio.h>
#include<math.h>
int isPrime(int p)
{
    int x;
    if(p==1 || p==0)
    {
        return 0;
    }
    for(int i=2;i<=sqrt(p);++i)
    {
        if(p % i == 0)
        {
            return 0;
        }
        else
        {
            x=1;
        }
    }
    if(x==1)
    {
        return 1;
    }

}
int main()
{
    int x;
    printf("ENTER NUMBER : ");
    scanf("%d",&x);
    if(isPrime(x)==1)
    {
        printf("Prime Number.");   
    }
    else
    {
        printf("Not Prime Number.");
    }
}