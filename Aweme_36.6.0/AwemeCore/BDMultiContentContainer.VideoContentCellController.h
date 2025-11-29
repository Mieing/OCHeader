@interface BDMultiContentContainer.VideoContentCellController : BDMultiContentContainer.BaseDefaultContentCellController <BDMultiContentContainer.BaseDefaultContentZoomDelegate> {
    void /* unknown type, empty encoding */ trackerDelegate;
    void /* unknown type, empty encoding */ currentCell;
}

- (void)zoomScrollViewWillBeginZooming;
- (void)zoomScrollViewDidEndZooming;
- (void)zoomScrollViewWillBeginDragging;
- (void)configCell:(id)a0;
- (void)willDisplayCell:(id)a0;
- (void)didEndDisplayingCell:(id)a0;
- (void)zoomInfoDidChangeWithZoomInfo:(id)a0;
- (void)zoomScrollViewWillBeginZoomBouncingWithBounceType:(long long)a0 beginScale:(double)a1 currentScale:(double)a2;
- (void)zoomDidEndDragingWithCurrentScale:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (Class)cellClass;

@end
