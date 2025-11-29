@class UIWindow, NSMutableDictionary, RxScheduler, NSString, NSMutableArray;
@protocol AWEInnerNotificationCenter, RTVVoipWebServiceAdapterProtocol, RxInjector, RTVSettingsManager;

@interface __AWEEnhancePushModuleService : HTSService <RTVApplicationService, HTSService, AWEEnhancePushModuleService>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVVoipWebServiceAdapterProtocol> webServiceAccess;
@property (readonly, nonatomic) id<RTVSettingsManager> settingsManager;
@property (readonly, nonatomic) id<AWEInnerNotificationCenter> notificationCenter;
@property (readonly, nonatomic) RxScheduler *scheduler;
@property (readonly, nonatomic) NSMutableDictionary *delegateMap;
@property (readonly, nonatomic) NSMutableArray *interruptIDs;
@property (readonly, nonatomic) NSMutableArray *registeredOpenURLIDs;
@property (nonatomic) BOOL doInterrupting;
@property (retain, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)rxAwakeFromPropertyInjection;
- (id)__deliveredNotifications;
- (id)__sceneWithOpenURL:(id)a0;
- (id)__tupleWithID:(id)a0 andScene:(id)a1;
- (void)__addRegisteredOpenURLID:(id)a0;
- (void)__postNotificationWithData:(id)a0;
- (id)__dictionaryWithJsonString:(id)a0;
- (void)__postNotificationToObj:(id)a0 withData:(id)a1;
- (void)__removeInterruptID:(id)a0;
- (BOOL)__needInterruptEnhancePush;
- (void)__trackInterruptWithReason:(id)a0;
- (id)__getRequestWithName:(id)a0 queryItems:(id)a1;
- (void)__interruptWithRequest:(id)a0 identifier:(id)a1;
- (void)__addInterruptID:(id)a0;
- (id)__filterdNotificationTuples;
- (void)__interruptEnhancePushWithTuples:(id)a0 coldLaunch:(BOOL)a1;
- (void)__addDelegate:(id)a0 withType:(long long)a1;
- (void)__removeDelegate:(id)a0 withType:(long long)a1;
- (void)__addRegisteredOpenURL:(id)a0 withIdentifier:(id)a1;
- (void)__interruptEnhancePushIfNeeded:(id)a0 coldLaunch:(BOOL)a1;
- (void)application:(id)a0 didCompleteLaunchWithOptions:(id)a1;
- (void)onAppHandleNotificationWithUserInfo:(id)a0 categoryIdentifier:(id)a1 actionIdentifier:(id)a2 userText:(id)a3 identifier:(id)a4;
- (void)registerDelegate:(id)a0 withType:(long long)a1;
- (void)unregisterDelegate:(id)a0 withType:(long long)a1;
- (id)__postRequestWithName:(id)a0 jsonBody:(id)a1;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;

@end
