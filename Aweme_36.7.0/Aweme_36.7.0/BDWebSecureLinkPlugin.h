@class NSString;

@interface BDWebSecureLinkPlugin : IWKPluginObject <IWKInstancePlugin>

@property (retain, nonatomic) NSString *wrapingLink;
@property (nonatomic) int aid;
@property (retain, nonatomic) NSString *scene;
@property (retain, nonatomic) NSString *lang;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configSecureLinkDomain:(id)a0;
+ (id)URLString:(id)a0 appendCommonParams:(id)a1;
+ (void)updateCustomSettingModel:(id)a0;
+ (void)injectToWebView:(id)a0 withAid:(int)a1 scene:(id)a2 lang:(id)a3;
+ (void)secureGoBackOneStep:(id)a0 reachEndBlock:(id /* block */)a1;
+ (void)configGlobalSecureLinkDomain:(id)a0;
+ (void)secureGoBackStepByStep:(id)a0 reachEndBlock:(id /* block */)a1;

- (id)webView:(id)a0 loadRequest:(id)a1;
- (BOOL)compareLinkIsEqual:(id)a0 with:(id)a1;
- (void)asyncRequreSecureLinkCheck:(id)a0 webView:(id)a1 flag:(BOOL)a2;
- (BOOL)switchOnFirstRequestSecureCheck:(id)a0 withScene:(id)a1;
- (void)postSeclinkRiskNotification:(id)a0 risk:(long long)a1 showMidPage:(long long)a2 webview:(id)a3 extraInfo:(id)a4;
- (BOOL)isUrlInWhiteList:(id)a0 webView:(id)a1;
- (unsigned long long)checkUrlSecurityInCache:(id)a0 webView:(id)a1;
- (id)wrapSecureLinkWithOriUrl:(id)a0;
- (id)addQueryBizParams:(id)a0 url:(id)a1;
- (id)loadLink:(id)a0 withWebView:(id)a1;
- (id)errorMsgForError:(id)a0;
- (void)requestSecureCheck:(id)a0 webView:(id)a1 flag:(BOOL)a2 handleBlock:(id /* block */)a3;
- (BOOL)shouldStrictModeCheck:(id)a0 withScene:(id)a1;
- (void)strictSyncRequreSecureLinkCheck:(id)a0 webView:(id)a1 navigationResponse:(id)a2 flag:(BOOL)a3 decisionHandler:(id /* block */)a4;
- (BOOL)shouldSyncSecureLinkCheck:(id)a0 withScene:(id)a1;
- (void)syncRequreSecureLinkCheck:(id)a0 webView:(id)a1 navigationResponse:(id)a2 flag:(BOOL)a3 decisionHandler:(id /* block */)a4;
- (void)handleSecureLinkCheck:(id)a0 oriUrl:(id)a1 risk:(long long)a2 showMidPage:(BOOL)a3 needPopPreviousPage:(BOOL)a4;
- (void)checkAndFireHandlerIfNeededFrom:(id)a0 decidePolicyForNavigationResponse:(id)a1 forceReloadToSecurePage:(id)a2;
- (void)bindHandleBlock:(id /* block */)a0 toWebView:(id)a1;
- (id)getInjectParamsWithWebView:(id)a0 url:(id)a1;
- (void)postResponseNotification:(id)a0 error:(id)a1 webview:(id)a2;
- (id /* block */)fetchAndCleanDecisionHandlerFromWebView:(id)a0;
- (id)wrapQuickMiddlePage:(id)a0 risk:(int)a1;
- (id)reloadSecureWrapWithOriUrl:(id)a0 webView:(id)a1;
- (void)handleDangerOrGrayUrl:(id)a0 isDanger:(BOOL)a1 webView:(id)a2 needPopPreviousPage:(BOOL)a3 risk:(long long)a4;
- (void).cxx_destruct;
- (long long)priority;
- (id)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (id)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (id)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (id)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (id)getScene;

@end
