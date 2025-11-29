@class NSDictionary, NSString;

@interface AWEPushModule : NSObject <UNUserNotificationCenterDelegate, BDUGPushServiceDelegate, BDUGPushNotificationDelegate, BDUGFrontierDelegate, HTSAppLifeCycle, BDUGPushSignalListenDelegate>

@property (retain, nonatomic) NSDictionary *remotePushUserInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)priority;

- (BOOL)isColdLaunch;
- (void)onAppDidBecomeActive;
- (void)insertDiskCleanGuideVideoIfNeeded;
- (void)requestPushAuthorization;
- (void)onAppWillEnterForeground;
- (void)onAppDidEnterBackground;
- (void)onAppDidRegisterDeviceToken;
- (void)onAppDidReceiveRemoteNotification;
- (void)bdug_pushDidRegisterForRemoteNotificationsWithDeviceToken:(id)a0;
- (void)bdug_handleSlientNotification:(id)a0 completionHandler:(id /* block */)a1;
- (id)bdug_trackParamsForPayload:(id)a0;
- (void)bdug_pushDeviceTokenUploadStart:(id)a0;
- (void)bdug_pushDeviceTokenUploadResult:(id)a0;
- (void)bdug_pushDidFinishStart:(id)a0;
- (id)bdug_pushBusinessSceneExtraWhenApplicationDidEnterBackground;
- (void)bdug_pushDidUploadOutSwitchNotification:(id)a0;
- (void)bdug_handleShowSpecialBadge:(id)a0;
- (void)bdug_pushDidGrantedNotification:(id)a0;
- (void)bdug_pushUserNotificationCenter:(id)a0 openSettingsForNotification:(id)a1;
- (void)bdug_willPresentNotification:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)bdug_useSDKPushClickEvent;
- (void)bdug_handleRemoteNotification:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)bdug_handleLocalNotification:(id)a0;
- (void)bdug_didReceiveInnerPushWithMessage:(id)a0 basePushMessage:(id)a1;
- (void)_onAppRootViewDidAppear;
- (void)setServiceChannel;
- (void)forceInsertAwemeURL:(id)a0;
- (void)attractNonLoginUser;
- (BOOL)isPushFromBackgroundNotification:(id)a0;
- (void)handleForegroundPushWithInfo:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)shouldPlaySound:(id)a0;
- (BOOL)shouldHandleInHighVersion:(id)a0;
- (void)_handleApplication:(id)a0 didReceiveRemoteNotification:(id)a1 fetchCompletionHandler:(id /* block */)a2;
- (void)_onAppDidFinishLuanch;
- (void)_onAppRootWindowVisible;
- (BOOL)handleDeeplinkTowerRedirectForContent:(id)a0;
- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)userNotificationCenter:(id)a0 openSettingsForNotification:(id)a1;

@end
