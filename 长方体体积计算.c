#include<stdio.h>
float volume(float length,float width,float height);

int main()
{
	float length;
	float width;
	float height;
	float result;

    float volume(float length,float width,float height);

	printf("�����볤����ĳ���\n");
	scanf("%f",&length);

	printf("�����볤����Ŀ�\n");
    scanf("%f",&width);
	
	printf("�����볤����ĸߣ�\n");
    scanf("%f",&height);

	result=volume(length,width,height);

	printf("������������\n");
	
	printf("%.2f\n",result);
	
	return 0;
}

float volume(float length,float width,float height)
{
      float result =length*width*height;
      return result;
}
