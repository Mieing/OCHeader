@interface FlowKit.MessagingContinuousSpeakView : UIView {
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _accessProvider;
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ voiceCallTimeLimitTimer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voiceCallTimeLimit;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voiceCallTimeLimitCountDown;
    void /* unknown type, empty encoding */ hasEnterFirstListening;
    void /* unknown type, empty encoding */ enterPageTime;
    void /* unknown type, empty encoding */ meterAnimator;
    void /* unknown type, empty encoding */ cancellableSet;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ $__lazy_storage_$_feedbackGenerator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_useFullScreenBackground;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fullScreenContentView;
    void /* unknown type, empty encoding */ fullScreenBackgroundView;
    void /* unknown type, empty encoding */ fullScreenAnimator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fullScreenGradientView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fullScreenGradientLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_actionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cameraButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_endCallButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_muteButton;
    void /* unknown type, empty encoding */ muteUpdateItem;
    void /* unknown type, empty encoding */ muteShowEnoughTime;
    void /* unknown type, empty encoding */ hasInitializeView;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;

@end
