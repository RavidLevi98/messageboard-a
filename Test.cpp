/**
 * 
 * TEST FILE IS ABOUTCHECK ALL FUNCTIONS
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: RAVID LEVI
 * 
 * Date: 2020-02
 */

#include "doctest.h"
#include "Board.hpp"
using namespace ariel;

#include <string>
using namespace std;

TEST_CASE("Positive Exsits Numbers") {
    Board board;
    CHECK_NOTHROW(board.post(100,200,Direction::Horizontal,"abcd"));
    CHECK(board.read(100,200,Direction::Horizontal,4)=="abcd");
    CHECK_NOTHROW(board.post(500,1000,Direction::Horizontal,"bcde"));
    CHECK(board.read(500,1000,Direction::Horizontal,4)=="bcde");
    CHECK_NOTHROW(board.post(753,756,Direction::Vertical,"ABCD"));
    CHECK(board.read(753,756,Direction::Vertical,4)=="ABCD");
    CHECK_NOTHROW(board.post(3452,32432,Direction::Vertical,"BCBC"));
    CHECK(board.read(3452,32432,Direction::Vertical,4)=="BCBC");
    CHECK_NOTHROW(board.post(44325435,44325435,Direction::Vertical,"RAVRAVO"));
    CHECK(board.read(44325435,44325435,Direction::Vertical,7)=="RAVRAVO");
    CHECK_NOTHROW(board.post(3457342543,3457342543,Direction::Horizontal,"intelligent"));
    CHECK(board.read(3457342543,3457342543,Direction::Horizontal,11)=="intelligent");
    CHECK_NOTHROW(board.post(54,3457342543,Direction::Vertical,"conversation"));
    CHECK(board.read(54,3457342543,Direction::Vertical,12)=="conversation");
    CHECK_NOTHROW(board.post(3457342543,60,Direction::Horizontal,"Quinquedentated"));
    CHECK(board.read(3457342543,60,Direction::Horizontal,15)=="Quinquedentated");
    CHECK_NOTHROW(board.post(843,0,Direction::Horizontal,"Gastrohysterotomy"));
    CHECK(board.read(843,0,Direction::Horizontal,17)=="Gastrohysterotomy");
    CHECK_NOTHROW(board.post(843,0,Direction::Horizontal,"Ethnomethodology"));
    CHECK(board.read(843,0,Direction::Horizontal,16)=="Ethnomethodology");
    CHECK_NOTHROW(board.post(0,0,Direction::Horizontal,"Palaeoanthropology"));
    CHECK(board.read(0,0,Direction::Horizontal,18)=="Palaeoanthropology");
    CHECK_NOTHROW(board.post(0,0,Direction::Vertical,"Neopharmaphobia"));
    CHECK(board.read(0,0,Direction::Vertical,15)=="Neopharmaphobia");
    CHECK_NOTHROW(board.post(1,0,Direction::Vertical,"Obsequiousness"));
    CHECK(board.read(1,0,Direction::Vertical,14)=="Obsequiousness");
    
    /* Add more checks here */
}

TEST_CASE("None Exsits Numbers") {
    Board board2;
    CHECK(board2.read(500,700,Direction::Horizontal,4)=="____");
}

