@class NSString;

@interface AWEFeedTemplateAnchorXiGuaConfig : AWEFeedTemplateAnchorBaseConfig <BDXPopupEventProtocol, BDXHostNavigationProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handlerTemplateAnchorViewClicked;
- (id)trackerCommonParamsForTemplateAnchor;
- (void)bdxPushViewController:(id)a0 animated:(BOOL)a1;
- (void)bdxPresentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)popup:(id)a0 willChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withDuration:(double)a3;
- (void)popup:(id)a0 didDragTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)popupDidCloseWithContainer:(id)a0 params:(id)a1;
- (id)addAdEventParamsWith:(id)a0;
- (id)addShrinkStyleParamsWith:(id)a0;
- (id)xiguaSubPageTypeString;

@end
