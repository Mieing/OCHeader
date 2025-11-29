@class FWFInstanceManager, FWFWebViewConfigurationFlutterApiImpl;
@protocol FlutterBinaryMessenger;

@interface FWFUIDelegateFlutterApiImpl : FWFWKUIDelegateFlutterApi

@property (weak, nonatomic) id<FlutterBinaryMessenger> binaryMessenger;
@property (weak, nonatomic) FWFInstanceManager *instanceManager;
@property (readonly, nonatomic) FWFWebViewConfigurationFlutterApiImpl *webViewConfigurationFlutterApi;

- (id)initWithBinaryMessenger:(id)a0 instanceManager:(id)a1;
- (long long)identifierForDelegate:(id)a0;
- (void)onCreateWebViewForDelegate:(id)a0 webView:(id)a1 configuration:(id)a2 navigationAction:(id)a3 completion:(id /* block */)a4;
- (void)requestMediaCapturePermissionForDelegateWithIdentifier:(id)a0 webView:(id)a1 origin:(id)a2 frame:(id)a3 type:(long long)a4 completion:(id /* block */)a5;
- (void)runJavaScriptAlertPanelForDelegateWithIdentifier:(id)a0 message:(id)a1 frame:(id)a2 completionHandler:(id /* block */)a3;
- (void)runJavaScriptConfirmPanelForDelegateWithIdentifier:(id)a0 message:(id)a1 frame:(id)a2 completionHandler:(id /* block */)a3;
- (void)runJavaScriptTextInputPanelForDelegateWithIdentifier:(id)a0 prompt:(id)a1 defaultText:(id)a2 frame:(id)a3 completionHandler:(id /* block */)a4;
- (void).cxx_destruct;

@end
