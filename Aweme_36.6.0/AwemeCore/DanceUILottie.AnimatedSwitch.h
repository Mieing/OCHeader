@interface DanceUILottie.AnimatedSwitch : DanceUILottie.AnimatedControl {
    void /* unknown type, empty encoding */ cancelBehavior;
    void /* unknown type, empty encoding */ animateUpdateWhenChangingAnimation;
    void /* unknown type, empty encoding */ stateUpdated;
    void /* unknown type, empty encoding */ onStartProgress;
    void /* unknown type, empty encoding */ onEndProgress;
    void /* unknown type, empty encoding */ offStartProgress;
    void /* unknown type, empty encoding */ offEndProgress;
    void /* unknown type, empty encoding */ hapticGenerator;
    void /* unknown type, empty encoding */ _isOn;
}

@property (nonatomic) unsigned long long accessibilityTraits;

- (void).cxx_destruct;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
