@class NSString;

@interface WCAccountSecurityCenterLogic : WCAccountBaseControlLogic <MMWebViewDelegate>

@property (retain, nonatomic) NSString *rid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLogic;
- (id)getLoginViewNameDeepLink:(id)a0 Url:(id)a1;
- (void)webViewReturn:(id)a0;
- (BOOL)canAccessDeepLink:(id)a0 Url:(id)a1 Webview:(id)a2;
- (void)accessDeepLink:(id)a0 Url:(id)a1 Webview:(id)a2;
- (void).cxx_destruct;

@end
