| Kyra Wooders |
| :---     |
| s198061 |
| Code Design and Data Structures Assessment |
| Linked Binary Tree |

## I. Requirements

- **Statement**: Create a linked binary tree that insert in nodes, highlight the selected node, and remove nodes.

- **Output**: The program will show a binary tree with the tree inserted 8, 5, 10, 17, 7, 12, 14, 1, 6, 18, and 9, have the 17 node selected, and the 12 node removed.

## II. Design Documentation

### Type 'TreeNode'
Makes the nodes for the tree.

#### Method TreeNode()
Type: Constructor

Description: creates a node

#### Method hasLeft()
Type: Bool

Description: if the node have a node to the left

#### Method hasRight()
Type: Bool

Description: if the node have a node to the right

#### Method getData()
Type: int

Description: gets the value of the node

#### Method getLeft()
Type: TreeNode*

Description: gets the node's left node

#### Method getRight()
Type: TreeNode*

Description: gets the node's right node

#### Method setData()
Type: Void

Description: sets the node's value

#### Method setLeft()
Type: Void

Description: sets the node's left node

#### Method setRight()
Type: Void

Description: sets the node's right node

#### Method draw()
Type: Void

Description: draws the node

#### Field m_value
Type: int

Description: value of the node

#### Field m_left
Type: TreeNode*

Description: the left nodes

#### Field m_right
Type: TreeNode*

Description: the right nodes

### Type 'BinaryTree'
Put the nodes into a binary tree.

#### Method BinaryTree
Type: Constructor

Description: creates the binary tree

#### Method isEmpty()
Type: Bool

Description: if the root node is empty

#### Method insert()
Type: Void

Description: adds the node to the tree

#### Method remove()
Type: Void

Description: removes the node from the tree

#### Method find()
Type: TreeNode*

Description: hightlights the seleted node

#### Method draw()
Type: Void

Description: draws the nodes into a tree

#### Method findNode()
Type: Bool

Description: hightlights the seleted node

#### Method draw()
Type: Void

Description: draws the nodes into a tree

#### Field m_pRoot
Type: TreeNode*

Description: the root node


## License

MIT License - Copyright (c) 2018 Academy of Interactive Entertainment

For more information, see the [license][lic] file.

Third party works are attributed under [thirdparty.md][3p].

[lic]:license.md
[3p]:thirdparty.md
[raylib]:https://github.com/raysan5/raylib
