#include <iostream>
#include "BinarySearchTree.h"
#include "Random.h"
using namespace std;

int main()
{
	rand_seed();
	BinarySearchTree<int> mybst;
	int how_many;
	cout << "How many random values? ";
	cin >> how_many;
	cout << endl << endl;

	for (int i = 1; i <= how_many; i++)
	{
		mybst.insert(rand_int(1, 250));
	}
	cout << endl << how_many << " values entered" << endl << endl;

	mybst.printTree();
	cout << endl;
	mybst.printInternal();

	int next;
	cout << "Now doing five removals ..." << endl;
	for (int i = 1; i <= 5; i++)
	{
		cout << "Remove? ";
		cin >> next;
		cout << endl;
		mybst.remove(next);
	}

	cout << endl;
	mybst.printTree();
	cout << endl;
	
	mybst.printInternal();
	cout << endl << endl;

	return 0;
}
