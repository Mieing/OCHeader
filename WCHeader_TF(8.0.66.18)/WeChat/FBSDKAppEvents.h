@class NSString, FBSDKAppEventsState, FBSDKServerConfiguration, NSObject, FBSDKEventBindingManager;
@protocol OS_dispatch_source;

@interface FBSDKAppEvents : NSObject {
    BOOL _explicitEventsLoggedYet;
    FBSDKServerConfiguration *_serverConfiguration;
    FBSDKAppEventsState *_appEventsState;
    FBSDKEventBindingManager *_eventBindingManager;
    NSString *_userID;
    BOOL _isUnityInit;
}

@property (class, nonatomic) unsigned long long flushBehavior;
@property (class, copy, nonatomic) NSString *loggingOverrideAppID;
@property (class, copy, nonatomic) NSString *userID;

@property (nonatomic) unsigned long long flushBehavior;
@property (nonatomic) BOOL disableTimer;
@property (copy, nonatomic) NSString *pushNotificationsDeviceTokenString;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *flushTimer;

+ (void)initialize;
+ (void)logEvent:(id)a0;
+ (void)logEvent:(id)a0 valueToSum:(double)a1;
+ (void)logEvent:(id)a0 parameters:(id)a1;
+ (void)logEvent:(id)a0 valueToSum:(double)a1 parameters:(id)a2;
+ (void)logEvent:(id)a0 valueToSum:(id)a1 parameters:(id)a2 accessToken:(id)a3;
+ (void)logPurchase:(double)a0 currency:(id)a1;
+ (void)logPurchase:(double)a0 currency:(id)a1 parameters:(id)a2;
+ (void)logPurchase:(double)a0 currency:(id)a1 parameters:(id)a2 accessToken:(id)a3;
+ (void)logPushNotificationOpen:(id)a0;
+ (void)logPushNotificationOpen:(id)a0 action:(id)a1;
+ (void)logProductItem:(id)a0 availability:(unsigned long long)a1 condition:(unsigned long long)a2 description:(id)a3 imageLink:(id)a4 link:(id)a5 title:(id)a6 priceAmount:(double)a7 currency:(id)a8 gtin:(id)a9 mpn:(id)a10 brand:(id)a11 parameters:(id)a12;
+ (void)activateApp;
+ (void)setPushNotificationsDeviceToken:(id)a0;
+ (void)setPushNotificationsDeviceTokenString:(id)a0;
+ (void)flush;
+ (void)clearUserID;
+ (void)setUserEmail:(id)a0 firstName:(id)a1 lastName:(id)a2 phone:(id)a3 dateOfBirth:(id)a4 gender:(id)a5 city:(id)a6 state:(id)a7 zip:(id)a8 country:(id)a9;
+ (id)getUserData;
+ (void)clearUserData;
+ (void)setUserData:(id)a0 forType:(id)a1;
+ (void)clearUserDataForType:(id)a0;
+ (void)updateUserProperties:(id)a0 handler:(id /* block */)a1;
+ (void)augmentHybridWKWebView:(id)a0;
+ (void)setIsUnityInit:(BOOL)a0;
+ (void)sendEventBindingsToUnity;
+ (void)logInternalEvent:(id)a0 isImplicitlyLogged:(BOOL)a1;
+ (void)logInternalEvent:(id)a0 valueToSum:(double)a1 isImplicitlyLogged:(BOOL)a2;
+ (void)logInternalEvent:(id)a0 parameters:(id)a1 isImplicitlyLogged:(BOOL)a2;
+ (void)logInternalEvent:(id)a0 parameters:(id)a1 isImplicitlyLogged:(BOOL)a2 accessToken:(id)a3;
+ (void)logInternalEvent:(id)a0 valueToSum:(double)a1 parameters:(id)a2 isImplicitlyLogged:(BOOL)a3;
+ (void)logInternalEvent:(id)a0 valueToSum:(id)a1 parameters:(id)a2 isImplicitlyLogged:(BOOL)a3 accessToken:(id)a4;
+ (void)logImplicitEvent:(id)a0 valueToSum:(id)a1 parameters:(id)a2 accessToken:(id)a3;
+ (id)singleton;
+ (id)requestForCustomAudienceThirdPartyIDWithAccessToken:(id)a0;

- (id)init;
- (void)registerNotifications;
- (void)dealloc;
- (void)flushForReason:(unsigned long long)a0;
- (id)appID;
- (void)publishInstall;
- (void)enableCodelessEvents;
- (void)fetchServerConfiguration:(id /* block */)a0;
- (void)instanceLogEvent:(id)a0 valueToSum:(id)a1 parameters:(id)a2 isImplicitlyLogged:(BOOL)a3 accessToken:(id)a4;
- (void)checkPersistedEvents;
- (void)flushOnMainQueue:(id)a0 forReason:(unsigned long long)a1;
- (void)handleActivitiesPostCompletion:(id)a0 loggingEntry:(id)a1 appEventsState:(id)a2;
- (void)flushTimerFired:(id)a0;
- (void)applicationDidBecomeActive;
- (void)applicationMovingFromActiveStateOrTerminating;
- (void).cxx_destruct;

@end
