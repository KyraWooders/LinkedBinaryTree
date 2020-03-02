#include "BinaryTree.h"
#include "raylib.h"


BinaryTree::BinaryTree()
{
}


BinaryTree::~BinaryTree()
{
}

bool BinaryTree::isEmpty() const
{
	return false;
}

void BinaryTree::insert(int a_nValue)
{
}

void BinaryTree::remove(int a_nValue)
{
}

TreeNode * BinaryTree::find(int a_nValue)
{
	return nullptr;
}

void BinaryTree::draw(TreeNode * selected)
{
	draw(m_pRoot, 640, 680, 640, selected);
}

bool BinaryTree::findNode(int a_nSearchValue, TreeNode ** ppOutNode, TreeNode ** ppOutParent)
{
	return false;
}

void BinaryTree::draw(TreeNode * pNode, int x, int y, int horizontalSpacing, TreeNode * selected)
{
	//Cut the horizonal spacing in half
	horizontalSpacing /= 2;

	//Check that current node exists
	if (pNode)
	{
		//Check for left node
		if (pNode->hasLeft())
		{
			//Draw line to left node
			DrawLine(x, y, x - horizontalSpacing, y - 80, BLUE);
			//Draw left node
			draw(pNode->getLeft(), x - horizontalSpacing, y - 80, horizontalSpacing, selected);
		}
		//Check for right node
		if (pNode->hasRight())
		{
			//Draw line to right node
			DrawLine(x, y, x - horizontalSpacing, y - 80, BLUE);
			//Draw right node
			draw(pNode->getRight(), x - horizontalSpacing, y - 80, horizontalSpacing, selected);
		}
		//Draw current node
		pNode->draw(x, y, (selected == pNode));
	}
}
