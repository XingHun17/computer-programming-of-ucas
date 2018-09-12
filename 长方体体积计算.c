#include<stdio.h>
float volume(float length,float width,float height);

int main()
{
	float length;
	float width;
	float height;
	float result;

    float volume(float length,float width,float height);

	printf("请输入长方体的长：\n");
	scanf("%f",&length);

	printf("请输入长方体的宽：\n");
    scanf("%f",&width);
	
	printf("请输入长方体的高：\n");
    scanf("%f",&height);

	result=volume(length,width,height);

	printf("长方体的体积：\n");
	
	printf("%.2f\n",result);
	
	return 0;
}

float volume(float length,float width,float height)
{
      float result =length*width*height;
      return result;
}
