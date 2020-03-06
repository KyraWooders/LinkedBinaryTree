#include "BinaryTree.h"
#include "raylib.h"


BinaryTree::BinaryTree()
{
	m_pRoot = nullptr;
}

BinaryTree::~BinaryTree()
{
}

bool BinaryTree::isEmpty() const
{
	if (m_pRoot == nullptr)
	{
		return true;
	}
	return false;
}

void BinaryTree::insert(int a_nValue)
{
	//If the tree is empty, the value is inserted at the root
	if (isEmpty())
	{
		m_pRoot = new TreeNode();
		m_pRoot->setData(a_nValue);
	}
	else
	{
		//Set the current node to the root
		TreeNode* currentNode = m_pRoot;
		TreeNode* parentNode = currentNode;

		//While the current node is not null
		while (currentNode != nullptr)
		{
			//If the value to be inserted is less than the value in the current node
			if (a_nValue < currentNode->getData())
			{
				//Set the parent to the current node, then set current node to the left child and continue
				parentNode = currentNode;
				currentNode = currentNode->getLeft();
				continue;
			}
			//If the value to be inserted is greater than the current node
			if (a_nValue > currentNode->getData())
			{
				//Set the parent to the current node, then set current node to the left child and continue
				parentNode = currentNode;
				currentNode = currentNode->getRight();
				continue;
			}
			//If the value to be inserted is the same as the value in the current node
			if (a_nValue == currentNode->getData())
			{
				//exit the loop
				return;
			}
		}

		//If value to be inserted is less than parent
		if (a_nValue < parentNode->getData())
		{
			//make current node to a new node and set the current node to parent node's left
			currentNode = new TreeNode(a_nValue);
			parentNode->setLeft(currentNode);
		}
		else
		{
			//make current node to a new node and set the current node to parent node's right
			currentNode = new TreeNode(a_nValue);
			parentNode->setRight(currentNode);
		}
	}
	
}

void BinaryTree::remove(int a_nValue)
{
	/*TreeNode* currentNode = m_pRoot;
	TreeNode* parentNode = currentNode;

	if (currentNode->hasRight())
	{

	}

	if (!currentNode->hasRight())
	{
		if ()
		{

		}
		if ()
		{

		}
		if ()
		{

		}
	}*/
}

TreeNode * BinaryTree::find(int a_nValue)
{
	TreeNode* currentNode = nullptr;
	TreeNode* parentNode = currentNode;

	findNode(a_nValue, &currentNode, &parentNode);

	return nullptr;
}

void BinaryTree::draw(TreeNode * selected)
{
	//Draw root node
	draw(m_pRoot, 900, 500, 640, selected);
}

bool BinaryTree::findNode(int a_nSearchValue, TreeNode ** ppOutNode, TreeNode ** ppOutParent)
{
	//Set the current node to the root
	TreeNode* currentNode = m_pRoot;
	TreeNode* parentNode = currentNode;

	//While the current node is not null
	while (currentNode != nullptr)
	{
		//If the search value equals the current node value,
		if (a_nSearchValue == currentNode->getData())
		{
			//Return the current node and its parent
			*ppOutNode = currentNode;
			*ppOutParent = parentNode;
			return true;
		}
		else 
		{
			//If the search value is less than the current node
			if (a_nSearchValue < currentNode->getData())
			{
				//Set the current node to the left child
				parentNode = currentNode;
				currentNode = currentNode->getLeft();
			}
			else
			{
				//Set the current node to the right child
				parentNode = currentNode;
				currentNode = currentNode->getRight();
			}
		}
	}

	//If the loop exits, then a match was not found, so return false
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
			DrawLine(x, y, x - horizontalSpacing, y + 80, BLUE);
			//Draw left node
			draw(pNode->getLeft(), x - horizontalSpacing, y + 80, horizontalSpacing, selected);
		}
		//Check for right node
		if (pNode->hasRight())
		{
			//Draw line to right node
			DrawLine(x, y, x + horizontalSpacing, y + 80, BLUE);
			//Draw right node
			draw(pNode->getRight(), x + horizontalSpacing, y + 80, horizontalSpacing, selected);
		}
		//Draw current node
		pNode->draw(x, y, (selected == pNode));
	}
}
