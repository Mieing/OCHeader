@interface AWEStudioEditImpl.EditorZoomablePaintBoardView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ boardView;
    void /* unknown type, empty encoding */ mosaicView;
    void /* unknown type, empty encoding */ tapGesture;
    void /* unknown type, empty encoding */ tapGestureAction;
    void /* unknown type, empty encoding */ tapGestureShouleBeginBlock;
    void /* unknown type, empty encoding */ willBeginZoomAction;
    void /* unknown type, empty encoding */ didEndZoomAction;
    void /* unknown type, empty encoding */ maskContainerView;
    void /* unknown type, empty encoding */ contoursAnimationView;
    void /* unknown type, empty encoding */ mosaicPaintEnabled;
    void /* unknown type, empty encoding */ magnifierViewEnabled;
    void /* unknown type, empty encoding */ validTouchObserver;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ imageViewInitialSize;
    void /* unknown type, empty encoding */ $__lazy_storage_$_magnifierView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_brushTrackBorderView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_brushPreviewBorderView;
}

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)tapAction:(id)a0;

@end
