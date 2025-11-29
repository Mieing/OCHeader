@class CdnUploadTaskInfo, NSString, AVAsset, NSURL, CdnProgressInfo, CMessageWrap, MMCommonCgiUploader;
@protocol VideoUploadTaskDelegate;

@interface VideoUploadTask : NSObject <MMCommonCgiUploaderDelegate>

@property (weak, nonatomic) id<VideoUploadTaskDelegate> delegate;
@property (retain, nonatomic) NSString *fileID;
@property (retain, nonatomic) NSString *aesKey;
@property (retain, nonatomic) NSString *thumbFileID;
@property (retain, nonatomic) NSString *thumbAeskey;
@property (nonatomic) unsigned long long uploadDataStartTimeMs;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) NSString *videoPath;
@property (nonatomic) BOOL isSlowMotion;
@property (retain, nonatomic) CdnProgressInfo *progressInfo;
@property (retain, nonatomic) MMCommonCgiUploader *cgiUploader;
@property (nonatomic) int taskState;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) BOOL isUseCgi;
@property (retain, nonatomic) NSString *fileKey;
@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (retain, nonatomic) CdnUploadTaskInfo *taskInfo;
@property (nonatomic) BOOL isRawTask;
@property (nonatomic) BOOL bCheckExistOnly;
@property (nonatomic) BOOL enableHitCheck;
@property (nonatomic) BOOL bJustUploadDataWithoutMD5Hit;
@property (nonatomic) int retryMaxCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMsgWrap:(id)a0;
- (void)setThumbFileID:(id)a0 Aesk:(id)a1;
- (void)startTask;
- (void)onUploadSuccess:(id)a0;
- (BOOL)isHitMD5;
- (void)restartTaskWithoutHitCheck;
- (void)setVideoAsset:(id)a0 url:(id)a1;
- (void)stopTask;
- (void)startForwardMsgTask;
- (BOOL)changeToState:(int)a0;
- (void)taskFailWithErrorType:(int)a0;
- (void)changeToHardLink:(id)a0;
- (void)onUploadSuccess:(id)a0 result:(id)a1;
- (void)onUploadFail:(id)a0 uploadId:(id)a1 retCode:(long long)a2;
- (void)onUploadProgress:(id)a0 uploadProgress:(double)a1;
- (void).cxx_destruct;

@end
