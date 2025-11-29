@interface WBSDKAuthorizeWebViewController : WBSDKBasicWebViewController

- (id)fixedUrlStringFromURL:(id)a0 withSplitString:(id)a1;
- (void)authorizeDidFinishWithResponseCode:(long long)a0 info:(id)a1;
- (id)urlRequestFromWeiboSDKRequest:(id)a0 andExtraPara:(id)a1;
- (void)wbsdk_webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)viewDidLoad;

@end
