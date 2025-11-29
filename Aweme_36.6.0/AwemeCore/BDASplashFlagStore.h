@interface BDASplashFlagStore : NSObject

+ (long long)todayExpectedShowCount;
+ (BOOL)isFirstLaunchExist;
+ (void)consumeFirstLaunch;
+ (void)setTodayExpectedShowCount;
+ (void)saveRecentFetchAdInfoTime;
+ (BOOL)isDisplayFrequencyFit;
+ (BOOL)isEnterBackgroundFrequencyFit;
+ (id)findCurrentPeriodTime;
+ (void)setCountsForKey:(id)a0;
+ (long long)getCountsForKey:(id)a0;
+ (long long)todayRemainShowCount;
+ (double)recentFetchAdInfoTime;
+ (void)setDonotExeitSplash:(BOOL)a0;
+ (unsigned long long)displayCountWithAdId:(id)a0;
+ (void)addDisplayCountWithAdId:(id)a0;
+ (void)clearAllAdsDisplayCount;
+ (BOOL)checkIsPeriodFirstLaunchExistWithCompletion:(id /* block */)a0;
+ (void)consumePeriodFirstLaunch;
+ (void)addTodayShowTimes;
+ (void)saveRecentlyEnterBackgroundTime;
+ (double)getEnterBackgroundDurationTime;
+ (void)clearRecentlyEnterBackgroundTime;
+ (void)saveRecentlySplashShowTime;
+ (void)clearRecentlySplashShowTime;
+ (BOOL)isDisplayTimesLimit;
+ (BOOL)isNowOrientationShowSpalsh;
+ (void)clearRecentFetchAdInfoTime;
+ (void)saveNotShowBidSplashCids:(id)a0;
+ (id)notShowBidSplashCids;
+ (void)clearNotShowBidSplashCids;
+ (BOOL)isRecentFetchAdInfoTimeFit;
+ (void)openDonotExeitSplash;
+ (void)closeDonotExeitSplash;

@end
