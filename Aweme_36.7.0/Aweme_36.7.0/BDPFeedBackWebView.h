@class NSString, BDPUniqueID;
@protocol BDPFeedBackWebViewDelegate;

@interface BDPFeedBackWebView : BDPBridgeWebView <BDPWebViewImplInterface, WKNavigationDelegate, BDPBridgeInstanceProtocol>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (weak, nonatomic) id<BDPFeedBackWebViewDelegate> feedBackWebDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)callbackInvoke:(long long)a0 data:(id)a1;
- (void)evaluateScript:(id)a0 completion:(id /* block */)a1;
- (void)webView:(id)a0 invoke:(id)a1 completion:(id /* block */)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 uniqueID:(id)a1;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;

@end
