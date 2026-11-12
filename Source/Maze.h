#ifndef Maze_H
#define Maze_H

#include <vector>

class Maze {
    private:
            int rows;
            int cols;

            struct Cell {
                bool top_wall;
                bool bottom_wall;
                bool left_wall;
                bool right_wall;
            };

            std::vector<Cell> cells;
    public:
        Maze(int r, int c){
            rows = r;
            cols = c;

            int n = rows * cols;
            cells.resize(n);
        }

    
    
};




#endif