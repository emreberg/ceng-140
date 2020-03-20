#include <stdio.h>
int insize;
int sqsize;
int inmatrix[100][100];
int outmatrix[100][100];
int main () {
	int x,y,i,j;
	int findmax(int array[100][100],int,int,int,int);
	scanf("%d %d",&insize,&sqsize);
	/*printf("%d %d",insize,sqsize);*/

	for(x=0;x<insize;x++) {
		for(y=0;y<insize;y++) {
			scanf("%d",&inmatrix[x][y]);
			/*printf("%d",inmatrix[x][y]);*/
		}
	}
	for (j=0;j<(insize-sqsize+1);j++) {
                for(i=0;i<(insize-sqsize+1);i++) {
			outmatrix[j][i]=findmax(inmatrix,sqsize,insize,j,i);
		}
	}
	for (j=0;j<(insize-sqsize+1);j++) {
                for(i=0;i<(insize-sqsize+1);i++) {
                        printf("%d ",outmatrix[j][i]);
		}
		printf("\n");
	}


	return 0;
}
int findmax(int array[100][100],int sqsize,int insize,int j,int i) {
	int k,m,max=0;
		for(k=0;k<sqsize;k++) {
			for (m=0;m<sqsize;m++) {
				if ((array[j+k][i+m])>max) {
					max = array[j+k][i+m];
				}
			}
		}
	return max;	
}

