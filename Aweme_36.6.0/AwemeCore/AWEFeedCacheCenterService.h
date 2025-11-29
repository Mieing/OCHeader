@class NSString, NSMutableDictionary, AWEListDataController;

@interface AWEFeedCacheCenterService : NSObject <AWEFeedCacheCenterProtocol>

@property (retain, nonatomic) NSMutableDictionary *trackers;
@property (retain, nonatomic) AWEListDataController *foryouFeedDataController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerTracker:(id)a0 scene:(id)a1;
- (void)updateWithTag:(id)a0;
- (void)loadCacheWithTag:(id)a0 itemIDs:(id)a1 cacheCompletion:(id /* block */)a2;
- (void)loadCacheWithTag:(id)a0 count:(long long)a1 cacheCompletion:(id /* block */)a2;
- (id)availableCacheWithTag:(id)a0 expectCount:(long long)a1;
- (void)clearCacheWithTag:(id)a0 Array:(id)a1;
- (void)clearCacheWithTag:(id)a0;
- (void)downloadWithTag:(id)a0 models:(id)a1 completion:(id /* block */)a2;
- (void)forceClearWithSceneArray:(id)a0;
- (id)getTrackerWithScene:(id)a0;
- (void)trackerGlobalNotiWithEvent:(id)a0 tag:(id)a1 param:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
