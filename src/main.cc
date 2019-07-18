#include <container/vector.h>
#include <container/list.h>
#include <container/binary_search_tree.h>
#include <algo/maximum_conti_subsequence.h>
#include <algo/expression_convert.h>
#include <container/binary_heap.h>

#include <vector>
#include <iostream>


void useMyVector()
{
  wdq::Vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);
  v.push_back(6);
  std::cout << v << std::endl;
}

void useList()
{
  wdq::List<int> l;
  l.push_back(1);
  l.push_back(2);
  l.push_back(3);
  l.push_back(4);
  l.push_back(5);
  l.push_back(6);
  wdq::List<int>::const_iterator it;
  for (it = l.begin(); it != l.end(); ++it)
  {
    std::cout << *it << std::endl;
  }
}

void findMaxSubSequence()
{
  FindMaxSubSequence findMaxSubSequence;
  std::vector<int> data;
  data.push_back(4);
  data.push_back(-3);
  data.push_back(5);
  data.push_back(-2);
  data.push_back(-1);
  data.push_back(2);
  data.push_back(6);
  data.push_back(-2);
  cout << findMaxSubSequence.findMax(data) << endl;
}

void infixConvert2Postfix()
{
  expression_convert expressionConvert;
  string infixStr = "a+b*c+(d*e+f)*g";

  string postfixData = expressionConvert.infix2postfix(infixStr);
  cout << postfixData << endl;
}

void binarySearchTree()
{
  BinarySearchTree<int> bst;
  bst.insert(10);
  bst.insert(5);
  bst.insert(2);
  bst.insert(7);
  bst.insert(15);
  bst.insert(12);
  bst.insert(18);
  bst.printTree(cout, 0);
  cout << "===========================" << endl;
  bst.printTree(cout, 1);
  cout << "===========================" << endl;
  bst.printTree(cout, 2);
  cout << "===========================" << endl;
  cout << "height: " << bst.height() << endl;
}

int main()
{
  vector<int> v;
  BinaryHeap<int> b(v);
  return 0;
}
