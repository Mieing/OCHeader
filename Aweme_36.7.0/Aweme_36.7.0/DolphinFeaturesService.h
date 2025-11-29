@class NSMutableArray, NSMutableDictionary, DolphinFeatureConfiguration;
@protocol DolphinFeaturesProducerDelegate;

@interface DolphinFeaturesService : NSObject

@property (retain, nonatomic) DolphinFeatureConfiguration *configuration;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rwLock;
@property (retain, nonatomic) NSMutableDictionary *singleFeatures;
@property (retain, nonatomic) NSMutableDictionary *groupFeatures;
@property (retain, nonatomic) NSMutableArray *groupFeaturesFlow;
@property (copy, nonatomic) id /* block */ autoClearBlock;
@property (weak, nonatomic) id<DolphinFeaturesProducerDelegate> producerDelegate;

+ (id)sharedInstance;

- (id)getStrFeature:(id)a0;
- (void)setupConfig:(id /* block */)a0;
- (void)onApplicationWillEnterForeground:(id)a0;
- (float)getNumicFeature:(id)a0 inGroup:(id)a1;
- (id)getStrFeature:(id)a0 inGroup:(id)a1;
- (BOOL)addStrFeature:(id)a0 value:(id)a1;
- (BOOL)addNumicFeature:(id)a0 value:(id)a1;
- (BOOL)addSeqicFeature:(id)a0 value:(id)a1;
- (BOOL)addDicticFeature:(id)a0 value:(id)a1;
- (BOOL)addStrFeature:(id)a0 value:(id)a1 groupBy:(id)a2;
- (BOOL)addNumicFeature:(id)a0 value:(id)a1 groupBy:(id)a2;
- (BOOL)addSeqicFeature:(id)a0 value:(id)a1 groupBy:(id)a2;
- (BOOL)addDicticFeature:(id)a0 value:(id)a1 groupBy:(id)a2;
- (void)clearToMaxCount;
- (void)resumeAutoClearTimer;
- (BOOL)addNumicFeature:(id)a0 value:(id)a1 groupBy:(id)a2 disposeBy:(id)a3;
- (BOOL)addStrFeature:(id)a0 value:(id)a1 groupBy:(id)a2 disposeBy:(id)a3;
- (BOOL)addSeqicFeature:(id)a0 value:(id)a1 groupBy:(id)a2 disposeBy:(id)a3;
- (BOOL)addDicticFeature:(id)a0 value:(id)a1 groupBy:(id)a2 disposeBy:(id)a3;
- (void)_addFeature:(id)a0 value:(id)a1 groupBy:(id)a2 disposeBy:(id)a3;
- (id)getDictFeature:(id)a0 inGroup:(id)a1;
- (id)getSeqFeature:(id)a0 inGroup:(id)a1;
- (id)findFeature:(id)a0 inGroup:(id)a1;
- (void)trackStatus:(id)a0 featureName:(id)a1;
- (void)pauseAutoClearTimer;
- (id)getDictFeature:(id)a0;
- (float)getNumicFeature:(id)a0;
- (id)getSeqFeature:(id)a0;
- (BOOL)deleteFeature:(id)a0;
- (BOOL)deleteFeaturesInGroup:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)onApplicationDidEnterBackground:(id)a0;

@end
