@interface RingDancingButton : UIButton {
    void /* unknown type, empty encoding */ text;
    void /* unknown type, empty encoding */ imageWidth;
    void /* unknown type, empty encoding */ leftRigntMargin;
    void /* unknown type, empty encoding */ centerSpace;
    void /* unknown type, empty encoding */ textFont;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textWidth;
}

- (void)pauseAnimation;
- (void)resumeAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
