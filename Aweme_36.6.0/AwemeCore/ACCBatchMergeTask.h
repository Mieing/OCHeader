@class NSString, AWEVideoPublishViewModel;

@interface ACCBatchMergeTask : ACCImportBaseTask <AWEPublishTaskContextProtocol>

@property (readonly, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) unsigned long long entryType;
@property (readonly, nonatomic) double progress;
@property (readonly, nonatomic) long long currentStage;
@property (readonly, nonatomic, getter=isRepublish) BOOL republish;
@property (readonly, nonatomic) double publishStartTime;
@property (readonly) long long resumeCount;
@property (readonly) BOOL networkReachable;
@property (readonly, nonatomic) BOOL supportsRetry;
@property (readonly, nonatomic, getter=isReady) BOOL ready;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly, nonatomic) unsigned long long flowType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)runStage:(id)a0;
- (void).cxx_destruct;

@end
