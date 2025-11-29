@interface FlowKit.DYVideoFeedController : FlowCommon.FlowBaseViewController {
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ player;
    void /* unknown type, empty encoding */ forceSyncCurrentIndexToAnimator;
    void /* unknown type, empty encoding */ initalIndex;
    void /* unknown type, empty encoding */ maxPlayIndex;
    void /* unknown type, empty encoding */ currentPlayIndex;
    void /* unknown type, empty encoding */ itemIdList;
    void /* unknown type, empty encoding */ playTimes;
    void /* unknown type, empty encoding */ stayBeginDate;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomLoadView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_coverImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_expandSliderView;
}

- (void)onMultiNetworkStateChanged:(id)a0;
- (void)handleEnterBackgroud:(id)a0;
- (void)handleEnterForegroud:(id)a0;
- (void)closeBtnClick;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
