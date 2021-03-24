#include "Board.hpp"
#include <utility>
#include <string>
#include <iostream>
#include <ctype.h>
namespace ariel
{
    void Board::post(unsigned int row, unsigned int column, Direction direction, std::string message)
    {
    if(row<MinRow){MinRow=row;}
    if(column<MinCloumn && row<=MinRow){
    MinRow = row;
    MinCloumn = column;
    }
    if(MaxRow<row)
    {
        MaxRow = row;
    }
    if(MaxRow<=row && MaxClomn<column)
    {
        MaxRow=row;
        MaxClomn=column;
    }
             
            for (size_t i = 0; i < message.size(); i++)
            {
                if(direction==Direction::Horizontal)
                {
                    DynamicBoard[row][column+i]=message.at(i);
                }
                else if(direction==Direction::Vertical)
                {
                     DynamicBoard[row+i][column]=message.at(i);
                }
            }
            
        

     
    }

    std::string Board::read(unsigned int row, unsigned int column, Direction direction, unsigned int length)
    {
        std::string read = "";
       for (size_t i = 0; i < length; i++)
            {
                if(direction==Direction::Horizontal)
                {
                    char cell = DynamicBoard[row][column+i];
                        read+=cell;
                   
                }
                else if(direction==Direction::Vertical)
                {
                     char cell = DynamicBoard[row+i][column];
                   read+=cell;
                }
            }

        return read;
    }
       void Board::show() {
for (const auto& p : DynamicBoard)
{
    for (const auto& q : p.second) {
     std::cout << q.second;
}
     std::cout << std::endl;

}

    
        
    }
}
