@class NSMutableDictionary, NSString, ToutiaoOpenSDKWebAuthViewController, ToutiaoOpenSDKNavigationController;
@protocol ToutiaoOpenSDKLogDelegate;

@interface ToutiaoOpenSDKApplicationDelegate : NSObject <ToutiaoOpenSDKWebAuthViewDelegate>

@property (retain, nonatomic) NSMutableDictionary *req2servicesMapper;
@property (retain, nonatomic) NSMutableDictionary *name2servicesMapper;
@property (retain, nonatomic) ToutiaoOpenSDKWebAuthViewController *webVC;
@property (retain, nonatomic) ToutiaoOpenSDKNavigationController *navVC;
@property (nonatomic) BOOL needPreload;
@property (weak, nonatomic) id<ToutiaoOpenSDKLogDelegate> logDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)URLServicerForServiceName:(id)a0;
+ (id)URLServicerForReq:(id)a0;
+ (void)doLog:(id)a0;
+ (BOOL)sendAuthToBytedanceAPPsWithReq:(id)a0 viewController:(id)a1 delegate:(id)a2 webFirst:(BOOL)a3;
+ (BOOL)webAuthSupported;
+ (void)webAuthToBytedanceAPPsWithReq:(id)a0 viewController:(id)a1 delegate:(id)a2;
+ (void)preloadWebAuthUIWithReq:(id)a0;
+ (void)registerLogDelegate:(id)a0;
+ (void)unregisterLogDelegate;
+ (BOOL)handleOpenURL:(id)a0 delegate:(id)a1;
+ (BOOL)sendMsgToBytedanceAPPsWithReq:(id)a0;
+ (BOOL)sendAuthToBytedanceAPPsWithReq:(id)a0 viewController:(id)a1 delegate:(id)a2;
+ (BOOL)sendMsgToBytedanceAPPsWithResp:(id)a0;
+ (void)preloadWebAuthWithReq:(id)a0;
+ (void)clearPreloadWebAuthCache;
+ (id)sharedDelegate;
+ (void)registerServiceClass:(Class)a0;

- (id)URLServicerForServiceName:(id)a0;
- (id)URLServicerForReq:(id)a0;
- (void)finishWithResp:(id)a0 sdkDelegate:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)registerServiceClass:(Class)a0;

@end
