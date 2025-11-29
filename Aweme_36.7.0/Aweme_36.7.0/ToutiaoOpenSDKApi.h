@interface ToutiaoOpenSDKApi : NSObject

+ (BOOL)sendReq:(id)a0;
+ (BOOL)sendResp:(id)a0;
+ (BOOL)isAppSupportAuthorization;
+ (BOOL)checkOpenUrls:(id)a0;
+ (BOOL)registerAppId:(id)a0;
+ (id)getAppiTunesUrl;
+ (BOOL)sendAuthReq:(id)a0 viewController:(id)a1 delegate:(id)a2;
+ (void)registerLogDelegate:(id)a0;
+ (void)unregisterLogDelegate;
+ (BOOL)handleOpenURL:(id)a0 delegate:(id)a1;
+ (void)preloadWebAuthWithReq:(id)a0;
+ (void)clearPreloadWebAuthCache;
+ (BOOL)sendAuthReq:(id)a0 viewController:(id)a1 delegate:(id)a2 webFirst:(BOOL)a3;
+ (id)currentVersion;
+ (id)sharedInstance;
+ (BOOL)isAppInstalled;

@end
