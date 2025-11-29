@interface FlowCommon.FlowAlertView : UIView {
    void /* unknown type, empty encoding */ _appInfoProvider;
    void /* unknown type, empty encoding */ width;
    void /* unknown type, empty encoding */ maxHeight;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ messageLabel;
    void /* unknown type, empty encoding */ buttonNumLimt;
    void /* unknown type, empty encoding */ maskBackgroundColor;
    void /* unknown type, empty encoding */ forceMessageCenter;
    void /* unknown type, empty encoding */ enableBackgroundCancel;
    void /* unknown type, empty encoding */ backgroundCancelHandler;
    void /* unknown type, empty encoding */ bgView;
    void /* unknown type, empty encoding */ textContentView;
    void /* unknown type, empty encoding */ mainContentScrollView;
    void /* unknown type, empty encoding */ buttonScrollView;
    void /* unknown type, empty encoding */ buttons;
    void /* unknown type, empty encoding */ actions;
    void /* unknown type, empty encoding */ verticalSepLine;
    void /* unknown type, empty encoding */ verticalLayout;
    void /* unknown type, empty encoding */ multiIndicatorView;
}

- (void)actionButtonClicked:(id)a0;
- (void)backgroundViewClicked:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
