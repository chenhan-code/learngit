#include<stdio.h>
#include<string.h>

void test1(void)
{
int a=0x12345678;
char MidNum=0;
MidNum=(unsigned char)((a>>24)&0x000000ff);
printf("0x%2x\n",MidNum);
MidNum=(unsigned char)((a>>16)&0x000000ff);
printf("0x%2x\n",MidNum);
MidNum=(unsigned char)((a>>8)&0x000000ff);
printf("0x%2x\n",MidNum);
MidNum=(unsigned char)((a)&0x000000ff);
printf("0x%2x\n",MidNum);




}

void test2(void)
{
int a=0x12345678;
char *ptr=&a;
printf("0x%2x\n,0x%2x\n,0x%2x\n,0x%2x\n",*ptr,*(ptr+1),*(ptr+2),*(ptr+3));



}
void main()
{
test2();
test1();


}
