@class NSString, BDPUniqueID;

@interface BDPModalWebView_HG : BDPBridgeWebView <BDPWebViewImplInterface, WKNavigationDelegate, BDPNavigationControllerGestureRecognizeBreaker>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) long long zIndex;
@property (copy, nonatomic) id /* block */ publishCallBack;
@property (copy, nonatomic) id /* block */ loadFailedCallBack;
@property (copy, nonatomic) id /* block */ loadSuccessfulCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)callbackInvoke:(long long)a0 data:(id)a1;
- (void)webView:(id)a0 invoke:(id)a1 completion:(id /* block */)a2;
- (void)webView:(id)a0 publish:(id)a1 completion:(id /* block */)a2;
- (void)subscribeHandler:(id)a0 data:(id)a1;
- (void)addRootNaviGestureDelegate;
- (void)setupUserAgent:(id)a0;
- (void)removeRootNaviGestureDelegate;
- (BOOL)shouldHandleNavi:(id)a0 gestureRecognizer:(id)a1 otherGestureRecognizer:(id)a2 withHandleResult:(BOOL *)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1 uniqueID:(id)a2;
- (BOOL)isASubviewOfBDPModalWebView_HG:(id)a0;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (id)webView:(id)a0 createWebViewWithConfiguration:(id)a1 forNavigationAction:(id)a2 windowFeatures:(id)a3;
- (void)dealloc;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;

@end
