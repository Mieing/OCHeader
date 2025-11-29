@class NSString;

@interface AWEMessageReachModuleService : HTSService <AWEMessageReachModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commonDialogFeedPlayController;

- (Class)sideBarPluginControllerClass;
- (id)topTabPluginWithController:(id)a0;
- (id)bottomTabPlugin;
- (id)sideBarPlugin;
- (id)componentLifeCyclePlugin;
- (id)badgeConsistencyPluginWithDelegate:(id)a0;
- (id)getMessageReachManager;
- (id)sideBarMessageReachProxyWithPresenter:(id)a0 leftSideBarBussinessDelegate:(id)a1;
- (long long)sideBarBadgeCount;
- (id)msgTabBadgeCountAbility;
- (void)tryShowBubbleWithModel:(id)a0 channelID:(id)a1 block:(id /* block */)a2;
- (id)createLynxPopup;
- (id)getPopViewAccessConfig;
- (id)getComponentInterceptor;
- (id)alertLaunchScheduleService;
- (id)updateVersionAlert;
- (BOOL)delayTriggerVersionUpdateIfNeeded;
- (id)versionUpdateSettingItem;
- (id)feedRecommendAlertManager;
- (id)privacyTrackWithContext:(id)a0;

@end
