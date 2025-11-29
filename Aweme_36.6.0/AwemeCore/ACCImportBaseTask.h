@class NSString, NSMutableArray, LMImageQualityTrackSceneEditInfo;

@interface ACCImportBaseTask : NSObject

@property (getter=isCancelled) BOOL cancelled;
@property (getter=isReady) BOOL ready;
@property (getter=isExecuting) BOOL executing;
@property double progress;
@property (getter=isFinished) BOOL finished;
@property (retain, nonatomic) NSString *importID;
@property (retain) NSMutableArray *progressHandlerList;
@property (nonatomic) BOOL ignoreDataConsumer;
@property (nonatomic) BOOL needRecallImmediatelyWhenTaskRun;
@property (nonatomic) BOOL highPriority;
@property (nonatomic) BOOL needSuperLock;
@property (nonatomic) long long runType;
@property (retain, nonatomic) NSString *UUIDString;
@property (retain, nonatomic) LMImageQualityTrackSceneEditInfo *imageQuality;

- (BOOL)enableCallbackResultImmediately;
- (void)updateProjectUUID:(id)a0;
- (long long)debugIndex;
- (id)debugFormat;
- (void)addTaskProgressHandler:(id /* block */)a0;
- (id)getImageKindOutPutInfo;
- (void).cxx_destruct;
- (void)callback;
- (id)init;
- (void)finish;
- (void)start;
- (void)main;
- (void)cancelTask;
- (void)updateProgress:(double)a0;

@end
