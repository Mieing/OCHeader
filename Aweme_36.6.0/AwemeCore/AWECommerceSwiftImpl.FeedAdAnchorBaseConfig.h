@interface AWECommerceSwiftImpl.FeedAdAnchorBaseConfig : AWEFeedTemplateAnchorBaseConfig <AWEBDARifleViewPopupEventProtocol> {
    void /* unknown type, empty encoding */ isLynxPopupFullScreen;
    void /* unknown type, empty encoding */ isLynxPopupDisAppear;
    void /* unknown type, empty encoding */ lynxPopupMaxHeight;
    void /* unknown type, empty encoding */ anchorConfigResetCallback;
    void /* unknown type, empty encoding */ videoPeriodHandler;
    void /* unknown type, empty encoding */ hasPreloaded;
}

- (void)handlerTemplateAnchorViewClicked;
- (void)anchorViewWillShowOnSuperview;
- (id)trackerParamsForTemplateAnchorShow;
- (id)trackerParamsForTemplateAnchorClick;
- (void)willOpenPopupView;
- (void)maskView:(id)a0;
- (void)rifleView:(id)a0 didEnterStatus:(unsigned long long)a1;
- (void)rifleView:(id)a0 closeWithParams:(id)a1;
- (void)loadFailed:(id)a0;
- (void)loadFinish:(id)a0;
- (void)handleViewDidAppear:(id)a0;
- (void)handleViewDidDisappear:(id)a0;
- (void)rifleView:(id)a0 didDragTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)shouldBusinessInvoke;
- (void)trackerForTemplateAnchorShow;
- (void)willShowDoubleLineStyleWithType:(unsigned long long)a0;
- (void)trackerForTemplateAnchorClick;
- (void)anchorConfigReset;
- (void).cxx_destruct;
- (id)init;
- (void)addObservers;

@end
