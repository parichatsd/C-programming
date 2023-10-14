#include <stdio.h>

int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int m1[m][n],m2[m][n],sum[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&m1[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&m2[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			sum[i][j] = m1[i][j] + m2[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
	
}
