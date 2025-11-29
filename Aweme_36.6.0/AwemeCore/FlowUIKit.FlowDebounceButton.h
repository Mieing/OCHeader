@interface FlowUIKit.FlowDebounceButton : UIButton {
    void /* unknown type, empty encoding */ debounceInterval;
    void /* unknown type, empty encoding */ lastActionInterval;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)sendAction:(SEL)a0 to:(id)a1 forEvent:(id)a2;

@end
