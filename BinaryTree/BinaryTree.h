#ifndef   __BINARYTREE_H
#define   __BINARYTREE_H

#include <stdio.h>
#include <stdlib.h>
#include <string>

#define NULL 0

//二叉树
struct BinTree
{
	int data;//数据
	BinTree* parent;//父亲
	BinTree* leftchild;//左孩子
	BinTree* rightchild;//右孩子
	BinTree();//构造函数
};

void Printf_BinTreeNode(BinTree* node);//显示给定节点的数据
void Printf_PreOrder(BinTree* node);//先序遍历二叉树_递归算法
void Printf_InOrder(BinTree* node);//中序遍历二叉树_递归算法
void Printf_PostOrder(BinTree* node);//后序遍历二叉树_递归算法
void Printf_PreOrder_NonRecursive(BinTree* root);//先序遍历二叉树_非递归算法
void Printf_InOrder_NonRecursive(BinTree* root);//中序遍历二叉树_非递归算法
void Printf_PostOrder_NonRecursive(BinTree* root);//后序遍历二叉树_非递归算法
void AddNode(BinTree* parent, int leftchilddata, int rightchilddata, BinTree* new_leftchild, BinTree* new_rightchild);//添加节点
void Creat_BinTree_1(BinTree* root);//生成测试二叉树1
void Creat_BinTree_2(BinTree* root);//生成测试二叉树2

//堆栈

#define STACKRANGE 100//设置堆栈容量

struct MyStack
{
	BinTree* data[STACKRANGE];//堆栈数据
	int top;//栈顶指针
	void push(BinTree* pushdata);//压栈
	BinTree* pop();//弹栈
	MyStack();//构造函数
	int IsEmpty();//1:此堆栈空；0:此堆栈非空
	int IsFull();//1:此堆栈满；0:此堆栈未满
};

struct Element//为后序遍历二叉树_非递归算法特意设置的结构体
{
	BinTree* node;//堆栈节点数据
	int flag;//堆栈标记数据
	Element();//构造函数
};

struct StackElement//为后序遍历二叉树_非递归算法特意设置的堆栈结构体
{
	BinTree* node[STACKRANGE];//堆栈节点数据
	int flag[STACKRANGE];//堆栈标记数据
	int top;//栈顶指针
	void push(Element* element);//压栈
	Element* pop();//弹栈
	StackElement();//构造函数
	int IsEmpty();//1:此堆栈空；0:此堆栈非空
	int IsFull();//1:此堆栈满；0:此堆栈未满
};

#endif