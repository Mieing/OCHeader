@class NSString;
@protocol RTVAccountServiceInterface, RTVLiveCommunicationKitService, RTVPushDataSourceComponentInterface, RxInjector, RTVReachabilityManagerInterface, RTVXRRoomManagerInterface, RTVSettingsManager;

@interface RTVPushDataSourceComponent_ColdPull : RTVComponentBase <RTVReachabilityManagerDelegate, RTVAccountStateObserver>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVXRRoomManagerInterface> roomManager;
@property (readonly, nonatomic) id<RTVSettingsManager> settingsManager;
@property (readonly, nonatomic) id<RTVReachabilityManagerInterface> reachabilityManager;
@property (readonly, nonatomic) id<RTVAccountServiceInterface> accountService;
@property (nonatomic) BOOL canPullRoom;
@property (readonly, nonatomic) id<RTVLiveCommunicationKitService> lckService;
@property (readonly, nonatomic) id<RTVPushDataSourceComponentInterface> dataSourceComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)accountDidLogin;
- (void)application:(id)a0 didCompleteLaunchWithOptions:(id)a1;
- (void)__pullRoomWithReason:(long long)a0;
- (void)reachabilityManager:(id)a0 reachableStatusChangeTo:(BOOL)a1;
- (id)getVoipModelWithPullResult:(id)a0 key:(id)a1 pullReason:(long long)a2;
- (long long)__transferPullReason:(long long)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
