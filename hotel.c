#include <stdio.h>
#include "hotel.h"
#include <string.h>

char sHotalsName[4][30] = {"���ϾƵ�","���¾Ƶ�","�˼�Ƶ�","���ɾƵ�"};
double dHotalPrices[4] = {900.00,800.00,700.00,600.00};

int Menu(void)
{
    int i;
    int j = 0;
    int iNum;
    printf("��ѡ����Ҫ��ס�ľƵ꣡\n");
    for(i = 0;i < 4;i++)
    {
    printf("%d��%s\t����Ϊ:%.2lfԪÿ��\n",i + 1,sHotalsName[i],dHotalPrices[i]);
    }
    printf("5���˳���ϵͳ��\n");
    while(scanf("%d",&iNum)!=1 || iNum > 5 || iNum < 1)//������Ĳ�Ϊ1-5ʱ����ѭ����
        {
            fflush(stdin);//�������
            printf("�������%d�����������룬��������%d�Σ�ϵͳ���Զ��˳���\n",++j,5-j);
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
    printf("��ѡ����Ҫ��ס������(������20��)��\n");
    while(scanf("%d",&iNights)!=1 || iNights > 20 || iNights < 1)//������Ĳ�Ϊ1-20ʱ����ѭ����
        {
            fflush(stdin);//�������
            printf("�������%d�����������룬��������%d�Σ�ϵͳ���Զ��˳���\n",++j,5-j);
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
