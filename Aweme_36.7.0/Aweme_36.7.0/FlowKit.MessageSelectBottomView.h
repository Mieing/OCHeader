@interface FlowKit.MessageSelectBottomView : UIView {
    void /* unknown type, empty encoding */ _settingProvider;
    void /* unknown type, empty encoding */ onConfirm;
    void /* unknown type, empty encoding */ viewHeight;
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ lineView;
    void /* unknown type, empty encoding */ selectConfirmBtn;
    void /* unknown type, empty encoding */ selectTipView;
    void /* unknown type, empty encoding */ selectedMarkIcon;
    void /* unknown type, empty encoding */ selectedTipLabel;
    void /* unknown type, empty encoding */ bottomButtonHeight;
    void /* unknown type, empty encoding */ tipTopPadding;
    void /* unknown type, empty encoding */ backgroundTopPadding;
}

- (void)onConfirmButtonTapped;
- (void)onTipTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
