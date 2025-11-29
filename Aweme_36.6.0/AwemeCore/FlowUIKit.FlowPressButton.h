@interface FlowUIKit.FlowPressButton : UIButton {
    void /* unknown type, empty encoding */ touchInsideAction;
    void /* unknown type, empty encoding */ previousColor;
    void /* unknown type, empty encoding */ pressColor;
}

- (void)buttonTouchDown;
- (void)buttonUnpressed;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
