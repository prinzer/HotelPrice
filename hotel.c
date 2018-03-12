#include <stdio.h>
#include "hotel.h"
#include <string.h>

char sHotalsName[4][30] = {"天上酒店","地下酒店","人间酒店","神仙酒店"};
double dHotalPrices[4] = {900.00,800.00,700.00,600.00};

int Menu(void)
{
    int i;
    int j = 0;
    int iNum;
    printf("请选择需要入住的酒店！\n");
    for(i = 0;i < 4;i++)
    {
    printf("%d、%s\t房费为:%.2lf元每晚！\n",i + 1,sHotalsName[i],dHotalPrices[i]);
    }
    printf("5、退出本系统！\n");
    while(scanf("%d",&iNum)!=1 || iNum > 5 || iNum < 1)//当输入的不为1-5时进入循环，
        {
            fflush(stdin);//清除缓存
            printf("输入错误%d，请重新输入，如果再输错%d次，系统将自动退出！\n",++j,5-j);
            if(j>4)
            {
                return 0;
            }

        }
    return(iNum);
}

int ChoiceNights(void)
{
    int j = 0;
    int iNights;
    printf("请选择需要入住的天数(不超过20天)！\n");
    while(scanf("%d",&iNights)!=1 || iNights > 20 || iNights < 1)//当输入的不为1-20时进入循环，
        {
            fflush(stdin);//清除缓存
            printf("输入错误%d，请重新输入，如果再输错%d次，系统将自动退出！\n",++j,5-j);
            if(j>4)
            {
                return 0;
            }

        }
    return(iNights);

}


double GetPrice(int nights,double price)
{
    int i;
    double dTotal = 0;
    for(i =0;i<nights;i++)
    {
        dTotal += price;
        price = price * DISCOUNT;
    }
    return dTotal;
}


int Login(char cUserName[],char cPassWord[])
{
  int result = 0;
  if(strcmp(cUserName,USERNAME) == 0 && strcmp(cPassWord,PASSWORD) == 0 )
  {
      result = 1;
  }
  return result;
}
