@interface AWEConcernSettingsManager : NSObject

+ (long long)followListRecommendCountToPermanentlyClose;
+ (long long)followListRecommendDaysToReappearAfterClosed;
+ (BOOL)shouldLimitFansCount:(long long)a0 userId:(id)a1;
+ (BOOL)followListSyncUserFollowStatusFixEnabel;
+ (id)bellPushFunctionGuideSettings;
+ (id)followFeedFakeRefreshSettings;
+ (BOOL)coldLaunchCacheDownloadVideoEnable;
+ (BOOL)recommendCardSmallScreenUIFixEnable;
+ (id)livingPageSchema;
+ (id)unfollowPageSchema;
+ (id)ecomShopPageSchema;
+ (id)relationListRemindEntranceUrl;
+ (id)recommendCardBackgroundMusicUrl;
+ (long long)isFollowFeedPullRequstsOptimized;

@end
