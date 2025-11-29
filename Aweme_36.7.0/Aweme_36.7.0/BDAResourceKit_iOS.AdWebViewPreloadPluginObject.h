@interface BDAResourceKit_iOS.AdWebViewPreloadPluginObject : IWKPluginObject <IWKInstancePlugin> {
    void /* unknown type, empty encoding */ preloadTask;
}

@property (nonatomic, readonly) long long priority;

- (id)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)webView:(id)a0 didStartProvisionalNavigation:(id)a1;

@end
