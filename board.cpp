#include "board.h"

void Board::setSize( int row, int cloumn)
{
 grid.resize(row);
 for (int i = 0; i<grid.size(); i++)
 {
 grid[i].resize(column);
 }
}

void BoarD::fillWith (char value)
{
    for (int i = 0; i<grid.size(); i++)
    {
        for (int j=0; j<grid[i].size(); j++)
        {
            grid [i][j] = value;
        }
    }   

}
