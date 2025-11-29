@class YYMemoryCache;

@interface IESECShopPreloadManager : NSObject

@property (retain, nonatomic) YYMemoryCache *preloadShopCache;

+ (id)sharedInstance;

- (void)reinitValidDurIfNeededWithQueryDict:(id)a0;
- (void)runPitayaTaskIfNeededWithInputData:(id)a0 queryDict:(id)a1;
- (id)viewModelWithQueryDict:(id)a0;
- (void)preloadWithViewModel:(id)a0 preloadConfiguration:(id)a1;
- (void)__doPrefetchWithViewModel:(id)a0 configuration:(id)a1;
- (id)__cachedKeyWithContext:(id)a0;
- (id)__cachedKeyWithQueryDict:(id)a0;
- (BOOL)__shouldRunPitayaTaskWithQueryDict:(id)a0;
- (void)preloadWithQuery:(id)a0 preloadConfiguration:(id)a1;
- (id)cachedDataWithContext:(id)a0;
- (void)removeCacheDataWithContext:(id)a0;
- (void)destory;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
