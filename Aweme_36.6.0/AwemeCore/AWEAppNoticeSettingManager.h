@interface AWEAppNoticeSettingManager : NSObject

+ (id)privacyReminder;
+ (BOOL)enableNoticeMoveToModularizon;
+ (BOOL)enableCommentNoticeMoveToModularizon;
+ (BOOL)enableAtNoticeMoveToModularizon;
+ (BOOL)enableNoticeAbnormalMonitor;
+ (int)officialNoticeUnreadCountMaxLimitSetting;
+ (int)officialNoticeUnreadCountSetting;
+ (long long)noticeCardNumberOfLines;
+ (BOOL)enablewWalletCellOpt;
+ (long long)stickerShowInNoticeStrategy;
+ (BOOL)isInteractiveCellDelNoticeTextControlByClient;
+ (id)noticeEmptyContentCutSuffixConfig;
+ (long long)noticeRequestDelayTime;
+ (unsigned long long)live_pushDisplayInterval;
+ (unsigned long long)live_maxiumDisplayTimesAtColdLanuch;
+ (unsigned long long)live_minimumDisplayTimesAtColdLanuch;
+ (unsigned long long)live_pushUnclickedThresholdTimes;
+ (BOOL)noticeListPreLoad;
+ (BOOL)noticeListLoadMoreOptimize;
+ (BOOL)enableCountAndMultiLog;
+ (id)awemenotice_cache;
+ (BOOL)enableInteractReplyIconOpt;
+ (unsigned long long)dismissThresholdOfTodayInThePast;
+ (unsigned long long)dismissThresholdOfWeekInThePast;
+ (BOOL)enableInteractMessageLimitFollowStatusFriends;
+ (unsigned long long)interactiveNoticeCacheExpiredTime;
+ (unsigned long long)fansNoticeCacheExpiredTime;
+ (id)commentDescriptionStringForInteract;
+ (BOOL)enableShowSupplement;
+ (BOOL)enableShowNormalCellSupplement;
+ (id)disturbingTipsTitle;
+ (long long)disturbingTipsUnreadCountLimit;
+ (long long)disturbingTipsIntervalDayLimit;
+ (id)disturbingTipsCurrentConfigUniqueKey;
+ (long long)sidebarNoticeContentCount;
+ (BOOL)enableSidebarCustomerService;
+ (BOOL)enableSocialInnerPushTransferToPlatformNormativeContainer;

@end
