@class NSRecursiveLock, NSMutableArray, NSMutableDictionary;

@interface BCAABundleLoader : NSObject {
    struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; } *_bundlelock;
    NSMutableArray *_bundleListeners;
    NSMutableDictionary *_loadedBundleDic;
    BOOL _enableBundleLoad;
    NSRecursiveLock *_bundleContextLock;
    NSMutableDictionary *_bundleContextDict;
}

+ (void)removeBundleListener:(id)a0;
+ (BOOL)activateBundle:(struct __CFBundle { } *)a0 bundleName:(id)a1 fromBundle:(id)a2 enterTag:(id)a3 startTime:(double)a4;
+ (void *)getGetFunctionPointerForBundle:(id)a0 funcName:(id)a1;
+ (BOOL)preLoadBundle:(id)a0 fromBundle:(id)a1;
+ (BOOL)preLoadBundleOfService:(id)a0 fromBundle:(id)a1;
+ (BOOL)loadName:(id)a0 fromBundle:(id)a1 enterTag:(id)a2;
+ (BOOL)isBundleNeedBroadcastPreloadEnter:(id)a0;
+ (void)broadcastPreLoadBundleDidEntered:(id)a0 fromBundle:(id)a1 enterTag:(id)a2;
+ (id)getBundleNameOfService:(id)a0;
+ (void)broadcastBundleLoadedByService:(id)a0 serviceName:(id)a1 methodName:(id)a2;
+ (void)addBundleListener:(id)a0;
+ (id)sharedLoader;

- (void)removeBundleListener:(id)a0;
- (BOOL)activateBundle:(struct __CFBundle { } *)a0 bundleName:(id)a1 fromBundle:(id)a2 enterTag:(id)a3 startTime:(double)a4;
- (void *)getGetFunctionPointerForBundle:(id)a0 funcName:(id)a1;
- (struct __CFBundle { } *)bundleRefWithName:(id)a0;
- (BOOL)isBundleInLoadedList:(id)a0;
- (void)broadcastbundleWillBeLoaded:(id)a0 fromBundle:(id)a1 enterTag:(id)a2;
- (void)broadcastBundleFailed:(id)a0 fromBundle:(id)a1 enterTag:(id)a2 error:(id)a3;
- (void)addBundleToLoadedList:(id)a0 bundleRef:(struct __CFBundle { } *)a1 fromBundle:(id)a2 enterTag:(id)a3 cost:(double)a4;
- (void)broadcastBundleLoaded:(id)a0 fromBundle:(id)a1 enterTag:(id)a2 cost:(double)a3;
- (BOOL)isBundleInActiveList:(id)a0;
- (struct __CFBundle { } *)getLoadedBundleRef:(id)a0;
- (void)addBundleToActiveList:(id)a0 fromBundle:(id)a1 enterTag:(id)a2 cost:(double)a3;
- (void)setBundleHasBroadcastPreloadEnter:(id)a0 value:(BOOL)a1;
- (BOOL)isBundlePreLoaded:(id)a0;
- (id)getBundleContextByName:(id)a0;
- (BOOL)loadName:(id)a0 fromBundle:(id)a1 enterTag:(id)a2;
- (BOOL)isBundleNeedBroadcastPreloadEnter:(id)a0;
- (void)broadcastPreLoadBundleDidEntered:(id)a0 fromBundle:(id)a1 enterTag:(id)a2;
- (void)broadcastBundleLoadedByService:(id)a0 serviceName:(id)a1 methodName:(id)a2;
- (void)addBundleListener:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
