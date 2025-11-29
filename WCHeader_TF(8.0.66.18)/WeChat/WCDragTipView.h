@class UIView;

@interface WCDragTipView : MMUIView {
    UIView *_tipView;
}

- (id)init;
- (void)commmtInit;
- (void)layoutSubviews;
- (void)onCloseGoldenCmarmaTip;
- (void)animatedHide;
- (void)innerHide;
- (void).cxx_destruct;

@end
