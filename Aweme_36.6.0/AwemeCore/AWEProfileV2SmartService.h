@class NSString, IESCombineFeatureConfig;

@interface AWEProfileV2SmartService : AWEBaseSmartServiceImpl <IESFCEventObserver, AWEProfileV2SmartService>

@property (nonatomic) double lastRunTime;
@property (nonatomic) BOOL hasAddObserver;
@property (retain, nonatomic) IESCombineFeatureConfig *updateCombineTypeConfig;
@property (copy) NSString *latestVisitedItemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)abTestConfig;

- (void)onTriggerEvent:(unsigned long long)a0 params:(id)a1;
- (void)onWillRunCompletion:(BOOL *)a0 input:(id)a1 output:(id)a2;
- (void)onDidRunCompletion:(BOOL *)a0 input:(id)a1 output:(id)a2;
- (BOOL)injectTruthForData:(id)a0 withInput:(id)a1 ext:(id)a2;
- (BOOL)shouldTriggerPredictForItemID:(id)a0;
- (void)setConfig:(id)a0;
- (void).cxx_destruct;

@end
