#include "BinaryTree.h"

//������
BinTree::BinTree()//���캯��
{
	data = 0;
	parent = NULL;
	leftchild = NULL;
	rightchild = NULL;
}

void Printf_BinTreeNode(BinTree* node)//��ʾ�����ڵ������
{
	printf("%d\t", node->data);
}

void Printf_PreOrder(BinTree* node)//�������������_�ݹ��㷨
{
	if (node != NULL)
	{
		Printf_BinTreeNode(node);
		Printf_PreOrder(node->leftchild);
		Printf_PreOrder(node->rightchild);
	}
}

void Printf_InOrder(BinTree* node)//�������������_�ݹ��㷨
{
	if (node != NULL)
	{
		Printf_InOrder(node->leftchild);
		Printf_BinTreeNode(node);
		Printf_InOrder(node->rightchild);
	}
}

void Printf_PostOrder(BinTree* node)//�������������_�ݹ��㷨
{
	if (node != NULL)
	{
		Printf_PostOrder(node->leftchild);
		Printf_PostOrder(node->rightchild);
		Printf_BinTreeNode(node);
	}
}

void Printf_PreOrder_NonRecursive(BinTree* root)//�������������_�ǵݹ��㷨
{
	if (root == NULL)
	{
		return;
	}
	MyStack stack;
	BinTree *p;
	p = root;
	while (p != NULL || stack.IsEmpty() == 0)
	{
		if (p != NULL)
		{
			Printf_BinTreeNode(p);
			stack.push(p);
			p = p->leftchild;
		}
		else
		{
			p = stack.pop();
			p = p->rightchild;
		}
	}
}

void Printf_InOrder_NonRecursive(BinTree* root)//�������������_�ǵݹ��㷨
{
	if (root == NULL)
	{
		return;
	}
	MyStack stack;
	BinTree *p;
	p = root;
	while (p != NULL || stack.IsEmpty() == 0)
	{
		if (p != NULL)
		{
			stack.push(p);
			p = p->leftchild;
		}
		else
		{		
			p = stack.pop();
			Printf_BinTreeNode(p);
			p = p->rightchild;
		}
	}
}

void Printf_PostOrder_NonRecursive(BinTree* root)//�������������_�ǵݹ��㷨
{
	if (root == NULL)
	{
		return;
	}
	BinTree *p;
	Element element;
	StackElement stack_element;
	p = root;
	while (p != NULL || stack_element.IsEmpty() == 0)
	{
		if (p != NULL)
		{
			element.node = p;
			element.flag = 1;
			stack_element.push(&element);
			p = p->leftchild;
		}
		else
		{
			element = *(stack_element.pop());
			if (element.flag == 1)
			{
				element.flag = 0;
				p = element.node->rightchild;
				stack_element.push(&element);
			}
			else//element.flag == 0
			{
				p = element.node;
				Printf_BinTreeNode(p);
				p = NULL;
			}
		}
	}
}

//�˺�����������Ϊ0�����޸ú���
void AddNode(BinTree* parent, int leftchilddata, int rightchilddata, BinTree* new_leftchild, BinTree* new_rightchild)//��ӽڵ�
{
	if (leftchilddata == 0)
	{
		parent->leftchild = NULL;
	}
	else if (leftchilddata != 0)
	{
		new_leftchild = new BinTree();
		parent->leftchild = new_leftchild;
		new_leftchild->data = leftchilddata;
		new_leftchild->leftchild = NULL;
		new_leftchild->rightchild = NULL;
		new_leftchild->parent = parent;
	}
	if (rightchilddata == 0)
	{
		parent->rightchild = NULL;
	}
	else if (rightchilddata != 0)
	{
		new_rightchild = new BinTree();
		parent->rightchild = new_rightchild;
		new_rightchild->data = rightchilddata;
		new_rightchild->leftchild = NULL;
		new_rightchild->rightchild = NULL;
		new_rightchild->parent = parent;
	}
}

void Creat_BinTree_1(BinTree* root)//���ɲ��Զ�����1
{
	BinTree *temp_leftchild, *temp_rightchild;
	temp_leftchild = NULL;
	temp_rightchild = NULL;
	root->parent = NULL;
	root->data = 1;
	AddNode(root, 2, 3, temp_leftchild, temp_rightchild);

	AddNode(root->leftchild, 4, 5, temp_leftchild, temp_rightchild);
	AddNode(root->rightchild, 6, 7, temp_leftchild, temp_rightchild);
}

void Creat_BinTree_2(BinTree* root)//���ɲ��Զ�����2
{
	BinTree *temp_leftchild, *temp_rightchild;
	temp_leftchild = NULL;
	temp_rightchild = NULL;
	root->parent = NULL;
	root->data = 1;
	AddNode(root, 2, 3, temp_leftchild, temp_rightchild);

	AddNode(root->leftchild, 4, 5, temp_leftchild, temp_rightchild);
	AddNode(root->rightchild, 6, 7, temp_leftchild, temp_rightchild);

	AddNode(root->leftchild->leftchild, 8, 9, temp_leftchild, temp_rightchild);
	AddNode(root->leftchild->rightchild, 10, 11, temp_leftchild, temp_rightchild);
	AddNode(root->rightchild->leftchild, 12, 13, temp_leftchild, temp_rightchild);
	AddNode(root->rightchild->rightchild, 14, 15, temp_leftchild, temp_rightchild);
}

//��ջ
//MyStack
MyStack::MyStack()//���캯��
{
	top=0;
	for (int i = 0; i < STACKRANGE; i++)
	{
		data[i] = NULL;
	}
}

void MyStack::push(BinTree* pushdata)//ѹջ
{
	if (top < STACKRANGE)
	{
		data[top++] = pushdata;
	}
}

BinTree* MyStack::pop()//��ջ
{
	if (top > 0)
	{
		BinTree* temp = NULL;
		temp = data[--top];
		data[top] = NULL;
		return temp;
	}
	return NULL;
}

int MyStack::IsEmpty()
{
	if (top == 0)
	{
		return 1;//�˶�ջ��
	}
	else
	{
		return 0;//�˶�ջ�ǿ�
	}
}

int MyStack::IsFull()
{
	if (top == STACKRANGE)
	{
		return 1;//�˶�ջ��
	}
	else
	{
		return 0;//�˶�ջδ��
	}
}

//Element
Element::Element()//���캯��
{
	node = NULL;
	flag = 0;
}

//StackElement
StackElement::StackElement()//���캯��
{
	top = 0;
	for (int i = 0; i < STACKRANGE; i++)
	{
		node[i] = NULL;
		flag[i] = 0;
	}
}

void StackElement::push(Element* element)//ѹջ
{
	if (top < STACKRANGE)
	{
		node[top] = element->node;
		flag[top] = element->flag;
		top++;
	}
}

Element* StackElement::pop()//��ջ
{
	if (top > 0)
	{
		Element* element = new Element();
		top--;
		element->node = node[top];
		element->flag = flag[top];
		node[top] = NULL;
		flag[top] = 0;
		return element;
	}
	return NULL;
}

int StackElement::IsEmpty()
{
	if (top == 0)
	{
		return 1;//�˶�ջ��
	}
	else
	{
		return 0;//�˶�ջ�ǿ�
	}
}

int StackElement::IsFull()
{
	if (top == STACKRANGE)
	{
		return 1;//�˶�ջ��
	}
	else
	{
		return 0;//�˶�ջδ��
	}
}