@interface AWEMusicStreamSetting : NSObject

+ (id)miniLunaConfig;
+ (BOOL)musicAppAvailable;
+ (id)defaultContent;
+ (id)musicPlaylistPublishToast;
+ (id)miniLunaDomainConfig;
+ (id)listenLaterConfig;
+ (long long)dailyPlaylistMaskCount;
+ (long long)dailyPlaylistMaskLimit;
+ (id)musicAppDisplayName;
+ (id)diversionStrategyParseRule;
+ (id)diversionStrategyParseRuleV2;
+ (BOOL)lunaInstallStatusMonitorAvailable;
+ (id)lunaSKOverlayConfig;
+ (id)musicPublisherPlaylistAnchorTips;
+ (id)musicPlaylistSyncTip;
+ (id)dspGuideConfig;
+ (id)dspGuideConfigContent;
+ (id)musicPreviewGuideTip;
+ (long long)lunaCollectToastShowCount;
+ (long long)dyLikePlaylistLoadCount;

@end
