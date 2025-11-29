@interface FlowKit.EncryptionInfoTipsPanel : UIView {
    void /* unknown type, empty encoding */ syncTipMode;
    void /* unknown type, empty encoding */ forceToRoot;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ safeArea;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ iconButton;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ descLabel;
    void /* unknown type, empty encoding */ confirmButton;
    void /* unknown type, empty encoding */ laterButton;
    void /* unknown type, empty encoding */ closeButton;
    void /* unknown type, empty encoding */ fromVC;
}

- (void)handleGestureAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)confirmAction;

@end
