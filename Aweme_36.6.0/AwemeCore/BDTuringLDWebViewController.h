@class WKWebView;

@interface BDTuringLDWebViewController : UIViewController

@property (retain, nonatomic) WKWebView *webView;

- (void)showWebViewWithURL:(id)a0 title:(id)a1;
- (void)updateLayoutForSize:(struct CGSize { double x0; double x1; })a0;
- (void)showLDViewController:(id)a0;
- (void).cxx_destruct;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (BOOL)shouldAutorotate;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)closeButtonTapped;

@end
