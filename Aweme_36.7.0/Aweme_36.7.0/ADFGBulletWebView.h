@class BDXContext, NSString, NSURL, UIView, ADFGWebViewBridgeEngine;
@protocol ADFGBulletWebViewDelegate, BDXViewContainerProtocol;

@interface ADFGBulletWebView : UIView <WKNavigationDelegate, BDXContainerLifecycleProtocol>

@property (retain, nonatomic) ADFGWebViewBridgeEngine *adfg_engine;
@property (retain, nonatomic) BDXContext *context;
@property (retain, nonatomic) NSURL *currentUrl;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bdxView;
@property (weak, nonatomic) id<ADFGBulletWebViewDelegate> slaveDelates;
@property (copy, nonatomic) id /* block */ didStopLoadingBlock;
@property (copy, nonatomic) id /* block */ closeContainerBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareProcessPool;

- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)container:(id)a0 didStartLoadingFailedWithUrl:(id)a1;
- (void)container:(id)a0 didRecieveError:(id)a1;
- (void)adfg_installBridgeEngine:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1 url:(id)a2;
- (void)adfg_uninstallBridgeEngine;
- (void)createBulletWebViewWithUrl:(id)a0;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)dealloc;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;

@end
