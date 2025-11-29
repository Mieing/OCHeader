@class ImageUploadTaskProcessor, NSString, CdnUploadTaskInfo, CMessageWrap, MMCommonUploadResult, MMAsset, UploadMsgImgResponse;
@protocol ImageUploadTaskControllerDelegate;

@interface ImageUploadTaskController : NSObject <IMsgExt, ImageUploadTaskProcessorDelegate>

@property (retain, nonatomic) MMAsset *asset;
@property (retain, nonatomic) ImageUploadTaskProcessor *uploadTask;
@property (nonatomic) BOOL hadCaculateOriginSourceMD5;
@property (nonatomic) int failReason;
@property (nonatomic) int errorCode;
@property (nonatomic) int cgiRetryCount;
@property (retain, nonatomic) NSString *taskID;
@property (retain, nonatomic) NSString *taskKey;
@property (retain, nonatomic) NSString *chatName;
@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (nonatomic) BOOL isJustUploadDataWithoutMD5Hit;
@property (nonatomic) BOOL isCheckExistOnly;
@property (nonatomic) BOOL hadTryCalcPHash;
@property (nonatomic) BOOL isDisableHitCheck;
@property (nonatomic) BOOL isDisableWxam;
@property (nonatomic) BOOL isWxamIllegal;
@property (nonatomic) BOOL isHeicIllegal;
@property (nonatomic) BOOL isUseCgi;
@property (nonatomic) BOOL isTaskStopped;
@property (nonatomic) BOOL isUploadingImageData;
@property (nonatomic) BOOL isSendingImageMsg;
@property (retain, nonatomic) MMCommonUploadResult *result;
@property (retain, nonatomic) CdnUploadTaskInfo *taskInfo;
@property (retain, nonatomic) UploadMsgImgResponse *response;
@property (weak, nonatomic) id<ImageUploadTaskControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMsgWrap:(id)a0 delegate:(id)a1;
- (id)desc;
- (BOOL)isTaskCanStart;
- (void)start;
- (void)stop;
- (void)sendImageMsg;
- (BOOL)onImageSendCGIConnectFail:(id)a0;
- (void)onImageMsgSendFail:(id)a0;
- (void)onTaskFail;
- (void)onImageMsgSendSucc:(id)a0;
- (void)updateTaskKey;
- (id)getMD5;
- (BOOL)isEnableWxamUpload;
- (BOOL)tryCaculateOriginSourceMD5;
- (void)onImageUploadTaskFail:(id)a0 failReason:(int)a1 errorCode:(int)a2;
- (void)onImageUploadTaskSucc:(id)a0;
- (void)onImageUploadTaskModMsg:(id)a0;
- (void)onImageUploadTask:(id)a0 modifyMessageWithBitSet:(unsigned int)a1;
- (void)OnWillRevokeMsg:(id)a0 revokeContext:(id)a1;
- (void).cxx_destruct;

@end
