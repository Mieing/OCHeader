@interface WebviewJSEventHandler_openGameUrlWithExtraWebView : WebviewJSEventHandlerBase

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)openLiteWitInfo:(id)a0 liteAppParam:(id)a1 liteVc:(id)a2 transParentLiteApp:(BOOL)a3;
- (void)handleJumpInfo:(id)a0 paramDict:(id)a1 event:(id)a2;
- (id)getWebViewController:(id)a0 dic:(id)a1 statusBarBgColor:(id)a2 statusBarStyle:(id)a3 toUrl:(id)a4;
- (void)presntTransparrentLiteViewController:(id)a0;
- (void)openWebview:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (BOOL)analyzeBackColor:(id *)a0 frontColor:(id *)a1 fromUrl:(id)a2 andParamColor:(id)a3 andParamStyle:(id)a4 isUseImmersiveUI:(BOOL *)a5;

@end
