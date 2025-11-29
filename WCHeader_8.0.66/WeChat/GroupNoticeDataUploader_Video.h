@interface GroupNoticeDataUploader_Video : GroupNoticeDataUploader

@property (nonatomic) BOOL compressVideoFail;
@property (copy, nonatomic) id /* block */ completeBlock;

- (void)startUploadData:(id /* block */)a0;
- (BOOL)readyToUploadData;
- (void)onFavVideoCompressFinish:(id)a0 isSuccess:(BOOL)a1;
- (void).cxx_destruct;

@end
