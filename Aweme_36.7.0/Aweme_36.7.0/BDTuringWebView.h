@class NSString, WKWebView, UIActivityIndicatorView;
@protocol BDTuringWebViewDelegate;

@interface BDTuringWebView : UIView <WKNavigationDelegate>

@property (retain, nonatomic) WKWebView *webView;
@property (retain, nonatomic) UIActivityIndicatorView *indicatorView;
@property (weak, nonatomic) id<BDTuringWebViewDelegate> delegate;
@property (nonatomic) BOOL loadingSuccess;
@property (nonatomic) long long startLoadTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopLoadingView;
- (void)hideVerifyView;
- (void)showVerifyView;
- (void)dismissVerifyView;
- (void)startLoadingView;
- (void)scheduleDismissVerifyView;
- (id)createIndicatorView;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (id)controller;
- (void).cxx_destruct;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)dealloc;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)loadWebView;

@end
