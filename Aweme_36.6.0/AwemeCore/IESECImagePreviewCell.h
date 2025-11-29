@class IESECUIImageView, NSString, UIScrollView, UITapGestureRecognizer;
@protocol IESECImagePreviewCellDelegate;

@interface IESECImagePreviewCell : UICollectionViewCell <UIScrollViewDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) IESECUIImageView *imageView;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapGesture;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) BOOL coverImageViewDidZoom;
@property (weak, nonatomic) id<IESECImagePreviewCellDelegate> delegate;
@property (nonatomic) BOOL scaleToFillWidth;
@property (nonatomic) BOOL scrollToTop;
@property (nonatomic) BOOL previewOpt;
@property (nonatomic) BOOL isTransiting;
@property (nonatomic) double whScale;
@property (nonatomic) long long index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithURLList:(id)a0 placeholder:(id)a1 placeholderView:(id)a2 atIndexPath:(id)a3 enterFrom:(unsigned long long)a4;
- (void)resetScrollViewAllVisualState;
- (void)configImageViewWithSuperResolution:(id)a0 byURLArray:(id)a1 placeholder:(id)a2 bizTag:(id)a3 originSize:(struct CGSize { double x0; double x1; })a4 completion:(id /* block */)a5;
- (void)updateImageViewConstraintWhenHasSliceBottom:(double)a0 height:(double)a1;
- (void)updateImageViewConstraint:(double)a0 height:(double)a1;
- (void)zoomToPointInImageView:(struct CGPoint { double x0; double x1; })a0 scale:(double)a1 completion:(id /* block */)a2;
- (struct CGSize { double x0; double x1; })visualSizeWhenFit;
- (double)fitZoomScaleForBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (double)maximumZoomScaleWithMinimumZoomScale:(double)a0;
- (void)updateScrollViewMaximumZoomScaleWithMinimumZoomScale:(double)a0;
- (void)centerImageWithZoomScale:(double)a0;
- (void)updateScrollViewMinMaxZoomScale;
- (void)updateScrollViewContentInset;
- (void)defaultZoomAndCenterImage;
- (void)updateWithURLList:(id)a0 placeholderView:(id)a1 atIndexPath:(id)a2 enterFrom:(unsigned long long)a3;
- (id)viewForZoomingInScrollView:(id)a0;
- (double)minimumZoomScale;
- (void)scrollViewDidZoom:(id)a0;
- (void)doubleTap:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithImage:(id)a0;
- (double)defaultZoomScale;

@end
