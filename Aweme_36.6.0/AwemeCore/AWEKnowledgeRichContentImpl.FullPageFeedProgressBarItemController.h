@interface AWEKnowledgeRichContentImpl.FullPageFeedProgressBarItemController : AWEKnowledgeSwiftBasic.FullPageBaseItemController <AWEFullPageFeedPageModeSensitiveComponentProtocol> {
    void /* unknown type, empty encoding */ progressBarView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dragHotZoneView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dragHighlightView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dragGuideManager;
    void /* unknown type, empty encoding */ referenceOriginX;
    void /* unknown type, empty encoding */ dragStartTime;
    void /* unknown type, empty encoding */ containerSwitchStepSize;
    void /* unknown type, empty encoding */ longPressMinimumPressDuration;
    void /* unknown type, empty encoding */ dragHotZoneSize;
    void /* unknown type, empty encoding */ dragHighlightViewSize;
    void /* unknown type, empty encoding */ isViewDisabled;
}

- (void)handleLongPressDrag:(id)a0;
- (void)onPageModeWillChange:(unsigned long long)a0;
- (double)getDeltaHeightWhenPageModeChange:(unsigned long long)a0;
- (void)executePageModeChangeAnimation:(unsigned long long)a0;
- (void)viewControllerDidAppear:(BOOL)a0;
- (void)configCellWithCell:(id)a0 viewModel:(id)a1;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (Class)cellClass;

@end
