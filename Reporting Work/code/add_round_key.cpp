#include <cstdint>

void AddRoundKey(uint8_t state[4][4], uint8_t roundKey[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            state[i][j] ^= roundKey[i][j];
        }
    }
}