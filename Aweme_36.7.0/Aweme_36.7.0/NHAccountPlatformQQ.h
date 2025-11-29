@class TencentOAuth, NSArray, NSString;

@interface NHAccountPlatformQQ : NSObject <TencentSessionDelegate, NHAccountPlatformProtocol>

@property (retain, nonatomic) TencentOAuth *tencentOAuth;
@property (retain, nonatomic) NSArray *loginPermissions;
@property (copy, nonatomic) id /* block */ QQLoginSuccessBlock;
@property (copy, nonatomic) id /* block */ QQLoginFailureBlock;
@property (copy, nonatomic) id /* block */ QQLoginCancelBlock;
@property (copy, nonatomic) NSString *appKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerApp:(id)a0;
- (void)tencentDidNotLogin:(BOOL)a0;
- (void)tencentDidLogin;
- (void)tencentDidNotNetWork;
- (void)requestLogin:(id /* block */)a0 failure:(id /* block */)a1 cancel:(id /* block */)a2;
- (void)requestBind:(id /* block */)a0 failure:(id /* block */)a1 cancel:(id /* block */)a2;
- (void)requestAccessToken:(id /* block */)a0 failure:(id /* block */)a1 cancel:(id /* block */)a2;
- (BOOL)isSSOAvailable;
- (void)lazyRegisterApp:(id)a0;
- (id)basicThirdPlatformInfo;
- (void)OAuth:(id /* block */)a0 failure:(id /* block */)a1 cancel:(id /* block */)a2;
- (void)ensureQQRegistered;
- (id)stringRepresentationForExpirationDate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isAppInstalled;
- (BOOL)application:(id)a0 continueUserActivity:(id)a1 restorationHandler:(id /* block */)a2;
- (BOOL)handleOpenURL:(id)a0;

@end
