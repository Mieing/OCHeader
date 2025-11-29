@class RTVVoipNotifyController, NSString, RTVVoipTracker, NSDate, RTVVoipMonitor;
@protocol __RTVVoipAppOptionsInterface, RTVVoIPReceiver, RTVXRBusinessRoomContextManagerInterface, RTVVoipManagerInterface, RTVVoipTrackerHelperInterface, RTVVoipSettingManagerInterface, RTVLiveCommunicationKitService, RTVAccountServiceInterface, AWEInnerNotificationController, RTVVoipResourceFetcherInterface, RTVUserProfileManagerInterface, RTVVoipConfigureManagerInterface, RTVVoipContextManagerInterface, RxInjector, RTVVoipService;

@interface RTVVoipApplicationService : RTVVoipBaseApplicationService <RTVVoipObserver, RTVBusinessRoomObserver, AWERTVIMCommandMessage>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVVoipService> voipService;
@property (readonly, nonatomic) id<RTVVoIPReceiver> voipReceiver;
@property (readonly, nonatomic) id<RTVVoipContextManagerInterface> voipContextManager;
@property (readonly, nonatomic) id<RTVAccountServiceInterface> accountService;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) RTVVoipNotifyController *notifyController;
@property (readonly, nonatomic) RTVVoipMonitor *voipMonitor;
@property (readonly, nonatomic) RTVVoipTracker *voipTracker;
@property (readonly, nonatomic) id<RTVLiveCommunicationKitService> lckService;
@property (readonly, nonatomic) id<RTVVoipTrackerHelperInterface> trackerHelper;
@property (readonly, nonatomic) id<AWEInnerNotificationController> notificationController;
@property (readonly, nonatomic) id<__RTVVoipAppOptionsInterface> appOptions;
@property (readonly, nonatomic) id<RTVVoipManagerInterface> voipManager;
@property (readonly, nonatomic) id<RTVVoipSettingManagerInterface> settingManager;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> voipConfigureManager;
@property (readonly, nonatomic) id<RTVXRBusinessRoomContextManagerInterface> roomContextManager;
@property (readonly, nonatomic) id<RTVVoipResourceFetcherInterface> resourceFetcher;
@property (readonly, nonatomic) NSDate *didCompleteLaunchDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)__handleRouteVoipDictionary:(id)a0 injector:(id)a1;
+ (void)__handleRouteInvokeVoipWithParams:(id)a0 injector:(id)a1;
+ (void)__handleSecurityCallRoute:(id)a0 injector:(id)a1;
+ (id)currentTimeString;

- (void)rxAwakeFromPropertyInjection;
- (void)application:(id)a0 didCompleteLaunchWithOptions:(id)a1;
- (void)voipServiceWillBegin:(id)a0 voip:(id)a1;
- (void)voipServiceDidBegin:(id)a0 voip:(id)a1;
- (void)voipServiceWillFinish:(id)a0 voip:(id)a1;
- (void)voipServiceDidFinish:(id)a0 voip:(id)a1;
- (void)voipService:(id)a0 voip:(id)a1 didSwitchNarrow:(BOOL)a2;
- (void)voipServiceDidReceiveVoip:(id)a0 voip:(id)a1;
- (void)voipServiceChangeToOccupied:(id)a0 voip:(id)a1;
- (void)didReceiveCommandMessage:(id)a0;
- (void)__antiAddictFeedEnter:(id)a0;
- (void)__antiAddictFeedLeave:(id)a0;
- (void)__registerAPNSNotification;
- (void)__removeAPNSNotification;
- (void)__handleReceivePushForeground:(id)a0;
- (id)__didReceiveVoip:(id)a0;
- (void)__resetInnerPushForbid;
- (void)__forbidInnerPushBecauseVoip;
- (void)roomServiceWillBegin:(id)a0 room:(id)a1;
- (void)roomServiceDidFinish:(id)a0 room:(id)a1;
- (void)__forbidInnerPushWithValidateBlock:(id /* block */)a0 business:(long long)a1;
- (void)applicationWillResignActive:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;

@end
