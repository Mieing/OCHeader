@class BDASifSecurityManager, UIView;
@protocol BDXWebViewProtocol;

@interface BDASifWebViewController : BDASifBaseViewController

@property (retain, nonatomic) UIView<BDXWebViewProtocol> *bdx_webview;
@property (retain, nonatomic) BDASifSecurityManager *securityManager;

- (void)addSecurity;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;

@end
