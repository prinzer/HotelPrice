#include <stdio.h>
#include <stdlib.h>
#include "hotel.h"
#include <string.h>

extern char sHotalsName[4][30];
extern double dHotalPrices[4];

int main()
{
    for(;;)
    {
        int iCount = 0;
        char cUserName[50];
        char cPassWord[50];
        printf("请输入用户名：");
        gets(cUserName);
        printf("请输入密码：");
        gets(cPassWord);
        while(Login(cUserName,cPassWord) == 0)
        {
            iCount++;
            printf("输入错误，请重新输入!\n");
            printf("请输入用户名：");
            gets(cUserName);
            printf("请输入密码：");
            gets(cPassWord);
            if(iCount > 3)
            {
                printf("账户密码错误超过5次，系统自动退出！");
                exit(0);

            }
        }
        printf("恭喜你，账户和密码输入正确！请继续操作！\n");
        double dCurrentHotelsPrice;
        int iChoice = Menu();
        if(iChoice>=1 && iChoice<=5)
        {
            switch(iChoice)
            {
                case 1:
                    printf("您选择入住的酒店是:\n%d、%s！\t",iChoice,sHotalsName[iChoice - 1]);
                    dCurrentHotelsPrice = dHotalPrices[iChoice - 1];
                    printf("房费为:\t%.2lf元每晚！\n",dCurrentHotelsPrice);
                    break;
                case 2:
                    printf("您选择入住的酒店是:\n%d、%s！\t",iChoice,sHotalsName[iChoice - 1]);
                    dCurrentHotelsPrice = dHotalPrices[iChoice - 1];
                    printf("房费为:\t%.2lf元每晚！\n",dCurrentHotelsPrice);
                    break;
                case 3:
                    printf("您选择入住的酒店是:\n%d、%s！\t",iChoice,sHotalsName[iChoice - 1]);
                    dCurrentHotelsPrice = dHotalPrices[iChoice - 1];
                    printf("房费为:\t%.2lf元每晚！\n",dCurrentHotelsPrice);
                    break;
                case 4:
                    printf("您选择入住的酒店是:\n%d、%s！\t",iChoice,sHotalsName[iChoice - 1]);
                    dCurrentHotelsPrice = dHotalPrices[iChoice - 1];
                    printf("房费为:\t%.2lf元每晚！\n",dCurrentHotelsPrice);
                    break;
                case 5:
                    printf("系统退出，感谢使用本系统！\n");
                    system("pause");
                    break;
                default:
                    printf("系统退出，感谢使用本系统！\n");
                    system("pause");
            }

        }
        if(iChoice == 5)
        {
            break;
        }
        int iCurrNights = ChoiceNights();
        double dTotalCost = GetPrice(iCurrNights,dCurrentHotelsPrice);
        printf("您选择的是%s入住%d天，每天房费为%.2lf元\n",sHotalsName[iChoice - 1],iCurrNights,dCurrentHotelsPrice);
        printf("您房费总计为为%.2lf元\n",dTotalCost);
        system("pause");

    }

    return 0;
}


