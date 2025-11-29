@class IESLLPOIDetailUGCPhotosPreviewScrollView, UIImageView, NSString, IESLLPOILoadingView, IESLLPOIDetailPhotosPreviewBaseViewController, IESLLPOIDetailPhotoBaseInfo;

@interface IESLLPOIDetailUGCPhotosPreviewCell : UICollectionViewCell <UIScrollViewDelegate, UIGestureRecognizerDelegate, IESLLPOIDetailPhotosPreviewBaseCellProtocol>

@property (retain, nonatomic) IESLLPOIDetailUGCPhotosPreviewScrollView *scrollView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) IESLLPOILoadingView *loadingView;
@property (retain, nonatomic) IESLLPOIDetailPhotoBaseInfo *photo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) IESLLPOIDetailPhotosPreviewBaseViewController *vc;

- (id)zoomTransitionEndView;
- (void)setMaxZoomScalesForCurrentBounds;
- (void)setupScrollViewWithPreviewsScale:(double)a0 contentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)updateWithPhotoInfo:(id)a0;
- (void)didUpdateScollViewWithZoomScale:(double)a0 contentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)layoutImageViewToCenter;
- (struct CGSize { double x0; double x1; })aspectFitWithImageSize:(struct CGSize { double x0; double x1; })a0 width:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignCenterWithImageSize:(struct CGSize { double x0; double x1; })a0;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
