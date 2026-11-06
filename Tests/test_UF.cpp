#include <iostream>
#include "../Source/UnionFind.h"

using namespace std;

int main() {
    UnionFind uf(5);

    cout << "Testing Union-Find..." << endl;

    // Test 1: Each element starts separate
    if (!uf.connected(0, 1)) {
        cout << "Test 1 passed" << endl;
    } else {
        cout << "Test 1 failed" << endl;
    }

    // Test 2: Unite two elements
    uf.unite(0, 1);

    if (uf.connected(0, 1)) {
        cout << "Test 2 passed" << endl;
    } else {
        cout << "Test 2 failed" << endl;
    }

    // Test 3: Unconnected elements stay separate
    if (!uf.connected(0, 2)) {
        cout << "Test 3 passed" << endl;
    } else {
        cout << "Test 3 failed" << endl;
    }

    // Test 4: Connect multiple elements
    uf.unite(1, 2);
    uf.unite(2, 3);

    if (uf.connected(0, 3)) {
        cout << "Test 4 passed" << endl;
    } else {
        cout << "Test 4 failed" << endl;
    }

    return 0;
}