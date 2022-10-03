#include<stdio.h> //จงเขียนฟังก์ชั่นเพื่อหาว่าตัวเลขที่รับเข้ามาเป็นจำนวนเฉพาะหรือไม่ (Level 3)
int PrimeNum (int x)
{
   int ans=1; // 0 ไม่เป็น Prime 1 เป็น Prime
   if(x==1 || x==0)
   {
    ans = 0;
   }
   if(x>1)
   {
    for(int i=2;i<=x;i++)
    {
        x = x % i;
        if(x == 0)
        {
            ans = 0;
        }
    }
   }
   if(ans==0)
   {
    printf("NO!");
   }
   if(ans==1)
   {
    printf("YES!");
   }
}
int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    printf("Prime Number?\n");
    PrimeNum(num);
    return 0;
}