@class NSString, NSMutableDictionary, NSMutableArray;

@interface FantaFeatureManager : NSObject <FantaDataCollectorListener>

@property (retain, nonatomic) NSMutableDictionary *dataCollectorListenerMap;
@property (retain, nonatomic) NSMutableArray *sequenceFeatureListeners;
@property (retain, nonatomic) NSMutableArray *featureSources;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } collectorLock;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } listenerLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerBitFeature:(id)a0 dataCollectors:(id)a1 bitMaskProducer:(id /* block */)a2 contextCreator:(id /* block */)a3;
- (void)registerFeature:(id)a0 producer:(id /* block */)a1;
- (void)registerRequestPureFeature:(id)a0 producer:(id /* block */)a1;
- (void)registerFeatureProvider:(id)a0;
- (id)featureForKey:(id)a0 extraInfo:(id)a1;
- (id)featureGroupForKeys:(id)a0 extraInfo:(id)a1;
- (void)onDataCollector:(id)a0 collectData:(id)a1;
- (void)registerFeatureSource;
- (void)registerFeatureProducer:(id)a0 dataCollectors:(id)a1;
- (id)featureSourceForType:(id)a0;
- (void)handleSequenceFeatureWithProducer:(id)a0 dataCollector:(id)a1 collectData:(id)a2;
- (void)handleBitFeatureWithProducer:(id)a0 dataCollector:(id)a1 collectData:(id)a2;
- (void)registerFeature:(id)a0 dataCollectors:(id)a1 producer:(id /* block */)a2 contextCreator:(id /* block */)a3;
- (void)registerSequenceFeatureListener:(id)a0;
- (void)unRegisterSequenceFeatureListener:(id)a0;
- (id)featureForKey:(id)a0 extraInfo:(id)a1 source:(id)a2;
- (id)featureGroupForKeys:(id)a0 extraInfo:(id)a1 source:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
