@class NSArray, NSString, NSMutableDictionary, FurionSmartServiceOutputData, IEFFeatureCenterConfig, NSSet;

@interface AWECloudScoreBiasEvaluateSmartService : AWEBaseSmartServiceImpl <IESFCEventObserver, AWECloudScoreBiasEvaluateSmartService> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSArray *triggerEventTypes;
@property (nonatomic) BOOL triggerByLoadMoreBack;
@property (nonatomic) BOOL triggerByFirstFrame;
@property (nonatomic) BOOL triggerByRequestSessionEnd;
@property (retain, nonatomic) NSArray *ruleBasedTriggerTypes;
@property (retain, nonatomic) NSArray *modelBasedTriggerTypes;
@property (nonatomic) BOOL runSync;
@property (retain, nonatomic) NSString *paramsName;
@property (nonatomic) long long maxFeedEvaluateGap;
@property (nonatomic) long long resultNum;
@property (retain, nonatomic) NSArray *taskNameList;
@property (retain, nonatomic) NSArray *ruleTaskNameConfigList;
@property (nonatomic) long long runCountVVGap;
@property (nonatomic) long long predictTargetType;
@property (nonatomic) long long ruleBasedFeedCount;
@property (nonatomic) double ruleBasedThreshold;
@property (retain, nonatomic) IEFFeatureCenterConfig *batchCommonFeaturesConfig;
@property (nonatomic) long long skipTimes;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) long long lastRunTime;
@property (retain, nonatomic) NSMutableDictionary *lastSessionIDDict;
@property (retain, nonatomic) FurionSmartServiceOutputData *lastMergeResult;
@property (retain, nonatomic) FurionSmartServiceOutputData *lastRuleBasedResult;
@property (nonatomic) long long currentVVGap;
@property (nonatomic) long long lastRunCountVVGap;
@property (retain, nonatomic) IEFFeatureCenterConfig *monitorRealConfig;
@property (retain, nonatomic) NSSet *monitorRealFeatureFilterSet;
@property (nonatomic) BOOL debug;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)abTestConfig;

- (void)onServiceInit;
- (void)onTriggerEvent:(unsigned long long)a0 params:(id)a1;
- (BOOL)injectTruthForData:(id)a0 withInput:(id)a1 ext:(id)a2;
- (void)setupObserver;
- (void)onLoadMoreResultBack:(id)a0;
- (BOOL)containEnterType:(id)a0;
- (void)runModelBasedEvaluateWithFeedList:(id)a0 enterType:(id)a1 currentModel:(id)a2;
- (void)runRuleBasedEvaluateWithEnterType:(id)a0;
- (void)p_runWithParams:(id)a0 async:(BOOL)a1;
- (id)safeNumberFromOjb:(id)a0;
- (double)safeGetDoubleValueFromInfo:(id)a0 withKey:(id)a1;
- (BOOL)ignoreRunWithParams:(id)a0;
- (id)getBatchInputDatasWithAwemeList:(id)a0 awemeNum:(long long)a1 resultNum:(long long)a2 currentModel:(id)a3;
- (id)getBatchCommonInput;
- (id)mergeBatchResults:(id)a0 groupNameList:(id)a1 resultNum:(long long)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setupService;
- (id)lastResult;

@end
