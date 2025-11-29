@interface AWEGoldenHouseSettings : NSObject

+ (BOOL)goldenHouseEnabled;
+ (long long)goldenHouseDeduplicationCheckCount;
+ (long long)goldenHouseSingleVideoMaximumSize;
+ (BOOL)goldenHouseFirstFeedOpt;
+ (BOOL)goldenHouseRepeatFeedOpt;
+ (long long)goldenHouseReleaseConditionWeakVV;
+ (BOOL)goldenHouseReleaseVideoLive;
+ (BOOL)goldenHouseReleaseVideoLoadMore;
+ (long long)goldenHouseLoadMoreLimit;
+ (BOOL)goldenHouseReleaseConditionPreCacheSwipe;
+ (long long)goldenHousePreCacheSwipeReleaseCount;
+ (long long)goldenHouseLoadMoreMinCheckTime;
+ (BOOL)goldenHouseReleaseVideoBlock;
+ (BOOL)goldenHouseReleaseVideoPrepare;
+ (BOOL)goldenHouseReleaseVideoLiveOnlyOne;
+ (long long)goldenHouseUnitReleaseCount;
+ (BOOL)goldenHouseDeduplicationOpt;
+ (BOOL)goldenHouseReleaseTTNetLevelJudge;
+ (BOOL)goldenHouseEnableTeenMode;
+ (BOOL)goldenHouseVideoTypeLimit;
+ (long long)goldenHouseSingleVideoMaximumDur;
+ (long long)goldenHouseRepeatInterval;
+ (long long)goldenHouseCheckSafetyInterval;
+ (long long)goldenHouseRequestCacheCount;
+ (BOOL)goldenHouseEnableBackGroundDownload;
+ (BOOL)goldenHouseExpiredCleanTimeOpt;
+ (BOOL)goldenHouseDownloadLowBitrateVideo;
+ (BOOL)goldenHouseCleanVideoCacheOpt;
+ (long long)goldenHouseExpirationTime;
+ (BOOL)goldenHouseDownloadPeriodEnable;
+ (BOOL)goldenHousePeakDownloadOpt;
+ (id)goldenHousePreCacheConfig;
+ (long long)goldenHouseDirectoryMaxSize;
+ (BOOL)goldenHouseCacheOnlyWifi;

@end
