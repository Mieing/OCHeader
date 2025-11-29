@class NSString;

@interface WBSDKComposerWebViewController : WBSDKBasicWebViewController <WBHttpRequestDelegate>

@property (nonatomic) BOOL isCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)wbsdk_webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)postImageToServer;
- (id)defaultParaDictsForRequest;
- (id)compressImage:(id)a0;
- (void)shardDidFinishWithResponseInfo:(id)a0;
- (void)request:(id)a0 didFinishLoadingWithResult:(id)a1;
- (void)startWebViewRequest;
- (void)request:(id)a0 didFailWithError:(id)a1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end
