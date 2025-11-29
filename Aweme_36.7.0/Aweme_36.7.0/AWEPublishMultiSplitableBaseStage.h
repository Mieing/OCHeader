@class NSArray, NSString;

@interface AWEPublishMultiSplitableBaseStage : AWEPublishBaseStage <AWEPublishRunnableStageObserver>

@property (retain, nonatomic) NSArray *allStages;
@property (retain, nonatomic) NSArray *waitingStages;
@property (nonatomic) BOOL isMultiSplitSubItem;
@property (readonly, nonatomic) BOOL isMultiSplitSceneContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (void)stage:(id)a0 didChangeStatus:(long long)a1;
- (void)stage:(id)a0 didUpdateProgress:(double)a1;
- (void)setupMultiSplitFlowModelsIfNeed;
- (void)setupStages;
- (void)startNextStage;
- (void)runDataSync:(id /* block */)a0;
- (void)onAllStageFinished;
- (id)dequeueNextStage;
- (BOOL)isMultiSplitStartNet;
- (BOOL)needRunStageForSubTask:(id)a0;
- (id)provideTargetStage;
- (void)allStageDidFinished:(id)a0;
- (void)stageDidInit:(id)a0 withFlow:(id)a1;
- (void).cxx_destruct;
- (void)run;

@end
