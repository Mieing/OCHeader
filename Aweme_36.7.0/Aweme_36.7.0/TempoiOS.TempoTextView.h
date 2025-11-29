@interface TempoiOS.TempoTextView : UILabel <NSObject> {
    void /* unknown type, empty encoding */ animationName;
    void /* unknown type, empty encoding */ animationGroup;
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ firstRending;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ attributes;
    void /* unknown type, empty encoding */ gradientColorString;
    void /* unknown type, empty encoding */ padding;
}

- (void).cxx_destruct;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
