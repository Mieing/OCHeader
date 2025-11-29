@class NSString;

@interface AWEMessageReachABSettingsService : HTSService <AWEMessageReachABSettingsService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)versionUpdateEntranceOptimize;
+ (unsigned long long)replaceFeedRecommendAlert;
+ (BOOL)messageReachInitTaskOptEnable;
+ (BOOL)offlineElderModeAlert;
+ (BOOL)offlineHomepageSurveyAlert;
+ (id)bdPopViewEventOptimizeConfig;
+ (BOOL)commonDialogDisable;
+ (id)popViewMonitorConfig;
+ (BOOL)disableForceAlert;
+ (BOOL)enableForceAlertTrack;
+ (id)toastOptV2Config;
+ (long long)commonSubscribePanelAlertTimeout;
+ (long long)commonSubscribePanelTaskTimeout;
+ (long long)globalAlertTrackerLastActionDuration;
+ (id)globalAlertTrackerIgnoreIdList;
+ (id)globalAlertTrackerIgnoreEnterFromList;
+ (BOOL)globalAlertObserveEnable;
+ (BOOL)enableTrackAlertTerminate;
+ (BOOL)toastOptimizeEnable;
+ (id)toastOptimizeChannels;
+ (id)toastOptimizeIgnoreChannels;
+ (BOOL)toastOptV2Enable;
+ (BOOL)toastOptV2EnableHomepage;
+ (id)toastOptV2IgnoreChannels;
+ (BOOL)toastOptV2EnableDetailFeed;
+ (id)toastOptV2IgnoreDetailScenes;
+ (long long)aboutDouyinOpenAppStoreCase;
+ (BOOL)commonDialogFeedPlayOptimize;

- (BOOL)badgeShowOnVisibleTabEnabled;
- (id)limitVisibleTabIDShowBadge;
- (double)limitVisibleTabThresholdShowBadge;
- (BOOL)messageReachLeftSideBarDotMigrateEnable;
- (BOOL)messagReachLeftSideBarClickDotClearEnable;
- (BOOL)messageReachMsgTabDotMoveAbilityEnable;
- (BOOL)dotSceneChangeEnable;
- (id)dotSceneEnableTabList;
- (long long)getDotSceneStyleWithTabID:(id)a0;
- (BOOL)mrDotReduceReasonChange;
- (BOOL)notifyShowBubbleOnTabUncover;
- (BOOL)notifyShowBubbleOnSideBarVisibility;
- (BOOL)isCommonSubscribeOptimizeOn;
- (long long)subscribeSuccessPanelLimitCount;
- (BOOL)delayReshowBlockBubbleEnable;
- (BOOL)componentInterceptorEnable;
- (BOOL)popViewRemoveInterfaceOptimizeEnable;
- (BOOL)messageReachOptimizeLinkEnable;
- (unsigned long long)dotSceneStyle;

@end
