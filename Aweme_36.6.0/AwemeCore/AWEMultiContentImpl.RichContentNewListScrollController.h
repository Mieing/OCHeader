@interface AWEMultiContentImpl.RichContentNewListScrollController : BDMultiContentContainer.BaseContentListScrollController <AWEPageSnapControllerDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_concernLeftPanGuideView;
    void /* unknown type, empty encoding */ startDraggingContentOffset;
    void /* unknown type, empty encoding */ velocityThresholdX;
    void /* unknown type, empty encoding */ scrollNextBoundedRatio;
    void /* unknown type, empty encoding */ scrollPreviousBoundedRatio;
}

- (struct CGPoint { double x0; double x1; })customTargetContentOffsetWithScrollingVelocity:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)init;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;

@end
