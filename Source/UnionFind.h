#ifndef UNIONFIND_H
#define UNIONFIND_H
#include <vector>

class UnionFind{
    private:
        std::vector<int> parent;
        std::vector<int> size;
    public:
        UnionFind(int n){
            parent.resize(n);
            size.resize(n);
            for(int i = 0; i < n; i++){
                parent[i] = i;
                size[i] = 1;
            }
        }
        int find(int x){
            int root = x;
            while (parent[root] != root){
                root = parent[root];
            }
            while (parent[x] != x){
                int next = parent[x];
                parent[x] = root;
                x = next;
            }
            return root;
        }
        void unite(int x, int y){
            int rootX = find(x);
            int rootY = find(y);
            if(rootX == rootY){
                return;
            }
            if (size[rootX] < size[rootY]) {
                int temp = rootX;
                rootX = rootY;
                rootY = temp;
            }
            parent[rootY] = rootX;
            size[rootX] += size[rootY];
        }
        bool connected(int x, int y){
            return find(x) == find(y);
        }
};

#endif