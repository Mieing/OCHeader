@class NSObject;
@protocol FlutterBinaryMessenger;

@interface FWFWKUIDelegateFlutterApi : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;

- (id)initWithBinaryMessenger:(id)a0;
- (void)onCreateWebViewForDelegateWithIdentifier:(long long)a0 webViewIdentifier:(long long)a1 configurationIdentifier:(long long)a2 navigationAction:(id)a3 completion:(id /* block */)a4;
- (void)requestMediaCapturePermissionForDelegateWithIdentifier:(long long)a0 webViewIdentifier:(long long)a1 origin:(id)a2 frame:(id)a3 type:(id)a4 completion:(id /* block */)a5;
- (void)runJavaScriptAlertPanelForDelegateWithIdentifier:(long long)a0 message:(id)a1 frame:(id)a2 completion:(id /* block */)a3;
- (void)runJavaScriptConfirmPanelForDelegateWithIdentifier:(long long)a0 message:(id)a1 frame:(id)a2 completion:(id /* block */)a3;
- (void)runJavaScriptTextInputPanelForDelegateWithIdentifier:(long long)a0 prompt:(id)a1 defaultText:(id)a2 frame:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;

@end
