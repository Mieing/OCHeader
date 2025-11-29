@class NSString;

@interface SECWebViewSessionCleanPlugin : NSObject <SECWebViewPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webViewWillDealloc:(id)a0;
- (void)webview:(id)a0 didCallbackWithContext:(id)a1;
- (long long)priority;

@end
