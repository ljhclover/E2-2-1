//ѭ�����еļ�ʵ����Ӧ��
//ʵ����:2-2-1
//�༭����2016-5-20
//ʵ�ַ�ʽ���������±��ʶ����Ԫ�ص�λ�á�
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
	ElementType Front;//�����±�
	ElementType Rear;//�����±�
 }*CQueue_Pointor;
ElementType Creat_CQueue(CQueue_Pointor &q);
ElementType Display_CQueue(CQueue_Pointor q);//��ӡ��ǰ��ѭ������
ElementType Enter_CQueue(CQueue_Pointor &q);//��ԭ����ѭ�������в���һ���µ�ֵ
ElementType  Delet_CQueue(CQueue_Pointor &q);//��ԭ�е�ѭ��������ɾ��һ��Ԫ��
#endif // !CQueue

int main()
{

	return OK;
}

ElementType Creat_CQueue(CQueue_Pointor &p)
{

}