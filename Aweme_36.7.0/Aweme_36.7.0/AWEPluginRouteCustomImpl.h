@class NSString, BDXBridgeEventSubscriber;

@interface AWEPluginRouteCustomImpl : NSObject <BDPRouterPluginDelegate, AWEOpenURLMessage, AWEWebViewLoadTaskMessage, WXApiDelegate, BDPContainerLifeCycleMessage>

@property (copy, nonatomic) id /* block */ closeWebViewBlock;
@property (copy, nonatomic) id /* block */ adWebViewLoadFinishBlk;
@property (copy, nonatomic) NSString *verifyAppId;
@property (copy, nonatomic) id /* block */ verifyBlk;
@property (copy, nonatomic) id /* block */ payResultBlk;
@property (retain, nonatomic) BDXBridgeEventSubscriber *paySubscriber;
@property (copy, nonatomic) id /* block */ payCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)handleViewWillAppear:(id)a0 containerVC:(id)a1;
+ (void)handleViewDidDisappear:(id)a0 containerVC:(id)a1;

- (BOOL)transferToURLString:(id)a0;
- (BOOL)canOpenURLString:(id)a0;
- (void)onResp:(id)a0;
- (BOOL)transferToURLStringWithFormat:(id)a0;
- (void)adWebViewDidFinishLoadWithWebViewController:(id)a0;
- (void)adWebViewDidFailLoadWithWebViewController:(id)a0 error:(id)a1;
- (void)didOpenURL:(id)a0 sourceApplication:(id)a1 annotation:(id)a2;
- (void)registerSubscribes;
- (void)unregisterSubscribers;
- (void)bdp_openSchemaAndCloseGameWithUniqueID:(id)a0 URL:(id)a1 userInfo:(id)a2 completion:(id /* block */)a3;
- (void)viewWillAppear:(id)a0 uniqueID:(id)a1;
- (void)viewDidDisappear:(id)a0 uniqueID:(id)a1;
- (void)closeWebViewNotification:(id)a0;
- (void)syncCertificationStatusHandler:(id)a0;
- (BOOL)bdp_openSchemaWithURL:(id)a0 userInfo:(id)a1 appID:(id)a2;
- (BOOL)bdp_openSchemaWithURL:(id)a0 userInfo:(id)a1 appID:(id)a2 error:(id *)a3;
- (void)tryEventIMEnterChat:(id)a0;
- (void)bdp_openLoadFailedPageForChannel:(long long)a0 schema:(id)a1 appID:(id)a2 closeHandler:(id /* block */)a3;
- (BOOL)openAdWebUrlWithParam:(id)a0 appID:(id)a1;
- (BOOL)openOtherWithParam:(id)a0 appID:(id)a1;
- (id)bdp_loadFailedPageForChannel:(long long)a0 schema:(id)a1 appID:(id)a2 loadFinishBlock:(id /* block */)a3;
- (id)adWebUrlWithParam:(id)a0;
- (void)eventAdWebViewOpenWithParams:(id)a0;
- (id)otherWebViewUrlWithParam:(id)a0;
- (void)bdp_openLoadFailedPageForNonODRWithParams:(id)a0 schema:(id)a1 appID:(id)a2 closeHandler:(id /* block */)a3;
- (BOOL)bdp_openCustomerServiceWithWebURLString:(id)a0 extraInfo:(id)a1 appID:(id)a2;
- (BOOL)bdp_checkSidebarScene;
- (void)bdp_navigateToVideoWithParam:(id)a0 appID:(id)a1 completion:(id /* block */)a2;
- (void)__registerPlayletPaymentStatusChange;
- (BOOL)bdp_openSchemaWithURL:(id)a0 userInfo:(id)a1;
- (BOOL)bdp_canOpenLoadFailedPageForChannel:(long long)a0 schema:(id)a1;
- (void)bdp_openLoadFailedPageForChannel:(long long)a0 schema:(id)a1 closeHandler:(id /* block */)a2;
- (id)bdp_loadFailedPageForChannel:(long long)a0 schema:(id)a1 loadFinishBlock:(id /* block */)a2;
- (BOOL)bdp_openCustomerServiceWithWebURLString:(id)a0 extraInfo:(id)a1;
- (void)bdp_navigateToVideoWithParam:(id)a0 completion:(id /* block */)a1;
- (BOOL)bdp_openIMCustomerService:(id)a0;
- (void)bdp_openAppAndReopenGameWithUniqueID:(id)a0 URL:(id)a1 completion:(id /* block */)a2;
- (void)bdp_openGameDetailInfoWithUniqueID:(id)a0;
- (void)bdp_navigateToScene:(id)a0 uniqueID:(id)a1 url:(id)a2 completion:(id /* block */)a3;
- (void)bdp_openUrl:(id)a0 params:(id)a1 fromH5:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)bdp_openUserProfile:(id)a0 appID:(id)a1;
- (void)bdp_openLoadFailedPageForIndustryWithParams:(id)a0 schema:(id)a1 appID:(id)a2 closeHandler:(id /* block */)a3;
- (void)bdp_navigateToRealNamePageWithParam:(id)a0 appID:(id)a1 completion:(id /* block */)a2;
- (void)bdp_navigateToDPPageWithParam:(id)a0 appID:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)handleOpenURL:(id)a0;

@end
