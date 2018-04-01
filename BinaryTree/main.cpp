#include "BinaryTree.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>


int main()
{
	printf("递归算法:");//递归算法
	//测试二叉树1
	BinTree *BinTree_1_root;
	BinTree_1_root = new BinTree();
	Creat_BinTree_1(BinTree_1_root);
	printf("\n测试二叉树1:\n");
	printf("先序遍历二叉树PreOrder:\n");
	Printf_PreOrder(BinTree_1_root);
	printf("\n中序遍历二叉树InOrder:\n");
	Printf_InOrder(BinTree_1_root);
	printf("\n后序遍历二叉树PostOrder:\n");
	Printf_PostOrder(BinTree_1_root);

	//测试二叉树2
	BinTree *BinTree_2_root;
	BinTree_2_root = new BinTree();
	Creat_BinTree_2(BinTree_2_root);
	printf("\n测试二叉树2:\n");
	printf("先序遍历二叉树PreOrder:\n");
	Printf_PreOrder(BinTree_2_root);
	printf("\n中序遍历二叉树InOrder:\n");
	Printf_InOrder(BinTree_2_root);
	printf("\n后序遍历二叉树PostOrder:\n");
	Printf_PostOrder(BinTree_2_root);

	printf("\n\n非递归算法:\n");//非递归算法
	//测试二叉树1
	printf("测试二叉树1:\n");
	printf("先序遍历二叉树PreOrder:\n");
	Printf_PreOrder_NonRecursive(BinTree_1_root);
	printf("\n中序遍历二叉树InOrder:\n");
	Printf_InOrder_NonRecursive(BinTree_1_root);
	printf("\n后序遍历二叉树PostOrder:\n");
	Printf_PostOrder_NonRecursive(BinTree_1_root);

	//测试二叉树2
	printf("\n测试二叉树2:\n");
	printf("先序遍历二叉树PreOrder:\n");
	Printf_PreOrder_NonRecursive(BinTree_2_root);
	printf("\n中序遍历二叉树InOrder:\n");
	Printf_InOrder_NonRecursive(BinTree_2_root);
	printf("\n后序遍历二叉树PostOrder:\n");
	Printf_PostOrder_NonRecursive(BinTree_2_root);

	printf("\n");
	system("pause");
	return 0;
}