@interface FlowKit.FlowDeepResearchBaseViewController : FlowCommon.FlowBaseViewController <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ showingTopBanner;
    void /* unknown type, empty encoding */ lastPositionY;
    void /* unknown type, empty encoding */ menu;
    void /* unknown type, empty encoding */ $__lazy_storage_$_directionUtil;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_longPressGesture;
    void /* unknown type, empty encoding */ $__lazy_storage_$_retryView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationBar;
    void /* unknown type, empty encoding */ topBanner;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollView;
}

- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)handleScrollViewPan:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)longPressRecognized:(id)a0;

@end
