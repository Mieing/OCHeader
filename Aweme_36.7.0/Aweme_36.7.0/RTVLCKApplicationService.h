@class RTVLiveCommunicationKitController, NSString, UIWindow, RTVXRPushTokenCacheInfo, RTVVoipWebService, RTVXRVoipPushRegister;
@protocol RxInjector, RTVLiveCommunicationKitService, RTVAccountServiceInterface, RTVVoipConfigureManagerInterface, RTVAccountManagerInterface, RTVStorageArea, RTVPushServiceInterface, RTVSettingsManager, RTVUserProfileManagerInterface;

@interface RTVLCKApplicationService : NSObject <RTVAccountStateObserver, RTVXRVoipPushRegisterDelegate, RTVXLiveCommunicationApplicationService, RTVApplicationService>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVLiveCommunicationKitService> lckService;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> configureManager;
@property (readonly, nonatomic) id<RTVSettingsManager> settingManager;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVAccountManagerInterface> accountManager;
@property (readonly, nonatomic) id<RTVAccountServiceInterface> accountService;
@property (readonly, nonatomic) RTVXRVoipPushRegister *VoIPPushRegister;
@property (readonly, nonatomic) id<RTVStorageArea> storageArea;
@property (readonly, nonatomic) id<RTVPushServiceInterface> pushService;
@property (readonly, nonatomic) RTVLiveCommunicationKitController *controller;
@property (readonly, nonatomic) RTVVoipWebService *voipWebService;
@property (copy, nonatomic) NSString *token;
@property (retain) RTVXRPushTokenCacheInfo *cacheInfo;
@property (copy, nonatomic) NSString *currentLoginUserID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIWindow *window;

- (void)rxAwakeFromPropertyInjection;
- (void)accountDidLogin;
- (void)accountDidLogout;
- (void)didReceiveVoipPushFromColdStartUp:(id)a0;
- (void)handleVoIPEnhanceDisplayWithLCK:(id)a0;
- (void)voipPushRegister:(id)a0 didReceiveDeviceToken:(id)a1;
- (void)voipPushRegister:(id)a0 didReceivePayload:(id)a1;
- (void)__handleSettingChangeNotification:(id)a0;
- (void)__initApplicationDependencies;
- (void)p_updateCurrentUserRingtoneStorage;
- (void)__updateTokenIfNeeded:(id)a0 ignoreCache:(BOOL)a1;
- (void)registerForVoIPPushesIfNeeded;
- (id)__uploadToken:(id)a0;
- (id)__updateTokenCache:(id)a0 userID:(id)a1;
- (void)__handleReceiveVoIPPushPayload:(id)a0 reason:(id)a1 fromLaunchStash:(BOOL)a2;
- (id)__updateTokenCache:(id)a0;
- (void).cxx_destruct;

@end
