@class NSString, AWEPublishUploadStage, AWEPublishMergeStage, NSLock, AWEPublishFileWriteHandle;

@interface AWEPublishMergeUploadService : NSObject

@property (retain, nonatomic) NSString *draftFolder;
@property (nonatomic) BOOL isMerging;
@property (nonatomic) BOOL forbidWriteFile;
@property (retain, nonatomic) NSLock *writeHandleLock;
@property (retain, nonatomic) AWEPublishFileWriteHandle *writeHandle;
@property (weak, nonatomic) AWEPublishMergeStage *mergeStage;
@property (weak, nonatomic) AWEPublishUploadStage *uploadStage;

+ (BOOL)enableUploadWhileMergingWithFlowModel:(id)a0 publishModel:(id)a1;
+ (id)uploadWhileMergingConfig;
+ (id)uploadMode;
+ (unsigned long long)uploadSocketNumber;

- (id)initWithDraftFolder:(id)a0;
- (BOOL)shouldSkipNormalUpload;
- (void)mergeStageWillStartTranscode:(id)a0;
- (void)mergeStage:(id)a0 transData:(id)a1 offset:(long long)a2 isFinished:(BOOL)a3;
- (void)mergeStageDidFinishTranscode:(id)a0;
- (void)mergeStageDidCancelTranscode:(id)a0;
- (void)handleWriteFileException:(id)a0;
- (void)mergeDidFinishWithStage:(id)a0;
- (id)createReadHandle;
- (void)uploadStageDidCancel:(id)a0;
- (void).cxx_destruct;

@end
