@interface BDMultiContentContainer.ImageContentCellController : BDMultiContentContainer.BaseDefaultContentCellController <BDMultiContentContainer.BaseDefaultContentZoomDelegate, NSObject> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_preloadManager;
    void /* unknown type, empty encoding */ trackerDelegate;
    void /* unknown type, empty encoding */ currentCell;
    void /* unknown type, empty encoding */ loadImageStatus;
    void /* unknown type, empty encoding */ thumbnailImageLoadDuration;
    void /* unknown type, empty encoding */ loadImageDuration;
    void /* unknown type, empty encoding */ imageLoadFinishTime;
    void /* unknown type, empty encoding */ imageTransformer;
    void /* unknown type, empty encoding */ loadImageError;
    void /* unknown type, empty encoding */ willDisplayStartTime;
    void /* unknown type, empty encoding */ imageLoadStartTime;
    void /* unknown type, empty encoding */ imageLoadDuration;
    void /* unknown type, empty encoding */ loadImageUrl;
    void /* unknown type, empty encoding */ blurHashLoadFinishTime;
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
