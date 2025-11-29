@class NSMutableDictionary, NSMutableArray, NSRecursiveLock;

@interface WCAdWebStorePreloadMgr : MMObject

@property (retain, nonatomic) NSRecursiveLock *preloadLock;
@property (retain, nonatomic) NSMutableArray *timelineAdInfoList;
@property (retain, nonatomic) NSMutableDictionary *preloadingWebStoreDict;
@property (retain, nonatomic) NSMutableDictionary *preloadedWebStoreDict;
@property (retain, nonatomic) NSMutableDictionary *weAppPreloadWebStoreDict;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)onApplicationDidReceiveMemoryWarning:(id)a0;
- (BOOL)preloadWebStoreWithUrl:(id)a0 skAdItem:(id)a1;
- (void)updatePreloadCacheWithKey:(id)a0 productVC:(id)a1 resule:(BOOL)a2 error:(id)a3;
- (void)removeWebStoreWithUrl:(id)a0 skAdItem:(id)a1;
- (id)fetchWebStoreWithUrl:(id)a0 skAdItem:(id)a1;
- (void)preloadWebStoreForCanvasWithAdInfo:(id)a0;
- (void)removeWebStoreForCanvasWithAdInfo:(id)a0;
- (void)preloadWebStoreForTimelineWithAdInfo:(id)a0;
- (void)removeWebStoreForTimelineWithAdInfo:(id)a0;
- (void)preloadWebStoresForTimeline;
- (void)cleanUpWebStoreCache;
- (void)preloadWebStoreForWeAppWithUrl:(id)a0 skAdItem:(id)a1 appId:(id)a2;
- (void)removeWebStoreForWeAppWithUrl:(id)a0 skAdItem:(id)a1;
- (void)removeWebStoreForWeAppWithAppId:(id)a0;
- (id)generateKeyWithUrl:(id)a0 skAdItem:(id)a1;
- (void).cxx_destruct;

@end
