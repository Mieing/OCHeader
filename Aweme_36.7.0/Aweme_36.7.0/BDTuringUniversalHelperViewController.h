@class NSDictionary, WKWebView;
@protocol BDTuringUniversalViewHelperPiperDelegate;

@interface BDTuringUniversalHelperViewController : UIViewController

@property (retain, nonatomic) WKWebView *webView;
@property (weak, nonatomic) id<BDTuringUniversalViewHelperPiperDelegate> delegate;
@property (copy, nonatomic) NSDictionary *jsbParams;

- (void)handleNativeEventUpload:(id)a0 callback:(id /* block */)a1;
- (void)showWebViewWithURL:(id)a0 title:(id)a1;
- (void)updateLayoutForSize:(struct CGSize { double x0; double x1; })a0;
- (void)installPiper:(id)a0;
- (void)closeHelperViewController;
- (void)handleWebViewFail:(id)a0;
- (void)handlePiperWebResult:(id)a0 callback:(id /* block */)a1;
- (void)handlePiperCloseWeb:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (void)showViewController:(id)a0;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (BOOL)shouldAutorotate;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)viewWillDisappear:(BOOL)a0;
- (void)closeButtonTapped;

@end
