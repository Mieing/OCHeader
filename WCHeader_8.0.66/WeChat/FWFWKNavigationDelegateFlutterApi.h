@class NSObject;
@protocol FlutterBinaryMessenger;

@interface FWFWKNavigationDelegateFlutterApi : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;

- (id)initWithBinaryMessenger:(id)a0;
- (void)didFinishNavigationForDelegateWithIdentifier:(long long)a0 webViewIdentifier:(long long)a1 URL:(id)a2 completion:(id /* block */)a3;
- (void)didStartProvisionalNavigationForDelegateWithIdentifier:(long long)a0 webViewIdentifier:(long long)a1 URL:(id)a2 completion:(id /* block */)a3;
- (void)decidePolicyForNavigationActionForDelegateWithIdentifier:(long long)a0 webViewIdentifier:(long long)a1 navigationAction:(id)a2 completion:(id /* block */)a3;
- (void)didFailNavigationForDelegateWithIdentifier:(long long)a0 webViewIdentifier:(long long)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)didFailProvisionalNavigationForDelegateWithIdentifier:(long long)a0 webViewIdentifier:(long long)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)webViewWebContentProcessDidTerminateForDelegateWithIdentifier:(long long)a0 webViewIdentifier:(long long)a1 completion:(id /* block */)a2;
- (void)didReceiveAuthenticationChallengeForDelegateWithIdentifier:(long long)a0 webViewIdentifier:(long long)a1 challengeIdentifier:(long long)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
