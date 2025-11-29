@class UIImageView, NSString;
@protocol ZoomingScrollViewDelegate;

@interface ZoomingScrollView : UIScrollView <UIScrollViewDelegate>

@property (retain, nonatomic) UIImageView *photoImageView;
@property (nonatomic) double doubleTapExpandZoomScale;
@property (weak, nonatomic) id<ZoomingScrollViewDelegate> zoomViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateZoomScaleWithTouchPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isCurrMaximumZoomScale;
- (void)calcuateZoomScaleFillDoubleTapExpandUseMaximumZoomScale;
- (void)calcuateZoomScaleFillDoubleTapExpandUseCustomZoomScale;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)handleSingleTap:(id)a0;
- (void)handleDoubleTap:(id)a0;
- (void)layoutSubviews;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })zoomRectForScale:(float)a0 withCenter:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
