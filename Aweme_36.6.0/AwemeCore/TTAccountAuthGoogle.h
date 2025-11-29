@class GIDConfiguration, NSString, NSDictionary, TTAccountAuthRequest, NSDate, GIDGoogleUser;

@interface TTAccountAuthGoogle : NSObject <TTAccountAuthProtocol> {
    BOOL _isSDKAuthorizing;
    BOOL _isSSOAuthorizing;
    BOOL _isInBackground;
}

@property (copy, nonatomic) NSString *accessToken;
@property (copy, nonatomic) NSString *accessTokenSecret;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *refreshToken;
@property (retain, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSDictionary *customUserInfo;
@property (copy, nonatomic) id /* block */ willLoginHandler;
@property (copy, nonatomic) id /* block */ loginCompletedHandler;
@property (nonatomic) long long requestAuthReason;
@property (retain, nonatomic) TTAccountAuthRequest *authRequest;
@property (retain, nonatomic) GIDGoogleUser *authResponseOrigin;
@property (retain, nonatomic) GIDConfiguration *signInConfig;
@property (nonatomic, getter=isNewPlatform) BOOL newPlatform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)handleOpenURL:(id)a0 options:(id)a1;
+ (BOOL)handleOpenURL:(id)a0 sourceApplication:(id)a1 annotation:(id)a2;
+ (void)registerApp:(id)a0;
+ (id)defaultUserInfo;
+ (id)platformAppID;
+ (id)redirectURIString;
+ (id)getAppInstallUrl;
+ (BOOL)isAppAvailable;
+ (BOOL)isSupportCustomWebSSO;
+ (BOOL)isSupportSSO;
+ (BOOL)isSupportWebSSO;
+ (id)currentVersion;
+ (id)stateString;
+ (id)displayName;
+ (id)sharedInstance;
+ (id)platformName;
+ (BOOL)isAppInstalled;
+ (long long)platformType;
+ (BOOL)handleOpenURL:(id)a0;

- (void)tryCancelAuthWhenAppDidBeActive:(id)a0;
- (void)authorizeDidFinishWithErrCode:(long long)a0 error:(id)a1 signInResult:(id)a2;
- (void)__laziedRegisterSDKIfNeeded__;
- (void)registerApp:(id)a0;
- (void)requestLoginByCustomWebView:(BOOL)a0 requestAuthReason:(long long)a1 willLogin:(id /* block */)a2 completion:(id /* block */)a3;
- (void)authorizeInCustomWebView:(BOOL)a0 withCustomUserInfo:(id)a1;
- (void)requestAuthWithRequest:(id)a0 useCustomWap:(BOOL)a1 willLogin:(id /* block */)a2 completion:(id /* block */)a3;
- (void)customWapAuthorize;
- (void)sdkAuthorizeWithCustomUserInfo:(id)a0;
- (void)requestLoginCallbackWithAuthResponse:(id)a0;
- (void)loginDidFinishWithUser:(id)a0 error:(id)a1 response:(id)a2;
- (void)requestAuthInfoByCustomWebView:(BOOL)a0 completion:(id /* block */)a1;
- (void)requestLoginByCustomWebView:(BOOL)a0 completion:(id /* block */)a1;
- (void)requestLoginByCustomWebView:(BOOL)a0 willLogin:(id /* block */)a1 completion:(id /* block */)a2;
- (void)requestLoginOnlyWithwillLogin:(id /* block */)a0 completion:(id /* block */)a1;
- (void)requestLogout:(id /* block */)a0;
- (void)requestAuthWithRequest:(id)a0 willLogin:(id /* block */)a1 completion:(id /* block */)a2;
- (void)requestBindByCustomWebView:(BOOL)a0 willLogin:(id /* block */)a1 completion:(id /* block */)a2;
- (void)signIn:(id)a0 didSignInForUser:(id)a1 withError:(id)a2;
- (void)signInWillDispatch:(id)a0 error:(id)a1;
- (void)signIn:(id)a0 presentViewController:(id)a1;
- (void)signIn:(id)a0 dismissViewController:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)appDidEnterBackground:(id)a0;
- (void)dealloc;

@end
