#include<stdio.h>
float aver(float a[]);
int fals(float b[][4]);
int well(float c[][4]);
int main()
{
	float stu[5][4],a,first[4];
	int i,j,f,w;
	for(i=0;i<5;i++)
		for(j=0;j<4;j++)
			scanf("%f",&stu[i][j]);
	for(i=0;i<5;i++)
		first[i]=stu[i][0];
	a=aver(first);
	f=fals(stu);
	w=well(stu);
	printf("%.1f %d %d",a,f,w);
	return 0;
} 
float aver(float a[])
{
	float avg,sum;
	sum=a[0]+a[1]+a[2]+a[3]+a[4];
	avg=sum/5;
	return(avg); 
}
int fals(float b[][4])
{
	int k,count=0,i,j;
	for(i=0;i<5;i++)
	{
		k=0;
		for(j=0;j<4;j++)
		{
			if(b[i][j]<60)
				k++;
		}
		if(k>1)
			count++;
	}
	return(count);
}
int well(float c[][4])
{
	int k,avg,count=0,i,j;
	for(i=0;i<5;i++)
	{
		k=0;
		for(j=0;j<4;j++)
		{
			if(c[i][j]<=85)
				k=1;
		}
		avg=(c[i][0]+c[i][1]+c[i][2]+c[i][3])/4;
		if(k==0|avg>90)
			count++;
	}
	return(count);
}
