@interface AWECommentMediaFeedVideoCell : UICollectionViewCell <UIScrollViewDelegate, AWECommentMediaFeedVideoCellProtocol> {
    void /* function */ pureModeBlock;
    void /* function */ doubleTapBlock;
    void /* unknown type, empty encoding */ initialZoomScale;
    void /* unknown type, empty encoding */ isPinchMode;
    void /* unknown type, empty encoding */ supportBeginZoom;
    void /* unknown type, empty encoding */ doubleTap;
    void /* unknown type, empty encoding */ singleTap;
    void /* unknown type, empty encoding */ zoomActionType;
    void /* unknown type, empty encoding */ videoViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_videoContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollView;
}

@property (nonatomic) unsigned long long itemCount;
@property (nonatomic) unsigned long long index;
@property (nonatomic, copy) id /* block */ pureModeBlock;
@property (nonatomic, copy) id /* block */ doubleTapBlock;

- (void)doubleTapToZoomWithGes:(id)a0;
- (id)mediaContainerView;
- (BOOL)isSlideEdge:(BOOL)a0 isRight:(BOOL)a1;
- (void)recoverCellwithPureMode:(BOOL)a0;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)cellWillOffScreenFromHorizontal:(BOOL)a0;
- (void)cellDidOffScreenFromHorizontal:(BOOL)a0;
- (void)cellWillOnScreenFromHorizontal:(BOOL)a0;
- (void)cellDidOnScreenFromHorizontal:(BOOL)a0;
- (void)configAweme:(id)a0;
- (void)mediaFeedContainerViewWillAppear;
- (void)mediaFeedContainerViewWillDisappear;
- (void)mediaFeedContainerViewDidAppear;
- (void)mediaFeedContainerViewDidDisAppear;
- (void)actionForSingleTapWithGes:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
