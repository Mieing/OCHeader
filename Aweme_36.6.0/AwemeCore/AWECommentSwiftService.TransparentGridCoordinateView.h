@interface AWECommentSwiftService.TransparentGridCoordinateView : UIView {
    void /* unknown type, empty encoding */ gridCount;
    void /* unknown type, empty encoding */ lineColor;
    void /* unknown type, empty encoding */ lineWidth;
    void /* unknown type, empty encoding */ textColor;
    void /* unknown type, empty encoding */ textFont;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
