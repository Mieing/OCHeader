@interface AWESearchHybridPageDefines : NSObject

+ (id)refreshWayWithRefreshReason:(long long)a0;
+ (void)updateRequestCount;
+ (long long)requestCountOnlyFeed;
+ (long long)fetchHybridRequestCount;
+ (void)addRequestCountOnlyFeed;
+ (id)refreshWayWithRefreshReason:(long long)a0 willDoFirstPullRefreshAfterQuitSearch:(BOOL)a1;
+ (void)resetRequestCount;

@end
