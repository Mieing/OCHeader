@class UIWindow, NSString, RTVXRDegradeService, AWERTVIMCommandMessageDispatchCenter;
@protocol RTVAccountServiceInterface, RTVLiveCommunicationKitService, RTVMultipleDelegateInterface, RxInjector, RTVXRRoomManagerInterface, RTVXRRoomServiceObserver, RTVReachabilityManagerInterface, RTVSettingsManager;

@interface AWERTVXRRoomApplicationService : NSObject <RTVXRRoomServiceInterface, RTVReachabilityManagerDelegate, RTVAccountStateObserver, RTVApplicationService>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVXRRoomManagerInterface> roomManager;
@property (readonly, nonatomic) id<RTVSettingsManager> settingsManager;
@property (readonly, nonatomic) id<RTVReachabilityManagerInterface> reachabilityManager;
@property (readonly, nonatomic) id<RTVAccountServiceInterface> accountService;
@property (nonatomic) BOOL canPullRoom;
@property (readonly, nonatomic) id<RTVLiveCommunicationKitService> lckService;
@property (readonly, nonatomic) RTVXRDegradeService *degradeService;
@property (readonly, nonatomic) AWERTVIMCommandMessageDispatchCenter *imCommandMessageDispatcher;
@property (readonly, nonatomic) id<RTVMultipleDelegateInterface, RTVXRRoomServiceObserver> observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIWindow *window;

- (void)rxAwakeFromPropertyInjection;
- (void)accountDidLogin;
- (void)application:(id)a0 didCompleteLaunchWithOptions:(id)a1;
- (void)addServiceObserver:(id)a0;
- (void)removeServiceObserver:(id)a0;
- (void)__pullRoomWithReason:(long long)a0;
- (void)reachabilityManager:(id)a0 reachableStatusChangeTo:(BOOL)a1;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;

@end
