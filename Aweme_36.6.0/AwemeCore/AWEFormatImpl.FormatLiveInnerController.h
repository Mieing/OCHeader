@interface AWEFormatImpl.FormatLiveInnerController : AWEFormatImpl.BaseComponentController <AWEFormatLiveInnerRoomTransitionProtocol> {
    void /* unknown type, empty encoding */ cleanScreenService;
    void /* unknown type, empty encoding */ outerTransitionProtocol;
    void /* unknown type, empty encoding */ outerContext;
    void /* unknown type, empty encoding */ isLeaving;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tipsTag;
    void /* unknown type, empty encoding */ $__lazy_storage_$_errorView;
}

- (void)transition_didPopDoneTransitionWithContext:(id)a0;
- (void)willLeaveInnerRoomFromSwipe;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
