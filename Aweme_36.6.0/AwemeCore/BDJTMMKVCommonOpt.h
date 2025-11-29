@class BDJTMMKVOptConfig, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface BDJTMMKVCommonOpt : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _cacheRWLock;
}

@property BOOL isRunning;
@property (nonatomic) BOOL addCacheInMMKVEnabled;
@property (nonatomic) BOOL collectInMMKVEnabled;
@property (retain, nonatomic) BDJTMMKVOptConfig *config;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *collectQueue;
@property (retain, nonatomic) NSMutableDictionary *mmkvInstanceDict;
@property (nonatomic) BOOL isCollecting;
@property (nonatomic) BOOL customEndPointEnabled;
@property (nonatomic) unsigned long long curStagePriority;
@property (retain, nonatomic) NSMutableDictionary *collectMMKVDict;
@property (retain, nonatomic) NSMutableArray *lowPriorityPreloadArray;

+ (id)shared;

- (id)getMMKVWithID:(id)a0 relativePath:(id)a1;
- (void)collectMMKVInitialize:(id)a0 relativePath:(id)a1 cost:(float)a2;
- (void)cacheMMKV:(id)a0 mmapID:(id)a1 relativePath:(id)a2;
- (void)removeCacheWithMMKV:(id)a0;
- (void)p_startMMKVOptimization;
- (BOOL)isMMKVOptimizationEnabled;
- (BOOL)p_isAppUpdated;
- (void)p_startPreloadMMKVsWithInfoArray:(id)a0;
- (void)p_startCollectMMKVInitializeInfo;
- (void)p_swizzleMMKVInitializeOnce;
- (BOOL)p_loadConfigFileFromLocal;
- (id)p_customMMKVMapKeyWithMmapID:(id)a0 relativePath:(id)a1;
- (void)p_preloadMMKVsWithInfoArray:(id)a0 lowPriorityDelayPreload:(BOOL)a1;
- (void)p_setupAutoCollectEndPoint;
- (void)p_collectWillPreloadMMKVID:(id)a0 relativePath:(id)a1 cost:(float)a2 isMainThread:(BOOL)a3;
- (void)p_stopCollect;
- (id)p_formatStoreDataWithID:(id)a0 collectStagePriority:(unsigned long long)a1 relativePath:(id)a2 isMainThread:(BOOL)a3 loadPriority:(long long)a4 initCost:(float)a5;
- (void)p_storeCollectMMKVInfoList:(id)a0;
- (void)p_startPreloadLowPriorityMMKVs;
- (void)enableDefaultMMKVOptimization;
- (void)enableMainThreadMemoryWarningOptimization;
- (void)startMMKVOptimizationIfEnabled;
- (BOOL)enableMMKVPreloadForNextLaunch:(id)a0;
- (void)enableCustomCollectFinish;
- (BOOL)customCollectFinisEnabled;
- (void)updateCustomCollectStage:(unsigned long long)a0;
- (void)customCollectFinish;
- (void).cxx_destruct;
- (id)init;

@end
