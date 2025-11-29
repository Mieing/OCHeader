@class FWFInstanceManager;
@protocol FlutterBinaryMessenger;

@interface FWFNavigationDelegateFlutterApiImpl : FWFWKNavigationDelegateFlutterApi

@property (weak, nonatomic) id<FlutterBinaryMessenger> binaryMessenger;
@property (weak, nonatomic) FWFInstanceManager *instanceManager;

- (id)initWithBinaryMessenger:(id)a0 instanceManager:(id)a1;
- (long long)identifierForDelegate:(id)a0;
- (void)didFinishNavigationForDelegate:(id)a0 webView:(id)a1 URL:(id)a2 completion:(id /* block */)a3;
- (void)didStartProvisionalNavigationForDelegate:(id)a0 webView:(id)a1 URL:(id)a2 completion:(id /* block */)a3;
- (void)decidePolicyForNavigationActionForDelegate:(id)a0 webView:(id)a1 navigationAction:(id)a2 completion:(id /* block */)a3;
- (void)didFailNavigationForDelegate:(id)a0 webView:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)didFailProvisionalNavigationForDelegate:(id)a0 webView:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)webViewWebContentProcessDidTerminateForDelegate:(id)a0 webView:(id)a1 completion:(id /* block */)a2;
- (void)didReceiveAuthenticationChallengeForDelegate:(id)a0 webView:(id)a1 challenge:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
