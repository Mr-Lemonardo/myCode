#include<iostream>
using namespace std;

float *vector_add(float *vectorA ,float *vectorB)
{
	int num = max(sizeof(vectorA)/sizeof(vectorA[0]),sizeof(vectorA)/sizeof(vectorA[0]));
	float *p = new float[num];
	for(int i=0;i<3;i++)
	{
		p[i] = vectorA[i] + vectorB[i];
	}

	return p;

}
int main()
{
	float vectorA[] = { 1 , 2 , 3};	
	float vectorB[] = { 1 , 2 , 3};	

	float* ret = vector_add(vectorA,vectorB);
	cout << ret[0] << " " << ret[1] << " " << ret[2]<<endl;
	return 0;
}
