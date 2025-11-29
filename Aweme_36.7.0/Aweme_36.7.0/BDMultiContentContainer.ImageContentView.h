@interface BDMultiContentContainer.ImageContentView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ zoomDelegate;
    void /* unknown type, empty encoding */ isPinchZoomable;
    void /* unknown type, empty encoding */ contentSizeChangeBlock;
    void /* unknown type, empty encoding */ needMoveToCenterWhenMagnify;
    void /* unknown type, empty encoding */ isZoomScrollViewMovedToScreenCenter;
    void /* unknown type, empty encoding */ zoomBeginScale;
    void /* unknown type, empty encoding */ zoomScaleWhenZoomBounce;
    void /* unknown type, empty encoding */ containerViewRectInWindowWhenZoomBounce;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pinchGesture;
    void /* unknown type, empty encoding */ imageContentView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingBackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_emptyImageView;
    void /* unknown type, empty encoding */ hasExeDraggingMethod;
    void /* unknown type, empty encoding */ lottieFilePath;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_zoomScrollView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentView;
    void /* unknown type, empty encoding */ isInFullPage;
    void /* unknown type, empty encoding */ multiContentMode;
    void /* unknown type, empty encoding */ lastFrame;
}

- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)handlePinch:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
