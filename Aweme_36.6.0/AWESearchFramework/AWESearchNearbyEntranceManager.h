@interface AWESearchNearbyEntranceManager : NSObject

+ (BOOL)enableSearchRefreshOptIn202406;
+ (double)groupBuyFeedConsumeTimeForSearchRefresh;
+ (long long)groupBuyFeedLoadMoreCountForSearchRefresh;
+ (BOOL)enableSearchRefreshOptWithEnterFrom:(id)a0;
+ (BOOL)enablePromptlyShowColdStartRealWord;
+ (BOOL)enableOptimizeFetchMethod;

@end
