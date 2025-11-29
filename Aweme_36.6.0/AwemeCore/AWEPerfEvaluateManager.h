@class AWEPerfEvaluateTrigger, AWEPerfEvaluateCollectorManager, AWEPerfEvaluateResultManager, AWEPerfEvaluateApplogService, AWEPerfEvaluateStrategyManager, NSString;
@protocol AWEPerfEvaluateSmartService;

@interface AWEPerfEvaluateManager : NSObject <AWEPerfEvaluateTriggerHandler, AWEPerfEvaluateSmartServiceResultListener>

@property (readonly, nonatomic) AWEPerfEvaluateApplogService *applogService;
@property (readonly, nonatomic) AWEPerfEvaluateCollectorManager *collectorManager;
@property (readonly, nonatomic) AWEPerfEvaluateTrigger *trigger;
@property (readonly, nonatomic) id<AWEPerfEvaluateSmartService> smartService;
@property (readonly, nonatomic) AWEPerfEvaluateResultManager *resultManager;
@property (readonly, nonatomic) AWEPerfEvaluateStrategyManager *strategyManager;
@property (nonatomic) BOOL pitayaIsReady;
@property (nonatomic) BOOL shouldTriggerPredictAfterPitayaReady;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)abTestConfig;
+ (id)sharedInstance;

- (float)getInstanceScore;
- (float)getRecentScore;
- (float)getStableScore;
- (void)triggerPredict;
- (void)registerApplogObserver;
- (void)triggerBootCollect;
- (void)triggerCollectOnScene:(unsigned long long)a0;
- (void)smartService:(id)a0 didGenerateResult:(id)a1;
- (id)getApplogService;
- (id)getStrategyService;
- (id)collectorFeatures;
- (void).cxx_destruct;
- (void)registerObserver:(id)a0;
- (id)init;
- (void)unregisterObserver:(id)a0;

@end
