void sortRequest(Request *req,int left,int right){
        if(left>=right){
            return;
        }
        int pivot=req[right].srtTime;
        int partition_index=left;
        for(int i=left;i<right;i++){
            if(req[i].srtTime<pivot){
                int temp=req[i].srtTime;
                req[i].srtTime=req[partition_index].srtTime;
                req[partition_index].srtTime=temp;
                partition_index++;
            }
        }
        req[right].srtTime=req[partition_index].srtTime;
        req[partition_index].srtTime=pivot;
        sortRequest(req,left,partition_index-1);
        sortRequest(req,partition_index+1,right);
}
