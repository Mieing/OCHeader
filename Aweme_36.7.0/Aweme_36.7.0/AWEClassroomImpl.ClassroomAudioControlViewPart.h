@interface AWEClassroomImpl.ClassroomAudioControlViewPart : UIView {
    void /* unknown type, empty encoding */ player;
    void /* unknown type, empty encoding */ isLoop;
    void /* unknown type, empty encoding */ panMoveDistance;
    void /* unknown type, empty encoding */ currentSpeed;
    void /* unknown type, empty encoding */ currentHalfScreenSpeedIndex;
    void /* unknown type, empty encoding */ sliderBeganTime;
    void /* unknown type, empty encoding */ isHightLightMode;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fullScreenSpeedModelArray;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playedDurationTitle;
    void /* unknown type, empty encoding */ $__lazy_storage_$_totalDurationTitle;
    void /* unknown type, empty encoding */ $__lazy_storage_$_slider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fastForward;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fastBackward;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loopButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_speedButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_speedBottomView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_singleTapRecognizer;
}

- (void)handleSpeedButtonWithSender:(id)a0;
- (void)handleFastForwardButtonWithSender:(id)a0;
- (void)handleFastBackwardButtonWithSender:(id)a0;
- (void)handleLoopButtonWithSender:(id)a0;
- (void)sliderTouchDidBegan;
- (void)sliderValueDidChange;
- (void)sliderValueDidEnd;
- (void)didSingleTapControlView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
