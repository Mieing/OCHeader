@interface FlowKit.MessagingInputBelowContainerComponent : FlowCommon.TightCouplingComponent <FlowKit.MessagingListViewEventListener> {
    void /* unknown type, empty encoding */ _mediaElevateComponent;
    void /* unknown type, empty encoding */ _UGCRecommendComponent;
    void /* unknown type, empty encoding */ descendantContainerEnable;
    void /* unknown type, empty encoding */ descendantScrollEnable;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentProvider;
    void /* unknown type, empty encoding */ containerViewTopOffset;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ _viewController;
    void /* unknown type, empty encoding */ customBottomInset;
    void /* unknown type, empty encoding */ originBottomInset;
    void /* unknown type, empty encoding */ resetDampOffset;
    void /* unknown type, empty encoding */ maxOffsetY;
    void /* unknown type, empty encoding */ checkBounce;
    void /* unknown type, empty encoding */ inputHeight;
    void /* unknown type, empty encoding */ inputGradientColor;
    void /* unknown type, empty encoding */ hasExposureContainer;
    void /* unknown type, empty encoding */ containerEnable;
    void /* unknown type, empty encoding */ scrollEnable;
    void /* unknown type, empty encoding */ feedbackGenerator;
    void /* unknown type, empty encoding */ shouldFeedback;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
}

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)conifigUpdatedNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
