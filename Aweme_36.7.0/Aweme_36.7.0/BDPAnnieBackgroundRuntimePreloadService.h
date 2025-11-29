@class NSCache, NSString, BDPThreadSafeDictionary;

@interface BDPAnnieBackgroundRuntimePreloadService : NSObject <NSCacheDelegate, BDPWarmBootMessage> {
    long long _preloadId;
    BDPThreadSafeDictionary *_groupNameMap;
}

@property (retain, nonatomic) NSCache *runtimeCache;
@property (copy) NSString *lastCacheKey;
@property (retain, nonatomic) BDPThreadSafeDictionary *keepAliveModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (void)receiveMemoryWarningNotification:(id)a0;
- (void)releaseALLRuntimeCache;
- (id)pr_createMixRuntime:(id)a0 withDelegate:(id)a1;
- (id)groupNameWithUniqueID:(id)a0;
- (void)preloadLynxBackgroundRuntime;
- (id)getLynxBackgroundRuntime;
- (BOOL)hasCachedLynxBackgroundRuntime;
- (id)attachToMixRuntime:(id)a0 withDelegate:(id)a1;
- (id)mixRuntimeWithUniqueId:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;
- (void)cache:(id)a0 willEvictObject:(id)a1;

@end
