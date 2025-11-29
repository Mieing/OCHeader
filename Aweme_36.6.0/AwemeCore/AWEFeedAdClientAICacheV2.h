@class NSDictionary, NSString, NSRecursiveLock;

@interface AWEFeedAdClientAICacheV2 : HTSService <AWEFeedAdClientAICacheV2Protocol>

@property (retain, nonatomic) NSDictionary *pool;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) long long totalCost;
@property (nonatomic) long long totalCount;
@property (nonatomic) long long totalCostForMainFeedScene;
@property (nonatomic) long long totalCountForMainFeedScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)saveFeedWithScene:(id)a0 feed:(id)a1 src:(id)a2 cost:(unsigned long long)a3;
- (id)feedWithScene:(id)a0 itemId:(id)a1;
- (id)fetchItemId:(id)a0;
- (BOOL)containsFeedWithScene:(id)a0 itemId:(id)a1;
- (void)removeAll:(id)a0;
- (void)removeThroughOldestSaveTime:(id)a0;
- (void)increaseTotalCountWithScene:(id)a0 cost:(unsigned long long)a1;
- (void)updateCacheInfoWithScene:(id)a0 itemId:(id)a1 src:(id)a2 updateSaveTime:(BOOL)a3;
- (void)reduceTotalCountWithScene:(id)a0 cost:(unsigned long long)a1;
- (void)removeFeedWithScene:(id)a0 itemId:(id)a1;
- (void)reduceAllCountWithScene:(id)a0;
- (id)allFeeds:(id)a0;
- (long long)cacheTotalCount:(id)a0;
- (long long)cacheTotalCountForAllScene;
- (void).cxx_destruct;
- (id)init;

@end
