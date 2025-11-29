@class NSString, AWESearchWebTranscodeContainerContext;
@protocol AWESearchWebTranscodeBussinessProtocol;

@interface AWESearchWebTranscodeContainer : NSObject <AWESearchWebTranscodeContainerProtocol>

@property (retain, nonatomic) AWESearchWebTranscodeContainerContext *context;
@property (retain, nonatomic) id<AWESearchWebTranscodeBussinessProtocol> bussiness;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)webViewWillDealloc:(id)a0;
- (id)webView:(id)a0 loadRequest:(id)a1;
- (id)webView:(id)a0 loadData:(id)a1 MIMEType:(id)a2 characterEncodingName:(id)a3 baseURL:(id)a4;
- (id)webView:(id)a0 loadHTMLString:(id)a1 baseURL:(id)a2;
- (id)transcodingManager;
- (id)currentTranscodingManager;
- (void)updateWithContainerContext:(id)a0;
- (void)webViewOnLoad:(id)a0;
- (id)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (id)webView:(id)a0 didCommitNavigation:(id)a1;
- (id)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (id)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (id)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (id)webView:(id)a0 didStartProvisionalNavigation:(id)a1;

@end
