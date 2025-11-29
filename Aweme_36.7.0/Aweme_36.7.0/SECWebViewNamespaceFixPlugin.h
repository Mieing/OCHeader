@class NSString;

@interface SECWebViewNamespaceFixPlugin : NSObject <SECWebViewPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webview:(id)a0 willHandlerMessageWithContext:(id)a1;
- (long long)priority;

@end
