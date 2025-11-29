@interface FlowKitBizUI.MessageMenuItemView : UIView {
    void /* unknown type, empty encoding */ clickBlock;
    void /* unknown type, empty encoding */ data;
    void /* unknown type, empty encoding */ isHiddenSplit;
    void /* unknown type, empty encoding */ isHiddenSwitch;
    void /* unknown type, empty encoding */ isSwitchOn;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ $__lazy_storage_$_iconImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rightSwitch;
    void /* unknown type, empty encoding */ $__lazy_storage_$_splitLine;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentView;
}

- (void)switchDidChange;
- (void)tapView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
