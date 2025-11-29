@class NSString, UIActivityIndicatorView, WKWebView, UIButton;
@protocol FBSDKWebDialogViewDelegate;

@interface FBSDKWebDialogView : UIView <WKNavigationDelegate> {
    UIButton *_closeButton;
    UIActivityIndicatorView *_loadingView;
    WKWebView *_webView;
}

@property (weak, nonatomic) id<FBSDKWebDialogViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)loadURL:(id)a0;
- (void)stopLoading;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_close:(id)a0;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;

@end
