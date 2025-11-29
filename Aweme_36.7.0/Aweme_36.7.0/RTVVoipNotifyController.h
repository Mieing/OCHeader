@class NSString, RTVVoipNotifyViewDataService, RTVVoipTracker, RTVVoipMonitor, RTVVoipSafetyTracker, RTVVoipModel, RxScheduler, RTVVoipEventHandler;
@protocol RTVSettingsManager, AWEInnerNotificationCenter, RTVVoipManagerInterface, RTVVoipTrackerHelperInterface, RTVCoordinator, RTVAccountServiceInterface, RTVInteractionConfigureManagerInterface, RTVVoipConfigureManagerInterface, RTVUserProfileManagerInterface, __RTVVoipContextManagerPrivateInterface, RTVVoipContextManagerInterface, RxInjector, RTVVoipService;

@interface RTVVoipNotifyController : NSObject <RTVAccountStateObserver, RTVCoordinatorObserver, RTVVoipEventObserver>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVVoipService> voipService;
@property (readonly, nonatomic) RTVVoipTracker *voipTracker;
@property (readonly, nonatomic) RTVVoipSafetyTracker *safetyTracker;
@property (readonly, nonatomic) RTVVoipMonitor *voipMonitor;
@property (readonly, nonatomic) id<RTVVoipTrackerHelperInterface> trackerHelper;
@property (readonly, nonatomic) id<RTVAccountServiceInterface> accountService;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVVoipManagerInterface> voipManager;
@property (readonly, nonatomic) id<RTVVoipContextManagerInterface, __RTVVoipContextManagerPrivateInterface> contextManager;
@property (readonly, nonatomic) RTVVoipNotifyViewDataService *notifyViewDataService;
@property (readonly, nonatomic) id<RTVCoordinator> rtvCoordinator;
@property (readonly, nonatomic) RxScheduler *scheduler;
@property (readonly, nonatomic) id<AWEInnerNotificationCenter> notificationCenter;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> voipConfigureManager;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> interactionConfigureManager;
@property (readonly, nonatomic) id<RTVSettingsManager> settingsManager;
@property (readonly, nonatomic) RTVVoipEventHandler *eventHander;
@property (retain, nonatomic) RTVVoipModel *stashVoip;
@property (retain, nonatomic) RTVVoipModel *lastVoipModel;
@property (nonatomic) BOOL isVoipProcessing;
@property (nonatomic) double notifyVoipBeginTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)didExitInterruptSession:(long long)a0 context:(id)a1;
- (id)__notifyVoipWithFullScreenStyle:(id)a0;
- (BOOL)__currentHasSplash;
- (id)notifyVoip:(id)a0;
- (id)__didReceiveVoip:(id)a0;
- (void)__handleSplashDisappearNotification:(id)a0;
- (BOOL)__isStashVoipValid;
- (id)__notifyTypeForCurrentContextForVoip:(id)a0;
- (id)__notifyVoip:(id)a0 inType:(int)a1 reason:(id)a2;
- (id)__notifyVoipWithBanner:(id)a0;
- (id)__notifyVoipWithBusy:(id)a0 reason:(id)a1;
- (id)__notifyVoipWithBusyAndBanner:(id)a0 reason:(id)a1;
- (void)__updateStashVoip:(id)a0;
- (id)__ignoreNotifyWithVoip:(id)a0 reason:(id)a1;
- (id)__autoAcceptVoip:(id)a0;
- (void)__trackVideoCallReceiveCallWithModel:(id)a0 enterFrom:(id)a1;
- (id)__showNotifyViewWithVoip:(id)a0;
- (id)__notifyContextWithVoip:(id)a0;
- (id)__enablePrejoinWithContext:(id)a0 selfParticipant:(id)a1 voip:(id)a2;
- (BOOL)__enableLandScapePush;
- (id)__requestCanShowIfNeedForVoip:(id)a0;
- (BOOL)__isInCall;
- (id)__innerNotifyTypeForCurrentContextForVoip:(id)a0 checkResult:(id)a1;
- (void)__consumeStashVoipIfNeeded;
- (BOOL)__isEffectGameInfoVaildWithBusinessModel:(id)a0 notifyData:(id)a1;
- (void)didReceiveVoipEvent:(id)a0;
- (void)didReceiveGameNotify:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
