@class NSString, UIImageView, UIImage, UILabel, UIScrollView, AWEUILoadingView;
@protocol AWEPhotosPreviewCollectionViewCellDelegate;

@interface AWEPhotosPreviewCollectionViewCell : UICollectionViewCell <UIScrollViewDelegate>

@property (retain, nonatomic) UIImage *thumbnailImage;
@property (retain, nonatomic) UILabel *watermarkLabel;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) BOOL hdImageLoaded;
@property (nonatomic) double previousScale;
@property (retain, nonatomic) UIImageView *imageView;
@property (weak, nonatomic) id<AWEPhotosPreviewCollectionViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setThumbnailURLs:(id)a0 imageURLs:(id)a1 watermark:(id)a2;
- (void)setThumbnailURLs:(id)a0 imageURLs:(id)a1 watermark:(id)a2 imageReqConfig:(id)a3;
- (void)loadImageWithImageManagerThumbnailURLs:(id)a0 imageURLs:(id)a1 watermark:(id)a2 config:(id)a3;
- (void)loadImageWithImageViewThumbnailURLs:(id)a0 imageURLs:(id)a1 watermark:(id)a2;
- (void)p_setImgViewFrameAfterSetImg;
- (void)updateWatermarkLabelConstraints;
- (struct CGSize { double x0; double x1; })p_resizeImageSize:(struct CGSize { double x0; double x1; })a0 viewSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_alignPictureWithImgSize:(struct CGSize { double x0; double x1; })a0;
- (void)setMaxZoomScalesForCurrentBounds;
- (void)setThumbnailURLs:(id)a0 imageURLs:(id)a1;
- (void)setupScrollViewWithPreviewsScale:(double)a0 contentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
