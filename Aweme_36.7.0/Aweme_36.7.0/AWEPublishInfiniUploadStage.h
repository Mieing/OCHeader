@class ACCThreadSafeArray, NSString, AWEPublishFlowModel, NSObject;
@protocol OS_dispatch_queue;

@interface AWEPublishInfiniUploadStage : AWEPublishBaseUploadStage <AWEPublishRunnableStageObserver, AWEPublishContainerStageInfoProtocol> {
    AWEPublishFlowModel *_flowModel;
}

@property (retain, nonatomic) ACCThreadSafeArray *allStages;
@property (retain, nonatomic) ACCThreadSafeArray *executeStages;
@property (retain, nonatomic) ACCThreadSafeArray *finishedStages;
@property (retain, nonatomic) ACCThreadSafeArray *preUploadFinishedStages;
@property (nonatomic) long long maxConcurrentCount;
@property (nonatomic) long long videoUploadCount;
@property (nonatomic) long long imageUploadCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFlowModel:(id)a0;
- (id)flowModel;
- (void)uploadImages;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (void)stage:(id)a0 didChangeStatus:(long long)a1;
- (void)stage:(id)a0 didUpdateProgress:(double)a1;
- (id)stageArray;
- (void)uploadWithMerge:(id)a0 publishViewModel:(id)a1 stageIndex:(long long)a2;
- (void)uploadVideo:(id)a0 publishViewModel:(id)a1 stageIndex:(long long)a2;
- (void)runStages;
- (void)checkPreuploadFinished;
- (BOOL)canImageAlbumPreUploding;
- (void)runPreUploadFinishedStages;
- (BOOL)canRunPreUploadFinishedStages;
- (void)updateStageRetryCount;
- (void).cxx_destruct;
- (void)handleEvent:(id)a0;
- (id)init;
- (void)updateProgress;
- (void)run;
- (void)dealloc;

@end
