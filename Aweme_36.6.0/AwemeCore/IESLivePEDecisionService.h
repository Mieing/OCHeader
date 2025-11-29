@class IESLiveThreadSafeDictionary, NSString, NSDictionary, NSObject, IESLivePEFeatureSet;
@protocol OS_dispatch_queue, IESLiveMonitor;

@interface IESLivePEDecisionService : NSObject <IESLivePEDecisionObserver, IESLivePEDecisionProvider, IESLivePEFeatureSetDelegate, IESLivePEFeatureVisitor, IESLivePEFeatureCollector> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _strategy_rwlock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _observer_rwlock;
}

@property (retain, nonatomic) NSDictionary *strategyDic;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue;
@property (retain, nonatomic) IESLivePEFeatureSet *featureSet;
@property (retain, nonatomic) IESLiveThreadSafeDictionary *observerDic;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (nonatomic) double totalDecisionCostTime;
@property (nonatomic) long long decisionCount;
@property (nonatomic) double minDecisionCostTime;
@property (nonatomic) double maxDecisionCostTime;
@property (nonatomic) BOOL useCalculatorV2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupEnv;
- (void)decision:(id)a0 result:(id)a1;
- (id)strategyWithName:(id)a0;
- (void)addDolphinStrategy:(id)a0;
- (id)decisionWithScene:(id)a0 features:(id)a1;
- (void)addObserver:(id)a0 withScene:(id)a1 features:(id)a2;
- (void)addObserver:(id)a0 withScene:(id)a1;
- (void)removeObserver:(id)a0 withScene:(id)a1;
- (void)collectFeature:(id)a0 withIntValue:(long long)a1;
- (void)addConditionStrategy:(id)a0;
- (void)decisionWithScene:(id)a0 features:(id)a1 completion:(id /* block */)a2;
- (void)collectFeature:(id)a0;
- (void)inProcessQueue:(id /* block */)a0;
- (void)collectFeature:(id)a0 withBoolValue:(BOOL)a1;
- (void)collectFeature:(id)a0 withDoubleValue:(double)a1;
- (void)collectFeature:(id)a0 withStringValue:(id)a1;
- (void)detectedFeatureChanged:(id)a0;
- (id)numberValueWithKey:(id)a0;
- (id)stringValueWithKey:(id)a0;
- (id)dicWithFeatureSet;
- (void)fetchFeatureFromBackend:(id /* block */)a0;
- (void)fetchStrategyFromBackend:(id /* block */)a0;
- (void)decisionWith:(id)a0 featureSet:(id)a1 trigger:(id)a2 completion:(id /* block */)a3;
- (id)dicWithAllFeature;
- (void)createDecisionWorkflowWith:(id)a0 featureSet:(id)a1 trigger:(id)a2 observer:(id)a3;
- (void)trackDecisionResult:(id)a0;
- (void)trackDecisionCostTime;
- (void)addStrategy:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)addFeature:(id)a0;

@end
