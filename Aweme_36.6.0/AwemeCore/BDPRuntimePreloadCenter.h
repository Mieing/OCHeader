@class NSOperationQueue, NSMutableDictionary, NSRecursiveLock;

@interface BDPRuntimePreloadCenter : NSObject

@property BOOL enabled;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSMutableDictionary *preloadClassList;

+ (void)bootstrapLoad;
+ (void)setPreloadEnabled:(BOOL)a0;
+ (void)preloadRuntime:(long long)a0 caller:(id)a1 preloadId:(id)a2;
+ (void)releasePreloadRuntime:(long long)a0;
+ (void)preloadMixRuntime:(id)a0 preloadId:(id)a1;
+ (BOOL)enablePreloadRuntimeForMemoryLimitWithType:(long long)a0;
+ (void)registerPreloadObject:(Class)a0 type:(long long)a1;
+ (BOOL)isPreloadEnabled;
+ (void)releaseAllPreloadRuntime;
+ (void)preloadRuntime:(long long)a0 schema:(id)a1 caller:(id)a2 preloadId:(id)a3;
+ (id)getRuntime:(long long)a0 runtimeClass:(Class)a1 uniqueID:(id)a2;
+ (id)getRuntime:(long long)a0 runtimeClass:(Class)a1 uniqueID:(id)a2 schema:(id)a3 loader:(id)a4;
+ (void)forcePreloadRuntime:(long long)a0 caller:(id)a1 preloadId:(id)a2;
+ (id)getRuntimeForPredefine:(long long)a0 preloadId:(id)a1;
+ (void)onRunningThreadProtectorEnabledChanged:(id)a0;
+ (BOOL)disablePreloadRuntimeWithType:(long long)a0 caller:(id)a1;
+ (id)getRuntime:(long long)a0 runtimeClass:(Class)a1 uniqueID:(id)a2 schema:(id)a3;
+ (id)sharedCenter;

- (void)setPreloadEnabled:(BOOL)a0;
- (void)preloadRuntime:(long long)a0 caller:(id)a1 preloadId:(id)a2;
- (void)releasePreloadRuntime:(long long)a0;
- (void)reciveMemoryWarningNotification:(id)a0;
- (void)registerPreloadObject:(Class)a0 type:(long long)a1;
- (BOOL)isPreloadEnabled;
- (void)releaseAllPreloadRuntime;
- (void)preloadRuntime:(long long)a0 schema:(id)a1 caller:(id)a2 preloadId:(id)a3;
- (id)getRuntime:(long long)a0 runtimeClass:(Class)a1 uniqueID:(id)a2 schema:(id)a3 loader:(id)a4;
- (id)getRuntimeForPredefine:(long long)a0 preloadId:(id)a1;
- (void)preloadMixRuntime:(long long)a0 caller:(id)a1 preloadId:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;
- (void)dealloc;

@end
