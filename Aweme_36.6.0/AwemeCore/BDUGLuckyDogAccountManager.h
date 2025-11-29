@class NSString, NSMutableDictionary;

@interface BDUGLuckyDogAccountManager : NSObject <BDUGLuckyDogAccountProtocol>

@property (nonatomic) BOOL isLoginProcessing;
@property (retain, nonatomic) NSMutableDictionary *currentUnionInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)accountDidLoginNotification;
+ (void)accountDidLogoutNotification;
+ (void)accountSessionExpiredNotification;
+ (void)bindPhoneNotification;
+ (void)rebindPhoneNotification;
+ (void)initializeAccountManager;
+ (void)didSwitchTeenModeNotification;
+ (void)didSwitchBaseModeNotification;
+ (void)sdkSettingsUpdate;
+ (void)hasTryToGetIDFA;
+ (id)sharedInstance;
+ (id)serviceProtocol;

- (void)presentLoginViewControllerFromVC:(id)a0 completionBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (void)presentBindPhoneViewControllerFromVC:(id)a0 completionBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (void)presentRebindViewControllerFromVC:(id)a0 completionBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (void)saveUnionInfo:(id)a0 activityId:(id)a1;
- (id)getUnionInfoOfActvityId:(id)a0;
- (void)removeUnionOfActivityId:(id)a0;
- (id)getActHashByActivityId:(id)a0;
- (void)refreshActHashSuccesNotification:(id)a0;
- (void)refreshActHashFailedNotification:(id)a0;
- (void)__onReceiveAccountDidLoginEvent;
- (void)__onReceiveAccountDidLogoutEvent;
- (void)__onReceiveTeenModeChangedEvent;
- (void)__onReceiveBaseModeChangedEvent;
- (void)__onReceiveActHashSuccessEventWithRefreshScene:(unsigned long long)a0;
- (void)__onReceiveActHashFailedEventWithRefreshScene:(unsigned long long)a0;
- (void)initDeviceToken;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)isLogin;

@end
