@interface AFDPureModePageVisionSearchElement : AFDBaseElement <AFDElementHostLifeCycle> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_visionSearchButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_boxView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_isFirstAppear;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shouldShowAnimation;
    void /* unknown type, empty encoding */ $__lazy_storage_$_elementIsShowing;
    void /* unknown type, empty encoding */ $__lazy_storage_$_animaitionText;
    void /* unknown type, empty encoding */ $__lazy_storage_$_animaitionTextSize;
    void /* unknown type, empty encoding */ lastTrackVisionSearchButtonClickedTime;
    void /* unknown type, empty encoding */ $__lazy_storage_$_abTestConfig;
    void /* unknown type, empty encoding */ searchIntentDataIntent;
    void /* unknown type, empty encoding */ searchIntentDataText;
}

- (void)host_setData:(id)a0;
- (void)host_viewWillAppear;
- (void)host_viewDidAppear;
- (void)host_viewDidDisappear;
- (void)elementContainerDidUpdate;
- (void)elementDidLoad;
- (void)visionSearchButtonClicked:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
