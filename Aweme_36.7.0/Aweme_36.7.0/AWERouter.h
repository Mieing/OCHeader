@class AWERouteStorage;

@interface AWERouter : NSObject

@property (class, nonatomic) BOOL optimizeNavigationPushCompletion;

@property (retain, nonatomic) AWERouteStorage *routeStorage;
@property (nonatomic) BOOL optimizeNavigationPushCompletion;

+ (void)setLogCallback:(void /* function */ *)a0;
+ (id)registerURLString:(id)a0 viewControllerClass:(Class)a1;
+ (BOOL)transferToURLString:(id)a0;
+ (id)registerURLString:(id)a0 customInitialization:(id /* block */)a1;
+ (void)transferToURLString:(id)a0 completion:(id /* block */)a1;
+ (id)viewControllerForURLString:(id)a0;
+ (id)transitionWithURLString:(id)a0;
+ (BOOL)canOpenURLString:(id)a0;
+ (BOOL)transferToWebViewWithURLString:(id)a0;
+ (BOOL)canRetrieveControllerForURLString:(id)a0;
+ (void)registerInterceptorDelegate:(id)a0 interceptorKey:(id)a1;
+ (void)unregisterInterceptorDelegate:(id)a0 interceptorKey:(id)a1;
+ (void)registerSecurityDelegate:(id)a0;
+ (id)transitionWithFormat:(id)a0;
+ (BOOL)transferToURLStringWithFormat:(id)a0;
+ (void)_aweLazyRegisterLoad;
+ (id)formatURLString:(id)a0;
+ (BOOL)transferFromDeepLinkWithURLString:(id)a0;
+ (void)_aweLazyRegisterLoad_Adapter;
+ (BOOL)routeWithWebURL:(id)a0 adInfo:(id)a1 queries:(id)a2;
+ (BOOL)mv_transferToAnyURLString:(id)a0;
+ (BOOL)_transferWithTransition:(id)a0;
+ (id)_registerURLString:(id)a0;
+ (id)_parseRouteForURL:(id)a0 errorMessage:(id *)a1;
+ (BOOL)_canOpenURLWithParamDict:(id)a0 errorMessage:(id *)a1;
+ (BOOL)_canRetrieveControllerForRouteInfo:(id)a0 errorMessage:(id *)a1;
+ (id)_viewControllerForRouteInfo:(id)a0 URLString:(id)a1 userInfo:(id)a2;
+ (BOOL)_defaultTransferWithTransitionInfo:(id)a0;
+ (id)formatURLString:(id)a0 arguments:(char *)a1;
+ (BOOL)shouldRegisterURLString:(id)a0;
+ (id)AWERouterAdapter_registerURLString:(id)a0 viewControllerClass:(Class)a1;
+ (id)AWERouterAdapter_registerURLString:(id)a0 customInitialization:(id /* block */)a1;
+ (BOOL)AWERouterAdapter_transferToURLString:(id)a0;
+ (id)AWERouterAdapter_transitionWithURLString:(id)a0;
+ (id)awedeeplink_parseRouteForURL:(id)a0 errorMessage:(id *)a1;
+ (BOOL)validateDeepLinkWithRouteIfo:(id)a0;
+ (id)deepLinkURLStringWithURLString:(id)a0;
+ (id)viewControllerForDeepLinkWithURLString:(id)a0;
+ (id)webViewControllerForURLString:(id)a0 paramsDictionary:(id)a1;
+ (id)webRouterURLStringWithWebURLString:(id)a0 paramsDictionary:(id)a1;
+ (id)webViewControllerForURLString:(id)a0;
+ (BOOL)transferToWebViewWithURLString:(id)a0 paramsDictionary:(id)a1;
+ (void)setMonitorDelegate:(id)a0;
+ (void)registerDelegate:(id)a0;
+ (id)sharedInstance;
+ (void)unregisterDelegate:(id)a0;
+ (void)setSettingsDelegate:(id)a0;
+ (id)encode:(id)a0;

- (void).cxx_destruct;

@end
