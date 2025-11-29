@class NSString;

@interface BDWebURLSchemeHandler : NSObject <WKURLSchemeHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)webview:(id)a0 recordForMainFrame:(id)a1;
- (void)webView:(id)a0 startURLSchemeTask:(id)a1;
- (void)webView:(id)a0 stopURLSchemeTask:(id)a1;

@end
