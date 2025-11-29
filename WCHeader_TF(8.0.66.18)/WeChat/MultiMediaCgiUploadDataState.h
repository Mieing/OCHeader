@class UniversalC2CDataUploader;

@interface MultiMediaCgiUploadDataState : MultiMediaUploadBaseState

@property (retain, nonatomic) UniversalC2CDataUploader *uploader;

- (long long)getUploaderScene;
- (void)start;
- (void)stop;
- (id)getStateName;
- (void).cxx_destruct;

@end
