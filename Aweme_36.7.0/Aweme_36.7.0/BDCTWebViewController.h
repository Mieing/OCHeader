@class NSString, UILabel;

@interface BDCTWebViewController : BDCTDisablePanGestureViewController <WKNavigationDelegate, WKUIDelegate>

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) UILabel *titleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUrl:(id)a0 title:(id)a1;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)webView:(id)a0 createWebViewWithConfiguration:(id)a1 forNavigationAction:(id)a2 windowFeatures:(id)a3;
- (void)viewDidLoad;

@end
