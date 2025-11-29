@interface AWEStudioRecordImpl.InspirationFloatingView : UIView <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ initialConfig;
    void /* unknown type, empty encoding */ limitEdgeInset;
    void /* unknown type, empty encoding */ initialSize;
    void /* unknown type, empty encoding */ initialCenter;
    void /* unknown type, empty encoding */ fitOriginFrame;
    void /* unknown type, empty encoding */ _currentScale;
    void /* unknown type, empty encoding */ minScale;
    void /* unknown type, empty encoding */ maxScale;
    void /* unknown type, empty encoding */ hasMovedLocation;
    void /* unknown type, empty encoding */ lastPinPoint;
    void /* unknown type, empty encoding */ beginPinFrame;
    void /* unknown type, empty encoding */ doublePreScale;
    void /* unknown type, empty encoding */ cancelable;
    void /* unknown type, empty encoding */ currentOrientation;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ originImageUrl;
    void /* unknown type, empty encoding */ $__lazy_storage_$_followImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gridView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_selectBounceView;
    void /* unknown type, empty encoding */ keyPointsDisplayView;
}

- (void)handleDoubleTap:(id)a0;
- (void)handlePinch:(id)a0;
- (void)handlePan:(id)a0;
- (void)handleTap:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)closeButtonClick;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)a0;

@end
