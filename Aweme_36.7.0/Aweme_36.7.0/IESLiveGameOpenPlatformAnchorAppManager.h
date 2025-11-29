@class NSString, IESLiveOpenPlatformShareScreenServiceImpl;

@interface IESLiveGameOpenPlatformAnchorAppManager : IESLiveGameOpenPlatformAppManager <IESLiveOpenPlatformMessageChannelObserver, IESLiveGameOpenPlatformAppInstanceLifeCycleObserver, IESLiveToolbarComponentHandler, IESLiveGameOpenPlatformShareScreenActions, IESLiveGameOpenPlatformInterractGameAnchorManagerInterface, IESLiveAnchorRoomStatusChangeEvents>

@property (retain, nonatomic) IESLiveOpenPlatformShareScreenServiceImpl *shareScreenService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)didSetAttachingDIContext;
- (void)toolbarComponentRemovedReason:(unsigned long long)a0 extra:(id)a1;
- (void)willStopAnchorLive;
- (void)shareScreenDidStartWithAppId:(id)a0 containerType:(long long)a1 strategy:(unsigned long long)a2 extra:(id)a3;
- (void)shareScreenDidStopWithAppId:(id)a0 containerType:(long long)a1 strategy:(unsigned long long)a2 extra:(id)a3;
- (void)preloadOpenPlatformGame:(id)a0;
- (void)closeOpenPlatformGame:(id)a0;
- (void)openOpenPlatformGame:(id)a0 startParmaMap:(id)a1 launchResultBlock:(id /* block */)a2;
- (BOOL)isOpenPlatformGameInRunning:(id)a0;
- (void)loadGameResourceWithGameItem:(id)a0 source:(unsigned long long)a1 launchResultBlock:(id /* block */)a2;
- (void)loadGameResourceWithGameItemFromIntroduction:(id)a0 source:(unsigned long long)a1 castScreenOn:(BOOL)a2 explainCardOn:(BOOL)a3 params:(id)a4;
- (void)appInstance:(id)a0 didSwitchStateFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (void)didReceiveOpenPlatformAnchorMessage:(id)a0;
- (id)_createAppInstanceIfNeededWithAppId:(id)a0;
- (void)_onReceivePerformanceFinishMessage:(id)a0;
- (void)_dispatchMessageToApp:(id)a0 message:(id)a1;
- (void)_handleAppStateChangeToIdle:(id)a0;
- (void)_handleAppStateChangeToFinishedLoadingResource:(id)a0;
- (void)_handleAppStateChangeToLaunchedSuccess:(id)a0;
- (void)_handleAppStateChangeToRunningInForeground:(id)a0;
- (void)_handleAppStateChangeToRunningInBackground:(id)a0;
- (void)_handleAppStateChangeToStartQuitting:(id)a0;
- (void)_handleAppStateChangeToTerminated:(id)a0;
- (void)_handleAppStateChangeToStartLaunching:(id)a0;
- (void)_cleanAppInstance:(id)a0;
- (id)_bootstrapNewAppInstanceWithAppID:(id)a0;
- (void)_setupObserver;
- (void).cxx_destruct;
- (void)_setup;

@end
