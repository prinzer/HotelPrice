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
        printf("�������û�����");
        gets(cUserName);
        printf("���������룺");
        gets(cPassWord);
        while(Login(cUserName,cPassWord) == 0)
        {
            iCount++;
            printf("�����������������!\n");
            printf("�������û�����");
            gets(cUserName);
            printf("���������룺");
            gets(cPassWord);
            if(iCount > 3)
            {
                printf("�˻�������󳬹�5�Σ�ϵͳ�Զ��˳���");
                exit(0);

            }
        }
        printf("��ϲ�㣬�˻�������������ȷ�������������\n");
        double dCurrentHotelsPrice;
        int iChoice = Menu();
        if(iChoice>=1 && iChoice<=5)
        {
            switch(iChoice)
            {
                case 1:
                    printf("��ѡ����ס�ľƵ���:\n%d��%s��\t",iChoice,sHotalsName[iChoice - 1]);
                    dCurrentHotelsPrice = dHotalPrices[iChoice - 1];
                    printf("����Ϊ:\t%.2lfԪÿ��\n",dCurrentHotelsPrice);
                    break;
                case 2:
                    printf("��ѡ����ס�ľƵ���:\n%d��%s��\t",iChoice,sHotalsName[iChoice - 1]);
                    dCurrentHotelsPrice = dHotalPrices[iChoice - 1];
                    printf("����Ϊ:\t%.2lfԪÿ��\n",dCurrentHotelsPrice);
                    break;
                case 3:
                    printf("��ѡ����ס�ľƵ���:\n%d��%s��\t",iChoice,sHotalsName[iChoice - 1]);
                    dCurrentHotelsPrice = dHotalPrices[iChoice - 1];
                    printf("����Ϊ:\t%.2lfԪÿ��\n",dCurrentHotelsPrice);
                    break;
                case 4:
                    printf("��ѡ����ס�ľƵ���:\n%d��%s��\t",iChoice,sHotalsName[iChoice - 1]);
                    dCurrentHotelsPrice = dHotalPrices[iChoice - 1];
                    printf("����Ϊ:\t%.2lfԪÿ��\n",dCurrentHotelsPrice);
                    break;
                case 5:
                    printf("ϵͳ�˳�����лʹ�ñ�ϵͳ��\n");
                    system("pause");
                    break;
                default:
                    printf("ϵͳ�˳�����лʹ�ñ�ϵͳ��\n");
                    system("pause");
            }

        }
        if(iChoice == 5)
        {
            break;
        }
        int iCurrNights = ChoiceNights();
        double dTotalCost = GetPrice(iCurrNights,dCurrentHotelsPrice);
        printf("��ѡ�����%s��ס%d�죬ÿ�췿��Ϊ%.2lfԪ\n",sHotalsName[iChoice - 1],iCurrNights,dCurrentHotelsPrice);
        printf("�������ܼ�ΪΪ%.2lfԪ\n",dTotalCost);
        system("pause");

    }

    return 0;
}


