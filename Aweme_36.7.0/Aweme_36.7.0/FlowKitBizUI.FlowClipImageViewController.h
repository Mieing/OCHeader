@interface FlowKitBizUI.FlowClipImageViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ cancelClipAnimateFrame;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ viewDidAppearCount;
    void /* unknown type, empty encoding */ originalImage;
    void /* unknown type, empty encoding */ editImage;
    void /* unknown type, empty encoding */ editRect;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_overlayView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gridPanGes;
    void /* unknown type, empty encoding */ topActionContainer;
    void /* unknown type, empty encoding */ topMaskView;
    void /* unknown type, empty encoding */ bottomMaskView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cancelBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_doneBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rotateBtn;
    void /* unknown type, empty encoding */ shouldLayout;
    void /* unknown type, empty encoding */ panEdge;
    void /* unknown type, empty encoding */ beginPanPoint;
    void /* unknown type, empty encoding */ clipBoxFrame;
    void /* unknown type, empty encoding */ clipOriginFrame;
    void /* unknown type, empty encoding */ isAnimate;
    void /* unknown type, empty encoding */ rotationAngle;
    void /* unknown type, empty encoding */ $__lazy_storage_$_maxClipFrame;
    void /* unknown type, empty encoding */ minClipSize;
    void /* unknown type, empty encoding */ resetTimer;
    void /* unknown type, empty encoding */ animateDismiss;
    void /* unknown type, empty encoding */ clipDoneBlock;
    void /* unknown type, empty encoding */ cancelClipBlock;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fakeAnimateImageView;
}

@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@property (nonatomic, readonly) BOOL prefersHomeIndicatorAutoHidden;
@property (nonatomic, readonly) unsigned long long preferredScreenEdgesDeferringSystemGestures;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)flow_trackParametersWith:(id)a0;
- (void)cancelBtnClick;
- (void)doneBtnClick;
- (void)rotateBtnClick;
- (void)gridGesPanAction:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)endEditing;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;

@end
