#ifndef   __BINARYTREE_H
#define   __BINARYTREE_H

#include <stdio.h>
#include <stdlib.h>
#include <string>

#define NULL 0

//������
struct BinTree
{
	int data;//����
	BinTree* parent;//����
	BinTree* leftchild;//����
	BinTree* rightchild;//�Һ���
	BinTree();//���캯��
};

void Printf_BinTreeNode(BinTree* node);//��ʾ�����ڵ������
void Printf_PreOrder(BinTree* node);//�������������_�ݹ��㷨
void Printf_InOrder(BinTree* node);//�������������_�ݹ��㷨
void Printf_PostOrder(BinTree* node);//�������������_�ݹ��㷨
void Printf_PreOrder_NonRecursive(BinTree* root);//�������������_�ǵݹ��㷨
void Printf_InOrder_NonRecursive(BinTree* root);//�������������_�ǵݹ��㷨
void Printf_PostOrder_NonRecursive(BinTree* root);//�������������_�ǵݹ��㷨
void AddNode(BinTree* parent, int leftchilddata, int rightchilddata, BinTree* new_leftchild, BinTree* new_rightchild);//��ӽڵ�
void Creat_BinTree_1(BinTree* root);//���ɲ��Զ�����1
void Creat_BinTree_2(BinTree* root);//���ɲ��Զ�����2

//��ջ

#define STACKRANGE 100//���ö�ջ����

struct MyStack
{
	BinTree* data[STACKRANGE];//��ջ����
	int top;//ջ��ָ��
	void push(BinTree* pushdata);//ѹջ
	BinTree* pop();//��ջ
	MyStack();//���캯��
	int IsEmpty();//1:�˶�ջ�գ�0:�˶�ջ�ǿ�
	int IsFull();//1:�˶�ջ����0:�˶�ջδ��
};

struct Element//Ϊ�������������_�ǵݹ��㷨�������õĽṹ��
{
	BinTree* node;//��ջ�ڵ�����
	int flag;//��ջ�������
	Element();//���캯��
};

struct StackElement//Ϊ�������������_�ǵݹ��㷨�������õĶ�ջ�ṹ��
{
	BinTree* node[STACKRANGE];//��ջ�ڵ�����
	int flag[STACKRANGE];//��ջ�������
	int top;//ջ��ָ��
	void push(Element* element);//ѹջ
	Element* pop();//��ջ
	StackElement();//���캯��
	int IsEmpty();//1:�˶�ջ�գ�0:�˶�ջ�ǿ�
	int IsFull();//1:�˶�ջ����0:�˶�ջδ��
};

#endif