@class NSString, NSDictionary, TTAccountAuthRequest;

@interface TTAccountAuthPassportShare : NSObject <TTAccountAuthProtocol> {
    BOOL _isSDKAuthorizing;
    BOOL _isSSOAuthorizing;
    BOOL _isInBackground;
}

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *scope;
@property (copy, nonatomic) NSDictionary *customUserInfo;
@property (nonatomic) BOOL isShareUserInfo;
@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *tokenChallange;
@property (copy, nonatomic) NSString *tokenVerifier;
@property (copy, nonatomic) id /* block */ willLoginHandler;
@property (copy, nonatomic) id /* block */ loginCompletedHandler;
@property (nonatomic) double startTime;
@property (nonatomic) long long authDuration;
@property (nonatomic) BOOL isGettingToken;
@property (retain, nonatomic) TTAccountAuthRequest *authRequest;
@property (copy, nonatomic) NSDictionary *clientParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)handleOpenURL:(id)a0 options:(id)a1;
+ (BOOL)handleOpenURL:(id)a0 sourceApplication:(id)a1 annotation:(id)a2;
+ (BOOL)continueUserActivity:(id)a0 restorationHandler:(id /* block */)a1;
+ (BOOL)continueUserActivity:(id)a0 coldLaunch:(BOOL)a1 restorationHandler:(id /* block */)a2;
+ (id)additionalPermissions;
+ (void)registerApp:(id)a0;
+ (id)platformAppID;
+ (id)getAppInstallUrl;
+ (BOOL)isAppAvailable;
+ (BOOL)isSupportCustomWebSSO;
+ (BOOL)isSupportSSO;
+ (BOOL)isSupportWebSSO;
+ (BOOL)handleOpenURL:(id)a0 coldLaunch:(BOOL)a1;
+ (BOOL)handleOpenURL:(id)a0 sourceApplication:(id)a1 annotation:(id)a2 coldLaunch:(BOOL)a3;
+ (id)currentVersion;
+ (id)displayName;
+ (id)sharedInstance;
+ (id)permissions;
+ (id)platformName;
+ (BOOL)isAppInstalled;
+ (long long)platformType;
+ (BOOL)handleOpenURL:(id)a0;

- (void)tryCancelAuthWhenAppDidBeActive:(id)a0;
- (void)requestLoginByCustomWebView:(BOOL)a0 requestAuthReason:(long long)a1 willLogin:(id /* block */)a2 completion:(id /* block */)a3;
- (void)authorizeInCustomWebView:(BOOL)a0 withCustomUserInfo:(id)a1;
- (void)requestLoginCallbackWithAuthResponse:(id)a0;
- (void)loginDidFinishWithUser:(id)a0 error:(id)a1 response:(id)a2;
- (void)requestAuthInfoByCustomWebView:(BOOL)a0 completion:(id /* block */)a1;
- (void)requestLoginByCustomWebView:(BOOL)a0 completion:(id /* block */)a1;
- (void)requestLoginByCustomWebView:(BOOL)a0 willLogin:(id /* block */)a1 completion:(id /* block */)a2;
- (void)requestLoginOnlyWithwillLogin:(id /* block */)a0 completion:(id /* block */)a1;
- (void)requestLogout:(id /* block */)a0;
- (void)requestAuthWithRequest:(id)a0 willLogin:(id /* block */)a1 completion:(id /* block */)a2;
- (void)authorizeDidFinishWithErrCode:(long long)a0 error:(id)a1 code:(id)a2 state:(id)a3;
- (BOOL)handleOpenURL:(id)a0 coldLaunch:(BOOL)a1;
- (void)sdkAuthorizeWithScope:(id)a0 openID:(id)a1 customUserInfo:(id)a2;
- (BOOL)isUniversalLinkWithOpenUrl:(id)a0;
- (void)sendPassportShareTokenRequest;
- (id)tokenChallengeWithVerifier:(id)a0;
- (void)trackPassportShareStageMonitor:(id)a0 url:(id)a1 key:(id)a2;
- (void)trackPassportShareStageMonitor:(id)a0 url:(id)a1 key:(id)a2 result:(BOOL)a3;
- (id)buildClientOpenURLError;
- (void)didReceiveTokenResult:(id)a0;
- (void)trackPassportShareTimeDurationWithResult:(id)a0;
- (void)authorizeDidFinishWithErrCode:(long long)a0 error:(id)a1 code:(id)a2 state:(id)a3 extraParams:(id)a4;
- (void)sendPassportShareTokenResponse:(id)a0 targetURL:(id)a1;
- (void)dismissLoadingForScene:(id)a0;
- (void)handlePassportShareTokenRequestFromURL:(id)a0 coldLaunch:(BOOL)a1;
- (void)handlePassportShareTokenResponseFromURL:(id)a0;
- (void)trackPassportShareResultWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)appDidEnterBackground:(id)a0;
- (void)dealloc;
- (void)openURL:(id)a0 completion:(id /* block */)a1;
- (BOOL)handleOpenURL:(id)a0;

@end
