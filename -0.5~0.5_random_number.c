#include<stdio.h>
#include<stdlib.h>
#include<time.h>
float genFloatNum();
int main()
{
	float rnum[50];
	float sum;
	srand((unsigned)time(NULL));

	for (int i = 0; i < 50; i++)
	{
		rnum[i] = genFloatNum();
		printf("%d'th number: %lf\n", i+1, rnum[i]);
	}
}
float genFloatNum()
{
	float sum;
	while (1)
	{
		sum = rand() / (float)RAND_MAX * 1.0f;
		sum = sum + -0.5f;
		if (sum >= -0.5 && sum <= 0.5)
		{
			return sum;
		}
	}

}
