@class IESLiveBackgroundView, UIImageView, NSString, UIScrollView, UIView;

@interface IESLiveAnchorPictureAirPlayPreView : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) IESLiveBackgroundView *backgroundView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL backgroundImageLoaded;
@property (nonatomic) struct CGPoint { double x; double y; } lastContentOffset;
@property (nonatomic) double lastZoomScale;
@property (copy, nonatomic) id /* block */ makeSnapshotImageBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadBackgroundImageWithURLs:(id)a0;
- (void)layoutImageViewToCenter;
- (void)updateImageView:(id)a0;
- (void)resetUIParams;
- (void)makeSnapshotImageIfNeeded;
- (id)defaultBackgroundImage;
- (void)scrollViewDidStopScroll;
- (void)scrollViewDidStopZoom;
- (struct CGSize { double x0; double x1; })aspectScaleSize:(struct CGSize { double x0; double x1; })a0 toTargetWidth:(double)a1;
- (void)updateAirPlayImage:(id)a0;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)setContentUserInteractionEnabled:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleDoubleTap:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setMaximumZoomScale:(double)a0;
- (void)setupUI;
- (void)setupLayout;

@end
