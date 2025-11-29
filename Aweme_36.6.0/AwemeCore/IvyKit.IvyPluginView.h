@interface IvyKit.IvyPluginView : UIView <BDXContainerLifecycleProtocol> {
    void /* unknown type, empty encoding */ container;
    void /* unknown type, empty encoding */ lynxView;
    void /* unknown type, empty encoding */ webView;
    void /* unknown type, empty encoding */ lifecycleDelegate;
}

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)containerWillDestory:(id)a0;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)container:(id)a0 didStartLoadingFailedWithUrl:(id)a1;
- (void)containerDidFirstScreen:(id)a0;
- (void)containerDidUpdate:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
