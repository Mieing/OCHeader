@interface Hero.HeroDebugView : UIView <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ debugSlider;
    void /* unknown type, empty encoding */ perspectiveButton;
    void /* unknown type, empty encoding */ doneButton;
    void /* unknown type, empty encoding */ arcCurveButton;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ panGR;
    void /* unknown type, empty encoding */ pinchGR;
    void /* unknown type, empty encoding */ showControls;
    void /* unknown type, empty encoding */ showOnTop;
    void /* unknown type, empty encoding */ rotation;
    void /* unknown type, empty encoding */ scale;
    void /* unknown type, empty encoding */ translation;
    void /* unknown type, empty encoding */ startRotation;
    void /* unknown type, empty encoding */ startLocation;
    void /* unknown type, empty encoding */ startTranslation;
    void /* unknown type, empty encoding */ startScale;
}

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)pan;
- (void)pinch;
- (void)onDone;
- (void)onPerspective;
- (void)onDisplayArcCurve;
- (void)onSlide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
