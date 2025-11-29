@class ACCThreadSafeMutableDictionary, NSString;

@interface AWEPublishStageNetScheduler : NSObject <AWEPublishRunnableStageObserver, AWEPublishStageNetSchedulerProtocol>

@property (retain, nonatomic) ACCThreadSafeMutableDictionary *stageNetDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)triggerEvent:(id)a0 flowId:(id)a1;
- (id)stageNet:(id)a0;
- (id)printInfo:(id)a0;
- (id)builder:(id)a0 flowModel:(id)a1 observers:(id)a2 publishTask:(id)a3;
- (id)stagesWithTypes:(id)a0 flowId:(id)a1;
- (id)printInfoWithStageNet:(id)a0;
- (id)printInfoWithStage:(id)a0;
- (void)printInfoWithStage:(id)a0 print:(id)a1 prefix:(id)a2;
- (id)stageWithType:(id)a0 flowId:(id)a1;
- (id)stageNets;
- (void)remove:(id)a0;
- (void)start:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
