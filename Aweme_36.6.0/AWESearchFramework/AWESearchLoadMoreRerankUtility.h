@interface AWESearchLoadMoreRerankUtility : NSObject

+ (id)performanceConfig;
+ (BOOL)isHitLoadMoreRerank;
+ (BOOL)isHitRefreshRerank;
+ (long long)hitLoadMoreRerankCount;
+ (BOOL)enableAsyncFetchFeature;
+ (BOOL)isStorageExpired;
+ (BOOL)enableSafaThreadPerformance;
+ (double)fetchExpiredDuration;
+ (void)sendTrackEventKey:(id)a0 andInfo:(id)a1;
+ (BOOL)enableAsyncRunTask;
+ (void)fetchFeatures;
+ (BOOL)disableLoadmoreRerank;
+ (double)fetchUpdateDuration;
+ (BOOL)isExpired;

@end
