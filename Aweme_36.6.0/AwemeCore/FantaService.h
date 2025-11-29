@class NSString, NSMutableDictionary;
@protocol FantaServiceDelegate;

@interface FantaService : HTSService <FantaService>

@property (retain, nonatomic) id<FantaServiceDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *dataCollectors;
@property (retain, nonatomic) NSMutableDictionary *featureSequences;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } collectorLock;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } sequenceLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInitInMainThread;
- (void)launchServiceWithDelegate:(id)a0;
- (void)registerDataCollector:(id)a0;
- (void)unRegisterDataCollector:(id)a0;
- (id)dataCollectorWithType:(id)a0;
- (void)registerFeatureSequence:(id)a0;
- (void)unRegisterFeatureSequenceWithName:(id)a0;
- (id)featureSequenceWithName:(id)a0;
- (id)featureSequenceList;
- (void)registerFeature:(id)a0 dataCollector:(id)a1 producer:(id /* block */)a2 contextCreator:(id /* block */)a3;
- (void)registerFeature:(id)a0 dataCollectorList:(id)a1 producer:(id /* block */)a2 contextCreator:(id /* block */)a3;
- (void)registerBitFeature:(id)a0 dataCollectors:(id)a1 bitMaskProducer:(id /* block */)a2 contextCreator:(id /* block */)a3;
- (void)registerFeature:(id)a0 producer:(id /* block */)a1;
- (void)registerRequestPureFeature:(id)a0 producer:(id /* block */)a1;
- (void)registerFeatureProvider:(id)a0;
- (id)featureForKey:(id)a0 extraInfo:(id)a1;
- (id)featureGroupForKeys:(id)a0 extraInfo:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
