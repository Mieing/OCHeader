@interface FlowVoiceInputBizUI.BasicInputVoiceView : UIView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ voiceInputGesture;
    void /* unknown type, empty encoding */ continuousSpeakAction;
    void /* unknown type, empty encoding */ isEnterContinuousSpeak;
    void /* unknown type, empty encoding */ countdownTime;
    void /* unknown type, empty encoding */ isHandsfreeEnabled;
    void /* unknown type, empty encoding */ continuousSpeakShowOnInputAsr;
    void /* unknown type, empty encoding */ tapGestureViewMask;
    void /* unknown type, empty encoding */ continuousSpeaktapGesture;
    void /* unknown type, empty encoding */ $__lazy_storage_$_timer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shadowView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundView;
    void /* unknown type, empty encoding */ titleView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voiceInputMaskView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voiceToCompleteMaskView;
    void /* unknown type, empty encoding */ countdownIsHandsfreeOnly;
    void /* unknown type, empty encoding */ isInputViewAnimating;
    void /* unknown type, empty encoding */ isVibrationTriggered;
    void /* unknown type, empty encoding */ isOtherAudioPlaying;
    void /* unknown type, empty encoding */ $__lazy_storage_$_audioAsrVibrateTwice;
    void /* unknown type, empty encoding */ $__lazy_storage_$_longPressFeedbackImpactStyle;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subtitleAlignmentHorizontal;
    void /* unknown type, empty encoding */ isHandsFree;
}

- (void)resetVibrationTrigger;
- (void)handleVoiceInputButtonLongPress:(id)a0;
- (void)inputViewAnimationWithShow:(BOOL)a0;
- (void)handleContinuousSpeakAction;
- (void)inputViewVoiceToCompleteMaskViewAnimationWithShow:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
