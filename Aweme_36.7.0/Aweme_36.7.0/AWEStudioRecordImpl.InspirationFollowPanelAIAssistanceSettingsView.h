@interface AWEStudioRecordImpl.InspirationFollowPanelAIAssistanceSettingsView : UIView <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ isShowing;
    void /* unknown type, empty encoding */ $__lazy_storage_$_baseSettingsPopupView;
    void /* unknown type, empty encoding */ commonTrackParams;
    void /* unknown type, empty encoding */ aiMainSwitchTitle;
    void /* unknown type, empty encoding */ autoCaptureStateTitle;
    void /* unknown type, empty encoding */ autoCaptureMomentTitle;
    void /* unknown type, empty encoding */ actionAssistTitle;
    void /* unknown type, empty encoding */ pitchAssistanceTitle;
    void /* unknown type, empty encoding */ $__lazy_storage_$_popoverIconView;
    void /* unknown type, empty encoding */ subSettingsViews;
    void /* unknown type, empty encoding */ firstAnimator;
    void /* unknown type, empty encoding */ isAnimating;
    void /* unknown type, empty encoding */ anchorRect;
    void /* unknown type, empty encoding */ dataUpdateClosure;
    void /* unknown type, empty encoding */ dismissClosure;
    void /* unknown type, empty encoding */ swipeUpClosure;
    void /* unknown type, empty encoding */ hintViewStateChangeClosure;
    void /* unknown type, empty encoding */ showToastClosure;
    void /* unknown type, empty encoding */ settingsInfo;
    void /* unknown type, empty encoding */ enterFromPage;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)accessibilityPerformEscape;
- (void)handleSwipe:(id)a0;

@end
