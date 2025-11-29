@interface FlowKitBizUI.MessageLynxCell : FlowKitBizUI.MessageCell <IvyKit.IvyPluginViewLifeCycle> {
    void /* unknown type, empty encoding */ heightChangedCallback;
    void /* unknown type, empty encoding */ fetchCardDetailHandler;
    void /* unknown type, empty encoding */ onViewDidFinishLoadWithURL;
    void /* unknown type, empty encoding */ onPrepareForReuse;
    void /* unknown type, empty encoding */ viewWillStartLoading;
    void /* unknown type, empty encoding */ viewOnSetup;
    void /* unknown type, empty encoding */ viewOnError;
    void /* unknown type, empty encoding */ modelIdentifier;
    void /* unknown type, empty encoding */ pluginView;
    void /* unknown type, empty encoding */ templateLoaded;
    void /* unknown type, empty encoding */ templateURL;
    void /* unknown type, empty encoding */ botId;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_failedView;
}

- (void)updateDarkModeTheme;
- (void)viewDidCreateWithView:(id)a0;
- (void)viewDidChangeIntrinsicContentSizeWithView:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)viewDidFirstScreenWithView:(id)a0;
- (void)viewDidFinishLoadWithURLWithView:(id)a0 url:(id)a1;
- (void)viewDidLoadFailedWithURLWithView:(id)a0 url:(id)a1 error:(id)a2;
- (void)viewDidUpdateWithView:(id)a0;
- (void)viewWillDeallocWithView:(id)a0;
- (void)viewDidPageUpdateWithView:(id)a0;
- (void)viewDidReceiveErrorWithView:(id)a0 error:(id)a1;
- (void)handleKeyboard;
- (void)fetchCardDetail;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;

@end
