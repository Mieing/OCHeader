@class NSString;

@interface SECWebLoaderPlugin : IWKPluginObject <IWKClassPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)secplugin_enablePlugins;

- (id)webViewWillDealloc:(id)a0;
- (id)webView:(id)a0 loadRequest:(id)a1;
- (id)webView:(id)a0 willInitWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 configuration:(id)a2;
- (id)webView:(id)a0 didInitWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 configuration:(id)a2;
- (id)webView:(id)a0 loadData:(id)a1 MIMEType:(id)a2 characterEncodingName:(id)a3 baseURL:(id)a4;
- (id)webView:(id)a0 loadFileURL:(id)a1 allowingReadAccessToURL:(id)a2;
- (id)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (id)uniqueID;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
