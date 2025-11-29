@interface LOTAnimatedSwitch : LOTAnimatedControl {
    double _onStartProgress;
    double _onEndProgress;
    double _offStartProgress;
    double _offEndProgress;
    struct CGPoint { double x; double y; } _touchTrackingStart;
    BOOL _suppressToggle;
    BOOL _toggleToState;
}

@property (nonatomic, getter=isOn) BOOL on;
@property (nonatomic) BOOL interactiveGesture;

+ (id)switchNamed:(id)a0 inBundle:(id)a1;
+ (id)switchNamed:(id)a0;

- (void)setAnimationComp:(id)a0;
- (void)_toggleAndSendActions;
- (void)setProgressRangeForOnState:(double)a0 toProgress:(double)a1;
- (void)setProgressRangeForOffState:(double)a0 toProgress:(double)a1;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setOn:(BOOL)a0 animated:(BOOL)a1;
- (id)accessibilityValue;
- (void)_toggle;

@end
