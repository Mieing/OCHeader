@class NSString;

@interface NHAccountPlatformWeChat : NSObject <WXApiDelegate, NHAccountPlatformProtocol>

@property (copy, nonatomic) id /* block */ wechatLoginSuccessBlock;
@property (copy, nonatomic) id /* block */ wechatLoginFailureBlock;
@property (copy, nonatomic) id /* block */ wechatLoginCancelBlock;
@property (copy, nonatomic) NSString *appKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPassportServiceHTSAdapterClass;
+ (Class)aAWEUserModuleConfigCommonClass;
+ (id)sharedInstance;

- (void)onResp:(id)a0;
- (void)registerApp:(id)a0;
- (id)aAWEPassportServiceHTSAdapter;
- (void)requestLogin:(id /* block */)a0 failure:(id /* block */)a1 cancel:(id /* block */)a2;
- (void)requestBind:(id /* block */)a0 failure:(id /* block */)a1 cancel:(id /* block */)a2;
- (void)requestAccessToken:(id /* block */)a0 failure:(id /* block */)a1 cancel:(id /* block */)a2;
- (BOOL)isSSOAvailable;
- (void)lazyRegisterApp:(id)a0;
- (id)basicThirdPlatformInfo;
- (void)OAuth:(id /* block */)a0 failure:(id /* block */)a1 cancel:(id /* block */)a2;
- (void)ensureWeChatRegistered;
- (id)aAWEUserModuleConfigCommon;
- (void).cxx_destruct;
- (BOOL)isAppInstalled;
- (BOOL)application:(id)a0 continueUserActivity:(id)a1 restorationHandler:(id /* block */)a2;
- (BOOL)handleOpenURL:(id)a0;

@end
