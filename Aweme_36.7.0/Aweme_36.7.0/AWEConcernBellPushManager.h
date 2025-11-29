@class AFDAfterFollowAlertContext, AWEConcernBellPushVideoStrategyListResponse, NSString, NSNumber, AWEConcernBellPushGuideViewController;

@interface AWEConcernBellPushManager : NSObject <DUXPopoverDelegate, AWEConcernBellPushManagerProtocol, AWEAlertProtocol>

@property (class, retain, nonatomic) NSNumber *settingPermissionInDouyin;
@property (class, retain, nonatomic) NSNumber *settingPermissionVideo;
@property (class, retain, nonatomic) NSNumber *settingPermissionLive;
@property (class, nonatomic) BOOL canShowBellPushVideoStrategyList;
@property (class, nonatomic) BOOL bellPushGuideBubbleHasShow;

@property (retain, nonatomic) AWEConcernBellPushVideoStrategyListResponse *strategyAllListResponse;
@property (retain, nonatomic) AWEConcernBellPushVideoStrategyListResponse *strategyNoListResponse;
@property (retain, nonatomic) AWEConcernBellPushGuideViewController *currentShowingBellPushGuidePanel;
@property (nonatomic) BOOL bellPushSettingPanelShowing;
@property (nonatomic) BOOL bellPushGuideBubbleShowing;
@property (retain, nonatomic) AFDAfterFollowAlertContext *afterFollowContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)storageKeyBellPushSettingPermissionInDouyin;
+ (id)storageKeyBellPushSettingPermissionVideo;
+ (id)storageKeyBellPushSettingPermissionLive;
+ (id)storageKeyCanShowBellPushVideoStrategyList;
+ (id)storageKeyBellPushGuideBubbleHasShow;
+ (id)bellPushStorageKeyWithPageType:(unsigned long long)a0;
+ (BOOL)hasShowBellPushGuidePanelWithPageType:(unsigned long long)a0;
+ (void)markHasShowBellPushGuidePanelWithPageType:(unsigned long long)a0;
+ (id)sharedManager;

- (BOOL)canShowAtEvent:(long long)a0;
- (void)showWithCloseCallback:(id /* block */)a0;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (void)popoverDidDisappear:(id)a0;
- (BOOL)checkForUser:(id)a0;
- (BOOL)bellPushExperimentEnable;
- (void)presentBellPushSettingPanelWithRootVC:(id)a0 toUser:(id)a1 isGuide:(long long)a2 trackParaEnterFrom:(id)a3 trackParaEnterMethod:(id)a4;
- (void)fetchBellPushStrategyWithToUserID:(id)a0 completion:(id /* block */)a1;
- (void)updateSettingPermissionInDouyin:(id)a0;
- (void)updateSettingPermissionVideo:(id)a0;
- (void)updateSettingPermissionLive:(id)a0;
- (void)updateBellPushSettingsWithCompletion:(id /* block */)a0;
- (BOOL)isPermissionSystemPushEnable;
- (BOOL)isPermissionDouyinEnable;
- (BOOL)isPermissionRelationWithBellPushType:(unsigned long long)a0 userFollowStatus:(long long)a1;
- (id)valueToUploadWhenOpenPermissionRelationWith:(unsigned long long)a0 followStatus:(long long)a1;
- (BOOL)isTargetPageVisiable:(unsigned long long)a0;
- (BOOL)canShowBellPushGuidePanelToUser:(id)a0 pageType:(unsigned long long)a1;
- (BOOL)presentBellPushGuidePanelWithRootVC:(id)a0 toUser:(id)a1 pageType:(unsigned long long)a2 onClose:(id /* block */)a3;
- (BOOL)isShowBellPushVideoStrategyList;
- (BOOL)shouldPreventVideoPauseWhenBellPushSettingPanelShowing;
- (void)openPermissionSystemPush;
- (void)openPermissionDouyinWithCompletion:(id /* block */)a0;
- (void)openPermissionRelationWith:(unsigned long long)a0 followStatus:(long long)a1 completion:(id /* block */)a2;
- (void)updateCanShowBellPushVideoStrategyList:(BOOL)a0 cachedStrategyAllListResponse:(id)a1 cachedStrategyNoListResponse:(id)a2;
- (id)getSettingPermissionInfos;
- (void)presentBellPushSettingPanelWithRootVC:(id)a0 toUser:(id)a1 trackParaEnterFrom:(id)a2 trackParaEnterMethod:(id)a3;
- (void)presenBellPushVideoStrategyManagerViewControllerWithRootVC:(id)a0;
- (BOOL)showBellPushGuideBubbleIfNeededWithTarget:(id)a0 onView:(id)a1;
- (void)dismissBellPushGuidePanelIfNeed;
- (void)uploadBellPushStrategyWithToUserID:(id)a0 secUid:(id)a1 bellPushType:(unsigned long long)a2 strategy:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)fetchBellPushVideoStrategyListWithCursor:(id)a0 strategy:(unsigned long long)a1 completion:(id /* block */)a2;
- (BOOL)canShowBottomNotificationWithReferString:(id)a0;
- (id)bellPushBottomGuideHandler;
- (void).cxx_destruct;

@end
