@class IESLivePEFeatureStorage, IESLivePEFeatureApi, NSString, NSHashTable, NSObject, IESLivePEFeatureSet;
@protocol OS_dispatch_queue;

@interface IESLivePEFeatureManager : NSObject <IESLiveUserActions, IESLivePEFeatureProvider> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _observer_rwlock;
}

@property (readonly, nonatomic) IESLivePEFeatureStorage *featureStorage;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) IESLivePEFeatureSet *featureSet;
@property (retain, nonatomic) IESLivePEFeatureStorage *featureStorage;
@property (retain, nonatomic) IESLivePEFeatureApi *featureApi;
@property (nonatomic) BOOL isFetching;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)userDidLogin:(id)a0;
- (void)userDidLogout;
- (void)userDidUpdate:(id)a0;
- (void)batteryLevelDidChange:(id)a0;
- (void)batteryStateDidChange:(id)a0;
- (void)onReachabilityChanged:(id)a0;
- (void)fetchFeatureWithScene:(long long)a0 completion:(id /* block */)a1;
- (void)fetchFeatureWithScene:(long long)a0;
- (void)collectFeature:(id)a0 withIntValue:(long long)a1;
- (void)collectFeature:(id)a0;
- (id)loadFeaturePatterns;
- (void)inProcessQueue:(id /* block */)a0;
- (void)collectFeature:(id)a0 withBoolValue:(BOOL)a1;
- (void)collectFeature:(id)a0 withDoubleValue:(double)a1;
- (void)collectFeature:(id)a0 withStringValue:(id)a1;
- (void)detectedFeatureChanged:(id)a0;
- (id)numberValueWithKey:(id)a0;
- (id)stringValueWithKey:(id)a0;
- (id)dicWithFeatureSet;
- (void)fetchFeatureWithParams:(id)a0 tintTags:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addFeature:(id)a0;

@end
