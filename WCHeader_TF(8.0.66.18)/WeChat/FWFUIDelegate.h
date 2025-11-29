@class NSString, FWFUIDelegateFlutterApiImpl;

@interface FWFUIDelegate : FWFObject <WKUIDelegate>

@property (readonly, nonatomic) FWFUIDelegateFlutterApiImpl *UIDelegateAPI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBinaryMessenger:(id)a0 instanceManager:(id)a1;
- (id)webView:(id)a0 createWebViewWithConfiguration:(id)a1 forNavigationAction:(id)a2 windowFeatures:(id)a3;
- (void)webView:(id)a0 requestMediaCapturePermissionForOrigin:(id)a1 initiatedByFrame:(id)a2 type:(long long)a3 decisionHandler:(id /* block */)a4;
- (void)webView:(id)a0 runJavaScriptAlertPanelWithMessage:(id)a1 initiatedByFrame:(id)a2 completionHandler:(id /* block */)a3;
- (void)webView:(id)a0 runJavaScriptConfirmPanelWithMessage:(id)a1 initiatedByFrame:(id)a2 completionHandler:(id /* block */)a3;
- (void)webView:(id)a0 runJavaScriptTextInputPanelWithPrompt:(id)a1 defaultText:(id)a2 initiatedByFrame:(id)a3 completionHandler:(id /* block */)a4;
- (void).cxx_destruct;

@end
