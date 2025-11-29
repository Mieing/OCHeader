@class CJPayWKWebView, NSString;

@interface CJPaySimpleHalfScreenWebViewController : CJPayHalfPageBaseViewController <WKNavigationDelegate>

@property (retain, nonatomic) CJPayWKWebView *webView;
@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) id /* block */ didTapCloseButtonBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUrlString:(id)a0;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (double)containerHeight;
- (void)back;

@end
