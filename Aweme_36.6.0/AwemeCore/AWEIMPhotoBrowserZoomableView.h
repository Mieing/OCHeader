@class NSString, UIImageView, UIActivityIndicatorView, PHAsset, NSIndexPath, UITapGestureRecognizer;
@protocol AWEIMPhotoBrowserZoomableViewDelegate;

@interface AWEIMPhotoBrowserZoomableView : UIScrollView <AWEIMPhotoBrowserZoomableViewProtocol, UIScrollViewDelegate>

@property (retain, nonatomic) UIActivityIndicatorView *indicatorView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *backImageView;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *singleTapGestureRecognizer;
@property (weak, nonatomic) id<AWEIMPhotoBrowserZoomableViewDelegate> zoomableDelegate;
@property (readonly, nonatomic) PHAsset *asset;
@property (nonatomic) BOOL enableHeightFirst;
@property (nonatomic) BOOL gestureDisable;
@property (nonatomic) BOOL enableSizeEqual;
@property (nonatomic) BOOL disableChangeLayout;
@property (nonatomic) double forceOffesetY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setImageLayout:(id)a0;
- (void)setImageToImageView:(id)a0;
- (id)currentDisplayView;
- (struct CGSize { double x0; double x1; })p_resizeFromSize:(struct CGSize { double x0; double x1; })a0 toWidth:(double)a1;
- (void)p_setImage:(id)a0;
- (id)p_getPHImageRequestOptions;
- (void)singleTapped:(id)a0;
- (struct CGSize { double x0; double x1; })p_resizeFromSize:(struct CGSize { double x0; double x1; })a0 toHeight:(double)a1;
- (void)setMaxMinZoomScalesForCurrentBounds;
- (void)updateStaticImage;
- (void)updateThumbnailStaticImage:(id /* block */)a0;
- (id)p_getThumbnailPHImageRequestOptions;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)setAsset:(id)a0;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)updateContentView;
- (void)setImage:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleSingleTap:(struct CGPoint { double x0; double x1; })a0;
- (void)reset;
- (void)handleDoubleTap:(struct CGPoint { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)setupViews;
- (void)longPressed:(id)a0;
- (void)doubleTapped:(id)a0;
- (void)p_setImageData:(id)a0;

@end
