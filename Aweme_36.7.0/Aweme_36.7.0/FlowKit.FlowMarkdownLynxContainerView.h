@interface FlowKit.FlowMarkdownLynxContainerView : FlowKit.FlowMarkdownBaseContainerView <IvyKit.IvyPluginViewLifeCycle> {
    void /* unknown type, empty encoding */ source;
    void /* unknown type, empty encoding */ getCurrentMessageBlock;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ templateURL;
    void /* unknown type, empty encoding */ pluginView;
    void /* unknown type, empty encoding */ templateLoaded;
    void /* unknown type, empty encoding */ messageID;
    void /* unknown type, empty encoding */ cardId;
}

- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)viewDidCreateWithView:(id)a0;
- (void)viewDidChangeIntrinsicContentSizeWithView:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)viewDidFirstScreenWithView:(id)a0;
- (void)viewDidFinishLoadWithURLWithView:(id)a0 url:(id)a1;
- (void)viewDidLoadFailedWithURLWithView:(id)a0 url:(id)a1 error:(id)a2;
- (void)viewDidUpdateWithView:(id)a0;
- (void)viewWillDeallocWithView:(id)a0;
- (void)viewDidPageUpdateWithView:(id)a0;
- (void)viewDidReceiveErrorWithView:(id)a0 error:(id)a1;
- (void)updateDarkModeTheme;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
