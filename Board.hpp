#include <string>
#include <unordered_map>
#include <utility> 
#include "Direction.hpp"

namespace ariel {
    
    class Board {
 
        private:
        std::unordered_map<unsigned int, std::unordered_map<unsigned int, char>> DynamicBoard;
        unsigned int MinCloumn,MinRow;
        unsigned int MaxClomn,MaxRow;
        public:
        Board() {}
        ~Board() {}
        void post(unsigned int row, unsigned int column, Direction direction, std::string message);
        std::string read(unsigned int row, unsigned int column, Direction direction, unsigned int length);
        void show();
    };
}