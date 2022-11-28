#include "path.h"

int main()
{
    int x;
    int y;
    int i;
    int j;
    int exit_counter;
    char    mapstr[50][50];

    mapstr[0][0] = '1';
    mapstr[0][1] = '1';
    mapstr[0][2] = '1';
    mapstr[0][3] = '1';
    mapstr[0][4] = '1';
    mapstr[0][5] = '1';
    mapstr[1][0] = '1';
    mapstr[1][1] = '0';
    mapstr[1][2] = '0';
    mapstr[1][3] = '1';
    mapstr[1][4] = '0';
    mapstr[1][5] = '1';
    mapstr[2][0] = '1';
    mapstr[2][1] = '0';
    mapstr[2][2] = 'P';
    mapstr[2][3] = '0';
    mapstr[2][4] = '1';
    mapstr[2][5] = '1';
    mapstr[3][0] = '1';
    mapstr[3][1] = '0';
    mapstr[3][2] = '1';
    mapstr[3][3] = '0';
    mapstr[3][4] = 'E';
    mapstr[3][5] = '1';
    mapstr[4][0] = '1';
    mapstr[4][1] = '1';
    mapstr[4][2] = '1';
    mapstr[4][3] = '1';
    mapstr[4][4] = '1';
    mapstr[4][5] = '1';

    y = 0;
    while (mapstr[y])
    {
        x = 0;
        while (mapstr[y][x])
        {
            if (mapstr[y][x] == 'P')
                break;
            x++;
        }
        y++;
    }
    exit_counter = 0;
    while (exit_counter != 1)
    {
        if (mapstr[y][x + 1] != 1)
        {
            if (mapstr[y][x + 1] == '0')
            {
                mapstr[y][x] = '0';
                mapstr[y][x + 1] = 'P';
                x += 1;
            }
            else if (mapstr[y][x] == 'E')
                exit_counter = 1;
        }
        else if (mapstr[y + 1][x] != 1)
        {
            if (mapstr[y + 1][x] == '0')
            {
                mapstr[y][x] = '0';
                mapstr[y + 1][x] = 'P';
                y += 1;
            }
            else if (mapstr[y][x] == 'E')
                exit_counter = 1;
        }
        else if (mapstr[y][x - 1] != 1)
        {
            if (mapstr[y][x - 1] == '0')
            {
                mapstr[y][x] = '0';
                mapstr[y][x - 1] = 'P';
                x -= 1;
            }
            else if (mapstr[y][x] == 'E')
                exit_counter = 1;
        }
        else if (mapstr[y - 1][x] != 1)
        {
            if (mapstr[y - 1][x] == '0')
            {
                mapstr[y][x] = '0';
                mapstr[y - 1][x] = 'P';
                y -= 1;
            }
            else if (mapstr[y][x] == 'E')
                exit_counter = 1;
        }
    i = 0;
    while (mapstr[i])
    {
        j = 0;
        while (mapstr[i][j])
        {
            printf("%c", mapstr[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    }
    
}