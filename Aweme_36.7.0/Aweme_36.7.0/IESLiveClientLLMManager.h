@class IESLiveClientLLMMonitor, NSString, IESLiveGCDTimer, IESLiveClientLLMEngineManager;
@protocol IESLivePerfSampler, IESLiveClientLLMInjector;

@interface IESLiveClientLLMManager : NSObject <IESLiveClientLLMService>

@property (retain, nonatomic) IESLiveClientLLMEngineManager *engineManager;
@property (retain, nonatomic) id<IESLiveClientLLMInjector> clientLLMService;
@property (weak, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (nonatomic) double lastInferenceTimestamp;
@property (nonatomic) double inferenceIntervalThreshold;
@property (retain, nonatomic) IESLiveClientLLMMonitor *monitor;
@property (retain, nonatomic) IESLiveGCDTimer *perfCheckTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)cancelRequestsWithSceneModel:(id)a0 group:(id)a1;
- (void)preloadResourceWithSceneModelName:(id)a0;
- (void)setupPerfSample:(id)a0;
- (void)setupLLMEnvironment;
- (void)releaseLLMEnvironment;
- (void)handleDebugRequest:(id)a0;
- (BOOL)checkInferenceFrequency;
- (BOOL)checkPerfPermission;
- (id)memoryThresholds;
- (id)selectedMemoryThresholdKeyWithTotalMemory:(double)a0 memoryThresholds:(id)a1;
- (void)startPerfCheckTimer;
- (void)stopPerfCheckTimer;
- (void)checkPerfPermissionTimer;
- (void).cxx_destruct;
- (id)init;
- (void)cancelRequest:(id)a0;
- (void)executeRequest:(id)a0;
- (BOOL)validateRequest:(id)a0;

@end
