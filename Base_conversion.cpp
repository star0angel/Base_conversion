#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)//取消scanf返回值的警告


//简单实现进制转换
void DectoHex(int decnum)//十进制到十六进制
{
	int num[20] = { 0 };
	int i = 0;
	while (decnum)
	{
		
		num[i++] = decnum % 16;
		decnum = decnum / 16;
	}
	
	for (i--;i>=0;i--)
	{
		if (num[i] >= 0 && num[i] <= 9)
		{
			printf("%d", num[i]);
		}
		else
			printf("%c", '7'+ num[i]);
	}
}

void DectoBit(int decnum)//十进制到二进制
{
	int num[32] = { 0 };
	int i = 0;
	while (decnum)
	{

		num[i++] = decnum % 2;
		decnum = decnum / 2;
	}

	for (i--; i >= 0; i--)
	{
		
			printf("%d", num[i]);
		
	}
}
int main()
{
	DectoHex(268435455);
	DectoBit(16666);
	return 0;
}