@interface DanceUILottie.AnimatedControl : UIControl {
    void /* unknown type, empty encoding */ animationView;
    void /* unknown type, empty encoding */ animation;
    void /* unknown type, empty encoding */ stateMap;
}

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL highlighted;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void).cxx_destruct;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)cancelTrackingWithEvent:(id)a0;
- (BOOL)isSelected;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (id)init;
- (BOOL)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEnabled;

@end
