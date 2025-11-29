@class TSPKContext, NSMutableDictionary, NSString;
@protocol TSPKLock;

@interface TSPKDetectManager : NSObject <TSPKDetectPlanDelegate, TSPKDetectTaskProtocol> {
    id<TSPKLock> _lock;
}

@property (retain, nonatomic) NSMutableDictionary *taskPool;
@property (retain, nonatomic) NSMutableDictionary *allPlans;
@property (retain, nonatomic) NSMutableDictionary *detectorConfigs;
@property (retain, nonatomic) NSMutableDictionary *rules;
@property (retain, nonatomic) TSPKContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createPlanModelsWithPipelineType:(id)a0 detectType:(id)a1;
+ (id)ruleTypeToTaskType;
+ (id)createPlanModelsWithPipeline:(id)a0;
+ (id)createPlanModelsWithAspectInfo:(id)a0;
+ (id)sharedManager;

- (void)handleDetectEvent:(id)a0;
- (BOOL)shouldHandleDetectEvent:(id)a0;
- (void)addDetetTaskToPool:(id)a0;
- (void)dispatchWithDetectEvent:(id)a0 ignoreContexts:(id)a1 isIgnore:(BOOL)a2;
- (void)removeTaskFromPool:(id)a0;
- (void)registerDetectPlan:(id)a0;
- (void)detectTaskDidFinsh:(id)a0;
- (void)unregisterAllDetectPlans;
- (void)setupPlan:(id)a0;
- (void)generateSceneRuleModelList;
- (void).cxx_destruct;
- (id)init;
- (void)setupRules;

@end
