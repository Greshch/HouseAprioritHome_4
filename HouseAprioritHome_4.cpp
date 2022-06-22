// HouseAprioritHome_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    const char LEFT_ROOF = '/';
    const char RIGHT_ROOF = '\\';
    const char WALL = '|';
    const char CEIL = '=';
    const char FLOOR = '-';
    const int SPACES = 40;
    std::cout << "\t\t\t\tWelcome to your house\n";
    std::cout << "Type it's size(4 - 23) : ";
    int size = 0;
    std::cin >> size;
    //ROOF BEGIN
    int leftBotomRoof = 0;
    int rightBotomRoof = 0;
    for (int i = 0; i < size / 2; i++)
    {
        for (int j = 0; j < SPACES - i; j++)
        {
            std::cout << " ";
            leftBotomRoof = SPACES - i;
            rightBotomRoof = leftBotomRoof + 1;
        } std::cout << LEFT_ROOF;

        for (int k = 0; k < i * 2; k++)
        {
            std::cout << " ";
            rightBotomRoof++;
        } std::cout << RIGHT_ROOF;

        std::cout << "\n";
    }
    //ROOF END (Without bottom)

    //WALL and CEIL
    int frontonSize = size / 5;
    int bottom = size / 2 + size / 6;
    for (int i = 0; i <= bottom; i++)
    {
        for (int j = 0; j < SPACES * 2; j++)
        {
            if (i == 0 && (j >= leftBotomRoof && j <= rightBotomRoof))
            {
                std::cout << CEIL;
            }
            else if (i < frontonSize && (j == leftBotomRoof - 1 - i || j == rightBotomRoof + 1 + i))
            {
                if (j == leftBotomRoof - 1 - i) std::cout << LEFT_ROOF;
                else std::cout << RIGHT_ROOF;
            }
            else if (i != bottom && (j == leftBotomRoof || j == rightBotomRoof))
            {
                std::cout << WALL;
            }
            else if (i == bottom && (j >= leftBotomRoof && j <= rightBotomRoof))
            {
                std::cout << FLOOR;
            }
            else
            {
                std::cout << " ";
            }
        }std::cout << std::endl;
    }
    std::cout << std::endl;
}

