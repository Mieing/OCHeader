@class NSString;

@interface AWELaunchTaskAccount : NSObject <TTAccountUIDelegate, TTAccountMessageFirstResponder, TTAccountUserMixedDelegate, TTAccountSDKSetupProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEZLinkSDKManagerCommonAdapterClass;
+ (void)execute;
+ (id)sharedInstance;

- (double)appRealLaunchTime;
- (void)setupConfig:(id)a0;
- (BOOL)canAccountSDKInterceptSafeErrorCode:(long long)a0;
- (void)accountsdk:(id)a0 correctUserWhenMixedWithSDKSecUid:(id)a1 tokenSecUid:(id)a2 sessionSecUid:(id)a3 completion:(id /* block */)a4;
- (id)appRequiredParams;
- (id)domainListToShareLoginToken;
- (BOOL)shouldAddXTokenToRequest:(id)a0;
- (BOOL)checkIfLoginExpiredWithRequest:(id)a0 resposne:(id)a1 data:(id)a2;
- (id)bussinessDomain;
- (id)aAWEZLinkSDKManagerCommonAdapter;
- (void)registerErrorHandler;
- (id)defaultLoginPaths;

@end
