@class WCFinderAnimationLoadingView, NSString, YYWKWebView, UIImageView, UIView, MMUIButton, UILabel;

@interface WCFinderWebViewActionSheet : WCActionSheet <WKNavigationDelegate>

@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) MMUIButton *acceptBtn;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (nonatomic) unsigned long long loadType;
@property (retain, nonatomic) YYWKWebView *h5WebView;
@property (retain, nonatomic) UIImageView *retryImageView;
@property (retain, nonatomic) UILabel *retryLabel;
@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) NSString *ruleUrl;
@property (copy, nonatomic) id /* block */ clickAcceptBlock;
@property (copy, nonatomic) id /* block */ clickCancelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)heightOfWholeSheet;
- (double)getCustomView:(double)a0;
- (id)getTipsActionSheetView;
- (void)onClickCancelBtn;
- (void)onClickAcceptBtn;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)onClickRetry:(id)a0;
- (void).cxx_destruct;

@end
