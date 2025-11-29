@class WCFinderFeedImageEffectView, UIPanGestureRecognizer, WCFinderMediaInfo, NSString, UIScrollView, WCFinderFeedImageView, WCFinderFeedMediaWrap;
@protocol WCFinderImageBrowserCellDelegate;

@interface WCFinderImageBrowserCell : UICollectionViewCell <UIScrollViewDelegate, WCFinderFeedImageViewProtocol, UIGestureRecognizerDelegate>

@property (retain, nonatomic) WCFinderFeedMediaWrap *mediaWrap;
@property (retain, nonatomic) UIScrollView *imageScrollView;
@property (retain, nonatomic) WCFinderFeedImageView *imageContainer;
@property (retain, nonatomic) WCFinderFeedImageEffectView *imageEffectView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) struct CGPoint { double x; double y; } panStartPoint;
@property (nonatomic) BOOL panInteracting;
@property (weak, nonatomic) id<WCFinderImageBrowserCellDelegate> delegate;
@property (retain, nonatomic) WCFinderMediaInfo *mediaInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)setupSubviews;
- (void)setupGestures;
- (void)layoutSubviews;
- (void)respondsToTapSingleGesture:(id)a0;
- (void)respondsToTapDoubleGesture:(id)a0;
- (void)respondsToPanGesture:(id)a0;
- (void)updateImageLayout;
- (void)reloadImage;
- (void)setImage:(id)a0 isThumb:(BOOL)a1;
- (void)onFinderImageLoadSuccess:(id)a0;
- (void)onFinderImageDownloadFail:(id)a0;
- (void)restoreInteractionWithDuration:(double)a0;
- (double)maxZoomScaleWithImageSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getImageViewRect;
- (void)scrollViewDidZoom:(id)a0;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)loadingRetry;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;

@end
