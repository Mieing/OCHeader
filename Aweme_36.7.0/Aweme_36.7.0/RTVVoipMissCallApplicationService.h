@class UIWindow, NSString, RxScheduler, NSMutableArray;
@protocol RxInjector, RTVXRSettingsInterface, RTVVoipMissCallDependencyHelper, RTVVoipConfigureManagerInterface, RTVAccountManagerInterface, AWEInnerNotificationCenter, RTVCoordinator, RTVVoipManagerInterface, RTVSettingsManager, RTVUserProfileManagerInterface, RTVVoipContextManagerInterface;

@interface RTVVoipMissCallApplicationService : NSObject <RTVVoipObserver, AWERTVIMCommandMessage, RTVXRRoomServiceObserver, RTVCoordinatorObserver, RTVApplicationService>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVVoipContextManagerInterface> voipContextManager;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> userProfileManager;
@property (readonly, nonatomic) id<AWEInnerNotificationCenter> notificationCenter;
@property (readonly, nonatomic) id<RTVVoipManagerInterface> voipManager;
@property (readonly, nonatomic) RxScheduler *scheduler;
@property (readonly, nonatomic) id<RTVXRSettingsInterface> xrSettings;
@property (readonly, nonatomic) id<RTVSettingsManager> settingManager;
@property (readonly, nonatomic) id<RTVVoipMissCallDependencyHelper> missCallAuthorizationChecker;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> congfigureManager;
@property (readonly, nonatomic) id<RTVAccountManagerInterface> accountManager;
@property (readonly, nonatomic) id<RTVCoordinator> rtvCoordinator;
@property (readonly, nonatomic) NSMutableArray *missCalls;
@property (retain, nonatomic) NSMutableArray *stashVoips;
@property (copy, nonatomic) NSString *lastStashVoipRoomID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIWindow *window;

- (void)rxAwakeFromPropertyInjection;
- (void)application:(id)a0 didCompleteLaunchWithOptions:(id)a1;
- (void)didExitInterruptSession:(long long)a0 context:(id)a1;
- (void)voipServiceDidFinish:(id)a0 voip:(id)a1;
- (void)voipServiceChangeToOccupied:(id)a0 voip:(id)a1;
- (void)notifyHasStashed:(id)a0 voip:(id)a1;
- (id)__logTag;
- (void)didReceiveCommandMessage:(id)a0;
- (void)handlePullResult:(id)a0 key:(id)a1 pullReason:(long long)a2;
- (BOOL)__missCallEnableEffectGamePush;
- (id)__missCallVMWithMissCall:(id)a0;
- (id)__appendMissCall:(id)a0;
- (id)__consumeStashMissCallsIfNeeded;
- (id)__missCallConfigForInviterLastOnlineTimestamp:(id)a0;
- (id)__missCallConfigWithOnlineStatusForInviter:(BOOL)a0 enableOnlineStatus:(BOOL)a1;
- (id)__missCallVMWithVoip:(id)a0;
- (id)__missCallConfigForInviterUserID:(id)a0;
- (void)consumeStashVoipIfNeeded;
- (id)__receiveNewMissCallWithVoips:(id)a0;
- (void)__addStashVoipIfNeed:(id)a0;
- (id)__isValidMissCallOfVoip:(id)a0;
- (void)__receiveNewMissCallWithVoip:(id)a0;
- (id)__handleReceiveMissCalls:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;

@end
