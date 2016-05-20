//循环队列的简单实现与应用
//实验编号:2-2-1
//编辑日期2016-5-20
//实现方式采用数组下标标识现在元素的位置。
#include<stdio.h>
#include<stdlib.h>

#ifndef CQueue_1
typedef int ElementType;
#define OK 1
#define ERROR 0
#define CQueue_Size_Max 100
typedef struct CQueue
{
	ElementType * Elem;
	ElementType Front;//数组下标
	ElementType Rear;//数组下标
 }*CQueue_Pointor;
ElementType Creat_CQueue(CQueue_Pointor &q);
ElementType Display_CQueue(CQueue_Pointor q);//打印当前的循环队列
ElementType Enter_CQueue(CQueue_Pointor &q);//在原来的循环链表中插入一个新的值
ElementType  Delet_CQueue(CQueue_Pointor &q);//在原有的循环链表中删除一个元素
#endif // !CQueue

int main()
{

	return OK;
}

ElementType Creat_CQueue(CQueue_Pointor &p)
{

}