@class NSString;

@interface SECWebViewSessionPlugin : NSObject <SECWebViewPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 prepareLoaderContext:(id)a1;
- (void)webView:(id)a0 changedURLFrom:(id)a1 toURL:(id)a2;
- (void)webview:(id)a0 willHandlerMessageWithContext:(id)a1;
- (void)webview:(id)a0 willCallbackWithContext:(id)a1;
- (void)webview:(id)a0 didCallbackWithContext:(id)a1;
- (void)generateNewSessionForWebView:(id)a0 fromOldURL:(id)a1 toNewURL:(id)a2;
- (long long)priority;

@end
