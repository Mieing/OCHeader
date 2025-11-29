@class NSString, UIImageView, NSArray, MMImageScrollViewHelper;
@protocol WCC2CVideoThumbImageViewDelegate;

@interface WCC2CVideoThumbImageView : UIScrollView <UIScrollViewDelegate, MMImageScrollViewHelperDelegate>

@property (retain, nonatomic) MMImageScrollViewHelper *scrollViewHelper;
@property (nonatomic) BOOL zoomEnabled;
@property (retain, nonatomic) UIImageView *imageView;
@property (weak, nonatomic) id<WCC2CVideoThumbImageViewDelegate> uiDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) double zoomScale;
@property (nonatomic) double minimumZoomScale;
@property (nonatomic) double maximumZoomScale;
@property (copy, nonatomic) NSArray *gestureRecognizers;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (id)viewForZooming;
- (id)getScrollView;
- (void)onDoubleTap:(id)a0;
- (void)updateZoomInfo:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
