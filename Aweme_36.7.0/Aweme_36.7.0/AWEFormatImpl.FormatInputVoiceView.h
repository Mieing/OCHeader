@interface AWEFormatImpl.FormatInputVoiceView : UIView {
    void /* unknown type, empty encoding */ meterAnimator;
    void /* unknown type, empty encoding */ volume;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ voiceInputGesture;
    void /* unknown type, empty encoding */ countdownTime;
    void /* unknown type, empty encoding */ isHandsfreeEnabled;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ timerTickedCount;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shadowView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voiceInputMaskView;
    void /* unknown type, empty encoding */ touchBeginTime;
    void /* unknown type, empty encoding */ countdownIsHandsfreeOnly;
    void /* unknown type, empty encoding */ isInputViewAnimating;
    void /* unknown type, empty encoding */ isCancelState;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ updateDuration;
}

- (void)handleVoiceInputButtonLongPress:(id)a0;
- (void)inputViewAnimationWithShow:(BOOL)a0;
- (void)voiceInputStop;
- (void)voiceInputCancel;
- (void)timerTicked;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
