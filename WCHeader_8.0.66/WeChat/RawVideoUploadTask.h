@class NSString;

@interface RawVideoUploadTask : VideoUploadTask

@property (nonatomic) BOOL bStop;
@property (retain, nonatomic) NSString *downloadFileKey;

- (id)initWithMsgWrap:(id)a0;
- (void)startTask;
- (void)stopTask;
- (void)processAssetTask;
- (void)exportRawVideo;
- (void)exportSlowMotionWithCompletionHandler:(id /* block */)a0;
- (void)exportNormalVideoWithCompletionHandler:(id /* block */)a0;
- (id)generateDownloadArgsWrap;
- (void)downloadRawVideo;
- (void)tryUploadRawData;
- (void)uploadVideoDataToCdn;
- (void)onCheckExistOnlyFail;
- (void)onUploadFail:(id)a0;
- (void)onUploadSuccess:(id)a0;
- (void)tryOverwriteMsgContent:(id)a0;
- (void)onDownloadTaskSuccess;
- (void).cxx_destruct;

@end
