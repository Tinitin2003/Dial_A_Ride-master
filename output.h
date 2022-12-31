void output(int *n, int *N, int *c, int *R, Request *req, Car *car, int city[][10]){
		int i,j;
		printf("%d %d %d %d\n",*n,*N,*c,*R);
					for(i=0;i<(*n);i++){
						for(j=0;j<(*n);j++){
							printf("%d ",city[i][j]);
						}
						printf("\n");
					}
					for(i=0;i<(*N);i++){
						printf("%d ",car[i].src);
					}
					printf("\n");
					for(i=0;i<(*R);i++){
						printf("%d %d %d %d\n",req[i].src,req[i].dest,req[i].srtTime,req[i].endTime);
}
}
