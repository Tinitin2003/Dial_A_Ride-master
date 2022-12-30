void input(int *n, int *N, int *c, int *R, Request *req, Car *car, int city[][10]){
	int i,j;
	FILE *fp;
	fp=freopen("input.txt","r",stdin);
	scanf("%d%d%d%d",&(*n),&(*N),&(*c),&(*R));
	for(i=0;i<*n;i++){
		for(j=0;j<*n;j++){
			scanf("%d",&city[i][j]);
		}
	}
	car=(Car*)malloc(sizeof(Car)*(*N));
	for(i=0;i<(*N);i++)
		scanf("%d",&car[i].src);
	req=(Request*)malloc(sizeof(Request)*(*R));
	for(i=0;i<(*R);i++)
		scanf("%d%d%d%d",&req[i].src,&req[i].dest,&req[i].srtTime,&req[i].endTime);

	fclose(fp);





}
