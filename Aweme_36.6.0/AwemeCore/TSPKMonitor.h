@class NSMutableArray;
@protocol TSPKLock;

@interface TSPKMonitor : NSObject

@property (retain, nonatomic) NSMutableArray *pipelines;
@property (retain, nonatomic) id<TSPKLock> pipelineLock;
@property (nonatomic) BOOL canMonitorHook;
@property (retain) NSMutableArray *enabledPipelineList;
@property (retain) NSMutableArray *disabledPipelineList;
@property unsigned long long apiTotalNum;
@property (retain) NSMutableArray *hasPerformedHookPipelines;
@property (nonatomic) unsigned long long loadTaskStatus;

+ (void)setMonitorConfig:(id)a0;
+ (void)setupCache;
+ (void)markAudioStartWithCaseId:(id)a0 description:(id)a1;
+ (void)markAudioStopWithCaseId:(id)a0 description:(id)a1;
+ (void)registerSubsciber:(id)a0 onEventType:(unsigned long long)a1;
+ (void)registerDetectPipeline:(id)a0;
+ (void)setContextBlock:(id /* block */)a0 forApiType:(id)a1;
+ (void)markCameraStartWithCaseId:(id)a0 description:(id)a1;
+ (void)markCameraStopWithCaseId:(id)a0 description:(id)a1;
+ (void)saveCustomCallBacktraceWithPipelineType:(id)a0;
+ (void)recordPipelinesHasHooked:(id)a0;
+ (BOOL)canMonitorHook;
+ (void)unregisterSubsciber:(id)a0 onEventType:(unsigned long long)a1;
+ (id)__pipelineNameArray;
+ (id)enabledPipelineTypes;
+ (id)enabledPipelineList;
+ (id)disabledPipelineList;
+ (id)pipelinesHasHooked;
+ (void)startWithBuilder:(id)a0;
+ (void)setupDefaultSubscribers;
+ (void)setCanMonitorHook:(BOOL)a0;
+ (unsigned long long)apiTotalNum;
+ (void)start;
+ (id)sharedMonitor;

- (void)preloadTask;
- (void)registerDetectPipeline:(id)a0;
- (void)recordPipelinesHasHooked:(id)a0;
- (void)recordEnabledPipeline:(id)a0;
- (void)recordDisbaledPipeline:(id)a0;
- (id)enabledPipelineTypes;
- (id)pipelinesHasHooked;
- (void)startWithBuilder:(id)a0;
- (void)setupPipelines;
- (void)setupPipeline:(id)a0;
- (void)delayLoadTask;
- (void)recordAPITotalNum;
- (void).cxx_destruct;
- (id)init;

@end
