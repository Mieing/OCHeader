@class NSString;

@interface AWEWebViewModuleService : HTSService <AWEWebViewModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)secUrlString;
+ (id)getInjectionJavaScriptWithAdID:(id)a0;
+ (id)registeredParamsMap;
+ (id)createAdWebViewControllerIfNeededWithURL:(id)a0 paramsDict:(id)a1;
+ (BOOL)transferAdWebViewControllerIfNeeded:(id)a0;
+ (id)createDouPlusLiveWebViewController:(id)a0 queryItems:(id)a1;
+ (id)createEnterpriseWebViewController:(id)a0 queryItems:(id)a1;

- (id)aweWebViewConfig;
- (BOOL)enableFalcon;
- (BOOL)forbidDeeplinkFromThirdPartyWithURL:(id)a0;
- (BOOL)canOpenAppStoreWithURL:(id)a0;
- (id)adLynxAccessKey;
- (id)adLynxPageAccessKeyNew;
- (BOOL)enableLynxGurdPreloadWithModel:(id)a0;
- (BOOL)enableWebViewPreloadWithModel:(id)a0;
- (void)preloadWithModelListIfNeeded:(id)a0;
- (BOOL)enableWebViewPreRenderWithModel:(id)a0;
- (id)fetchPreRenderedWebViewViewController;
- (id)fetchPreRenderWebViewWithRequestURL:(id)a0;
- (long long)preloadStatusOfModel:(id)a0;
- (BOOL)isURLPreRendered:(id)a0;
- (void)setupWebViewPreloadWithModelIfNeeded:(id)a0;
- (void)preRenderWebViewWithURLString:(id)a0 title:(id)a1 model:(id)a2;
- (BOOL)removePreRenderIfNeededWithURLString:(id)a0;
- (id)defaultPrecreator;
- (id)fetchThirdPreloadWebViewWithURLString:(id)a0;
- (BOOL)isThirdPreloadURLString:(id)a0;
- (void)removePreloadWebView;
- (void)trackOpenAdLandingPageFromScanWithURL:(id)a0;
- (BOOL)isAdShortLinkSchemaString:(id)a0;
- (id)remakeScanDeepLinkURLForAdWebViewIfNeed:(id)a0;
- (void)unwrapAdShortURLSchemaString:(id)a0 completion:(id /* block */)a1;
- (id)removeTransferSchemeParamWithSourceString:(id)a0 params:(id)a1;
- (void)trackExternalLinkClickEventWithRefer:(id)a0 eventName:(id)a1 queryDict:(id)a2;
- (id)lynxLandingPageGeckoAccessKey;
- (id)preloadWebViewTrackJsTag:(id)a0;
- (BOOL)webIntercept;
- (id)webURLParamDictWithRouterURLString:(id)a0;
- (void)trackShortURLToLongURLSuccessWithURL:(id)a0;
- (void)removeAllPreloadForAdLightLanding;
- (BOOL)isKindOfAdWebViewController:(id)a0;

@end
