@class UIView, NSString, NSArray, UIImage, UIImageView, BDImageView, AWEPOIDetailPhotoBaseInfo, AWEPOIDetailPhotosPreviewBaseViewController, UIScrollView;
@protocol AWEUILoadingViewProtocol;

@interface AWEPOIDetailPhotosPreviewCollectionViewCell : UICollectionViewCell <UIScrollViewDelegate, AWEPOIDetailPhotosPreviewBaseCellProtocol>

@property (retain, nonatomic) UIImage *thumbnailImage;
@property (nonatomic) BOOL hdImageLoaded;
@property (retain, nonatomic) UIView<AWEUILoadingViewProtocol> *loadingView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) double previousScale;
@property (retain, nonatomic) UIImageView *watermarkImageView;
@property (copy, nonatomic) NSArray *thumbnailURLs;
@property (retain, nonatomic) AWEPOIDetailPhotoBaseInfo *photo;
@property (retain, nonatomic) BDImageView *imageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) AWEPOIDetailPhotosPreviewBaseViewController *vc;

- (id)zoomTransitionEndView;
- (void)p_setImgViewFrameAfterSetImg;
- (struct CGSize { double x0; double x1; })p_resizeImageSize:(struct CGSize { double x0; double x1; })a0 viewSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_alignPictureWithImgSize:(struct CGSize { double x0; double x1; })a0;
- (void)setMaxZoomScalesForCurrentBounds;
- (void)setThumbnailURLs:(id)a0 imageURLs:(id)a1;
- (void)setupScrollViewWithPreviewsScale:(double)a0 contentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)resetLoadingView;
- (void)updateWithPhotoInfo:(id)a0;
- (void)setImage:(id)a0 watermarkImage:(id)a1;
- (void)updateWatermarkConstraints;
- (void)updateImageViewWithThumbURLs:(id)a0 imageURLs:(id)a1;
- (void)didUpdateScollViewWithZoomScale:(double)a0 contentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)showLoadingView;

@end
