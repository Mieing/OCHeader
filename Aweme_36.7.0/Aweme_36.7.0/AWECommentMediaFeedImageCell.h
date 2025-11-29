@class AWEAwemeModel;

@interface AWECommentMediaFeedImageCell : UICollectionViewCell <UIScrollViewDelegate, AWECommentMediaFeedImageCellProtocol> {
    void /* unknown type, empty encoding */ imageSize;
    void /* unknown type, empty encoding */ initialZoomScale;
    void /* function */ pureModeBlock;
    void /* function */ livePhotoPlayControlBlock;
    void /* function */ doubleTapBlock;
    void /* function */ updateSmartBGColorBlock;
    void /* unknown type, empty encoding */ isPinchMode;
    void /* unknown type, empty encoding */ supportBeginZoom;
    void /* unknown type, empty encoding */ doubleTap;
    void /* unknown type, empty encoding */ zoomActionType;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imagePreviewView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollView;
}

@property (nonatomic) unsigned long long itemCount;
@property (nonatomic) unsigned long long index;
@property (nonatomic, retain) AWEAwemeModel *awemeModel;
@property (nonatomic, copy) id /* block */ pureModeBlock;
@property (nonatomic, copy) id /* block */ livePhotoPlayControlBlock;
@property (nonatomic, copy) id /* block */ doubleTapBlock;
@property (nonatomic, copy) id /* block */ updateSmartBGColorBlock;

- (void)didMoveToSuperview;
- (void)handleDoubleFingerLongPress:(id)a0;
- (void)doubleTapToZoomWithGes:(id)a0;
- (id)mediaContainerView;
- (BOOL)isSlideEdge:(BOOL)a0 isRight:(BOOL)a1;
- (void)recoverCellwithPureMode:(BOOL)a0;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)reloadPicture:(id)a0 commentCameraModel:(id)a1 miniSizeImage:(id)a2 fullSizeImage:(id)a3 livePhotoLocal:(id)a4 livePhotoLocalCover:(id)a5;
- (void)cellWillOffScreenFromHorizontal:(BOOL)a0;
- (void)cellDidOffScreenFromHorizontal:(BOOL)a0;
- (void)cellWillOnScreenFromHorizontal:(BOOL)a0;
- (void)cellDidOnScreenFromHorizontal:(BOOL)a0;
- (void)currentPreviewDidOnScreen;
- (void)currentPreviewDidOffScreen;
- (void)imagePreviewViewAppearState:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
