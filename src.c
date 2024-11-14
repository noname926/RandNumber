#include <stdlib.h>
#include <time.h>

// init
void m_inirand()
{
	srand(time(0));
}

// rand
int m_rand(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}