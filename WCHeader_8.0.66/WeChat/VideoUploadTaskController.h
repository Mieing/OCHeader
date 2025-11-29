@class RawVideoUploadTask, VideoSendReportInfo, NSString, CMessageWrap, CompressVideoUploadTask, MMAsset, ThumbImageUploader;
@protocol VideoUploadTaskControllerDelegate;

@interface VideoUploadTaskController : NSObject <VideoUploadTaskDelegate>

@property (retain, nonatomic) MMAsset *mmAsset;
@property (retain, nonatomic) RawVideoUploadTask *rawUploadTask;
@property (retain, nonatomic) CompressVideoUploadTask *uploadTask;
@property (retain, nonatomic) ThumbImageUploader *thumbImageUploader;
@property (nonatomic) BOOL isUseCgiUpload;
@property (nonatomic) BOOL isRawDataUploadSucc;
@property (nonatomic) BOOL isCompressDataUploadSucc;
@property (nonatomic) unsigned long long taskStartTimeMs;
@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (nonatomic) BOOL bDisableHitCheck;
@property (nonatomic) BOOL isSendingMsg;
@property (retain, nonatomic) VideoSendReportInfo *reportInfo;
@property (nonatomic) BOOL bJustUploadDataWithoutMD5Hit;
@property (weak, nonatomic) id<VideoUploadTaskControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMsgWrap:(id)a0;
- (id)generateCompressUploadTask;
- (id)generateRawUploadTask;
- (int)tryStartOccupySendTask;
- (void)stopTask;
- (BOOL)isHitMD5;
- (void)sendOccupyMessage:(id)a0;
- (void)uploadThumbImage;
- (void)onSendOccupyMsgFail:(int)a0;
- (void)onSendOccupyMessageSuccuss:(id)a0;
- (void)tryStartDataUploadTask;
- (void)startDataUploadTask;
- (void)asyncUploadAsset;
- (void)caculateOriginSourceMD5WithUrl:(id)a0;
- (id)genUploadVideoRequest;
- (void)sendFinishMessageRequest;
- (void)makeUploadFail:(int)a0;
- (void)onExportAssetSuccess:(id)a0;
- (BOOL)isAllDataUploadFinish;
- (void)onUploadTaskSuccess:(id)a0;
- (void)onAllTaskUploadDataSucc;
- (void)onUploadTaskFail:(id)a0 errorType:(int)a1;
- (void)onUploadProgressUpdate;
- (void)onCompressProgressUpdate:(id)a0 progress:(double)a1;
- (void)updateUploadPercent;
- (id)getReportInfo;
- (void).cxx_destruct;

@end
