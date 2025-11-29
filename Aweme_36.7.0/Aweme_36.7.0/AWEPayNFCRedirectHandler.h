@class AWEPayNFCRedirectCache, AWEPayNFCRedirectErrorPage, CJPayHTTPTask, CJPayNFCConfig;

@interface AWEPayNFCRedirectHandler : NSObject

@property (weak, nonatomic) AWEPayNFCRedirectErrorPage *errorPage;
@property (retain, nonatomic) CJPayHTTPTask *lastHttpTask;
@property (nonatomic) BOOL isColdLaunch;
@property (retain, nonatomic) CJPayNFCConfig *nfcSettings;
@property (retain, nonatomic) AWEPayNFCRedirectCache *cache;

+ (void)startPreRequestIfNeed:(id)a0 coldLaunchOptions:(id)a1;
+ (id)sharedInstance;

- (BOOL)handleRedirectBusiness:(id)a0 showLoading:(BOOL)a1 isColdLaunch:(BOOL)a2;
- (void)handleRedirectResponse:(id)a0 error:(id)a1 session:(id)a2;
- (void)handleDynamicCheckResponse:(id)a0 error:(id)a1 token:(id)a2 targetScheme:(id)a3;
- (BOOL)allowCacheOptmizeWithURL:(id)a0;
- (void)handleNeedLogin:(id)a0;
- (void)transferRouteURL:(id)a0 isSuccess:(BOOL)a1 session:(id)a2;
- (void)cacheDynamicCheck:(id)a0 extraParams:(id)a1 targetScheme:(id)a2 session:(id)a3;
- (void)startRedirectRequest:(id)a0 extraParams:(id)a1 session:(id)a2;
- (void)preloadTimorIfNeed:(id)a0;
- (void)handleError:(unsigned long long)a0 session:(id)a1;
- (void)handleJumpTargetUrlWithModel:(id)a0 session:(id)a1;
- (void)removeErrorPageIfNeed;
- (void)removeLoadingAndErrorPageByRouteType:(long long)a0;
- (long long)routeLoadOptimize:(id)a0;
- (BOOL)handleRedirectBusiness:(id)a0 showLoading:(BOOL)a1;
- (void)timorDidAppearNoti:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)startLoading;
- (void)reset;

@end
