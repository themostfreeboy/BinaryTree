#include "BinaryTree.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>


int main()
{
	printf("�ݹ��㷨:");//�ݹ��㷨
	//���Զ�����1
	BinTree *BinTree_1_root;
	BinTree_1_root = new BinTree();
	Creat_BinTree_1(BinTree_1_root);
	printf("\n���Զ�����1:\n");
	printf("�������������PreOrder:\n");
	Printf_PreOrder(BinTree_1_root);
	printf("\n�������������InOrder:\n");
	Printf_InOrder(BinTree_1_root);
	printf("\n�������������PostOrder:\n");
	Printf_PostOrder(BinTree_1_root);

	//���Զ�����2
	BinTree *BinTree_2_root;
	BinTree_2_root = new BinTree();
	Creat_BinTree_2(BinTree_2_root);
	printf("\n���Զ�����2:\n");
	printf("�������������PreOrder:\n");
	Printf_PreOrder(BinTree_2_root);
	printf("\n�������������InOrder:\n");
	Printf_InOrder(BinTree_2_root);
	printf("\n�������������PostOrder:\n");
	Printf_PostOrder(BinTree_2_root);

	printf("\n\n�ǵݹ��㷨:\n");//�ǵݹ��㷨
	//���Զ�����1
	printf("���Զ�����1:\n");
	printf("�������������PreOrder:\n");
	Printf_PreOrder_NonRecursive(BinTree_1_root);
	printf("\n�������������InOrder:\n");
	Printf_InOrder_NonRecursive(BinTree_1_root);
	printf("\n�������������PostOrder:\n");
	Printf_PostOrder_NonRecursive(BinTree_1_root);

	//���Զ�����2
	printf("\n���Զ�����2:\n");
	printf("�������������PreOrder:\n");
	Printf_PreOrder_NonRecursive(BinTree_2_root);
	printf("\n�������������InOrder:\n");
	Printf_InOrder_NonRecursive(BinTree_2_root);
	printf("\n�������������PostOrder:\n");
	Printf_PostOrder_NonRecursive(BinTree_2_root);

	printf("\n");
	system("pause");
	return 0;
}