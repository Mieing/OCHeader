@interface AWEImageTextZoomPinchComponent : AWEImageTextBaseComponent <AWEImageTextPinchZoomComponentProtocol, AWEImageTextLifeCycleProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_pinchZoomTracker;
}

- (void)trackPinchZoomWithZoomType:(long long)a0;
- (id)getCurrentImageZoomInfoWrapper;
- (void)setCurrentImageZoomWrapperWithInfo:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)zoomCurrentImageToRatioRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(double)a1 animated:(BOOL)a2;
- (void)didBindSectionViewModel;
- (void)zoomScrollViewWillBeginZooming;
- (void)zoomScrollViewDidEndZooming;
- (id)registerProtocol;
- (void).cxx_destruct;
- (id)init;
- (id)initWithManager:(id)a0;

@end
