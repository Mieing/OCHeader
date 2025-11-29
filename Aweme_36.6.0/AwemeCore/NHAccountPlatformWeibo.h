@class NSString;

@interface NHAccountPlatformWeibo : NSObject <WeiboSDKDelegate, WBHttpRequestDelegate, NHAccountPlatformProtocol>

@property (copy, nonatomic) id /* block */ weiboLoginSuccessBlock;
@property (copy, nonatomic) id /* block */ weiboLoginFailureBlock;
@property (copy, nonatomic) id /* block */ weiboLoginCancelBlock;
@property (copy, nonatomic) id /* block */ weiboAccessTokenSuccessBlock;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *appKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPassportServiceHTSAdapterClass;
+ (id)sharedInstance;

- (void)registerApp:(id)a0;
- (void)didReceiveWeiboRequest:(id)a0;
- (void)didReceiveWeiboResponse:(id)a0;
- (id)aAWEPassportServiceHTSAdapter;
- (void)requestLogin:(id /* block */)a0 failure:(id /* block */)a1 cancel:(id /* block */)a2;
- (void)requestBind:(id /* block */)a0 failure:(id /* block */)a1 cancel:(id /* block */)a2;
- (void)requestAccessToken:(id /* block */)a0 failure:(id /* block */)a1 cancel:(id /* block */)a2;
- (BOOL)isSSOAvailable;
- (void)lazyRegisterApp:(id)a0;
- (id)basicThirdPlatformInfo;
- (void)OAuth:(id /* block */)a0 failure:(id /* block */)a1 cancel:(id /* block */)a2;
- (BOOL)isAccessTokenGetterAvailable;
- (id)stringRepresentationForExpirationDate:(id)a0;
- (void)ensureWeiboRegistered;
- (void)checkIfInstallWeibo;
- (id)authLoginSuccessURLString;
- (void).cxx_destruct;
- (BOOL)isAppInstalled;
- (BOOL)handleOpenURL:(id)a0;

@end
