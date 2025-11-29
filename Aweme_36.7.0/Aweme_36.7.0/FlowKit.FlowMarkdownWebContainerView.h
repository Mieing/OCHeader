@interface FlowKit.FlowMarkdownWebContainerView : FlowKit.FlowMarkdownBaseContainerView <IvyKit.IvyPluginViewLifeCycle> {
    void /* unknown type, empty encoding */ webView;
    void /* unknown type, empty encoding */ needLoad;
    void /* unknown type, empty encoding */ isLoading;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ _appInfoProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_errorView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lottie;
    void /* unknown type, empty encoding */ $__lazy_storage_$_handleTapView;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ source;
    void /* unknown type, empty encoding */ getCurrentMessageBlock;
    void /* unknown type, empty encoding */ markdownString;
}

- (void)viewDidCreateWithView:(id)a0;
- (void)viewDidChangeIntrinsicContentSizeWithView:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)viewDidFirstScreenWithView:(id)a0;
- (void)viewDidFinishLoadWithURLWithView:(id)a0 url:(id)a1;
- (void)viewDidLoadFailedWithURLWithView:(id)a0 url:(id)a1 error:(id)a2;
- (void)viewDidUpdateWithView:(id)a0;
- (void)viewWillDeallocWithView:(id)a0;
- (void)viewDidPageUpdateWithView:(id)a0;
- (void)viewDidReceiveErrorWithView:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)retry;
- (void)handleTap;

@end
