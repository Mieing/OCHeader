@class NSObject, NSMutableDictionary, HMInstance, NSMutableArray, HMDOTConfig;
@protocol OS_dispatch_queue;

@interface HMDOTManager2 : HeimdallrModule

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *spanIOQueue;
@property (retain) HMDOTConfig *enternalConfig;
@property BOOL hasStopped;
@property (retain, nonatomic) NSMutableArray *cachedTraces;
@property (retain, nonatomic) HMInstance *traceInstance;
@property (retain, nonatomic) NSMutableDictionary *cachedUnHitTraces;

+ (id)sharedInstance;

- (void)updateConfig:(id)a0;
- (BOOL)needSyncStart;
- (void)prepareForDefaultStart;
- (void)startSpan:(id)a0;
- (void)startTrace:(id)a0;
- (void)cleanupCachedTraces;
- (void)insertAllCachedTracesWhenValid;
- (void)cleanupPlaceholderForTrace:(id)a0;
- (void)checkCacheUnHitSpansCount;
- (BOOL)insertCachedTrace:(id)a0 unhitStorage:(BOOL)a1;
- (void)finishTrace:(id)a0;
- (void)finishSpan:(id)a0;
- (void)cleanupTrace:(id)a0;
- (void)enableDebugUpload;
- (void)uploadCache;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)init;
- (void)stop;
- (void)start;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
