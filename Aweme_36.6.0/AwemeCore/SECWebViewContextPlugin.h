@class NSString;

@interface SECWebViewContextPlugin : NSObject <SECWebViewPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webViewWillDealloc:(id)a0;
- (void)webView:(id)a0 didLoadContext:(id)a1;
- (void)webView:(id)a0 changedURLFrom:(id)a1 toURL:(id)a2;
- (void)webview:(id)a0 willHandlerMessageWithContext:(id)a1;
- (void)webview:(id)a0 didCallbackWithContext:(id)a1;
- (void)generateBPEAPageContext:(id)a0;

@end
