@class NSString;

@interface AWEAwemeOfflineSettings : NSObject <AWEAwemeOfflineSettingsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableOfflineMode;
+ (BOOL)offlineModeGuideV2Enable;
+ (BOOL)enableGuideOfflineGuideUse;
+ (BOOL)enableGuideOfflineGuideOpen;
+ (long long)offlineModeGuideV2LeftCountToLoadMore;
+ (long long)offlineModeGuideLoadMoreTriggerTime;
+ (BOOL)enableOfflineDownloadPanelDev;
+ (BOOL)enableOfflineCommentCache;
+ (long long)commentAccumulateCacheCount;
+ (long long)offlineCommentCacheCheckCycle;
+ (BOOL)enableOfflineCommentImageCache;
+ (long long)commentContinueRequestCount;
+ (BOOL)offlineModeSegmentDownload;
+ (BOOL)offlineModeVideoTypeLimit;
+ (long long)offlineModeSingleVideoMaximumDur;
+ (BOOL)offlineModeBackgroundDownloadSwitchClose;
+ (long long)offlineModeSingleVideoMaximumSize;
+ (BOOL)offlineModeDownloadAuthorAvatar;
+ (long long)offlineModeVideoSupplementsCount;
+ (long long)offlineModeExpirationTime;
+ (long long)offlineModeDeduplicationCheckCount;
+ (BOOL)offlineModeVideoDeduplication;
+ (long long)offlineModeGuideV2OpenLeftSpace;
+ (long long)offlineModeGuideUseContinueRefuseTimes;
+ (long long)offlineModeGuideUseRefuseDayTimes;
+ (long long)offlineModeGuideOpenLeftSpace;
+ (BOOL)offlineModeGuideV2CanBlockOfflineToast;
+ (long long)offlineModeGuideV2BlockOfflineToastCount;
+ (long long)offlineModeDeduplicationCount;
+ (long long)offlineModeGuideQuitDayTimes;
+ (BOOL)enableOfflineEnterCommentCheck;
+ (BOOL)enableGuideOfflineGuideQuit;
+ (BOOL)enableOfflineNetworkChangedCommentCheck;
+ (long long)offlineModeGuideQuitNetworkTime;
+ (long long)offlineModeGuideQuitVideoCount;
+ (long long)offlineModeFirstPrivacyCheckCount;
+ (BOOL)enableOfflineVVCountCommentCheck;
+ (long long)offlineModeGuideV2MaxOfflineCount;
+ (BOOL)autoAppendOfflineVideosWithoutGuideV2;
+ (long long)offlineCommentImageCacheSizeLimit;
+ (long long)offlineCommentImageCacheTimeLimit;
+ (id)offlineModeConfig;
+ (id)offlineModeGuideConfig;
+ (id)offlineModeCommentImageConfig;
+ (id)offlineModeCommentCheckConfig;
+ (id)offlineModeGuideV2Config;
+ (long long)offlineModeDiskSafeSpace;
+ (BOOL)offlineModeMdlGlobalDownloadStatus;
+ (BOOL)enableOfflinePullTypeChange;


@end
