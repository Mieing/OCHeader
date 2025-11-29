@class AWENotificationPermissionBottomBarView, AWENotificationPermissionDataManager;

@interface AWEPlayInteractionNewNotificationPermissionBottomElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) AWENotificationPermissionBottomBarView *noticeView;
@property (retain, nonatomic) AWENotificationPermissionDataManager *dataManager;
@property (nonatomic) BOOL isWaitingOpenPermission;

- (void)viewController_viewDidDisappear;
- (id)activateInfoWithData:(id)a0;
- (void)p_applicationWillEnterForeground:(id)a0;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)hideMutexTempElement:(id /* block */)a0;
- (void)p_videoPrivacyChanged;
- (void)p_updateNoticeView;
- (void)p_openReceivePushOnlyFromFrendsSwitch;
- (void)p_openSystemSetting;
- (void)p_trackNotificationSwitchEvent;
- (void)p_trackPushClick;
- (BOOL)p_shouldShowPushGuideBottomElement;
- (BOOL)p_canShowNoticeView;
- (void)p_showNoticeViewWithAnimation;
- (void)p_trackOutAppNotifyGuideEventWithType:(id)a0;
- (void)p_executeStrongExitStrategy;
- (id)p_trackOutAppNotifyGuideEventParamsWithType:(id)a0;
- (void)p_closeButtonPressed;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (void)tapHandler:(id)a0;

@end
