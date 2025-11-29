@interface AWEFeedCacheCenterSettings : NSObject

+ (id)feedCacheCenterScenesConfig;
+ (BOOL)enablePreCacheMigration;
+ (BOOL)feedCacheCenterStableOpt;
+ (BOOL)feedCacheCenterBackgroundOpt;
+ (BOOL)enableFeedCacheCenter;
+ (double)enterBackgroundInterval;
+ (BOOL)enableHistoryHelperCircularArrayOpt;
+ (id)feedCacheForceClearList;
+ (long long)commonSafetyCheckTime;
+ (long long)commonDownloadTimeOut;
+ (double)enterForegroundInterval;
+ (BOOL)enableVideoCacheClear;
+ (BOOL)enableRepeatFileHashOpt;

@end
