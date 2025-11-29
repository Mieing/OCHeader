@class NSArray, NSString, MMImageScrollViewHelper, UIView;
@protocol MMContentScrollViewDelegate;

@interface MMContentScrollView : UIScrollView <MMImageScrollViewHelperDelegate, UIScrollViewDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMImageScrollViewHelper *scrollViewHelper;
@property (weak, nonatomic) id<MMContentScrollViewDelegate> customDelegate;
@property (nonatomic) struct CGSize { double width; double height; } customContentSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) double zoomScale;
@property (nonatomic) double minimumZoomScale;
@property (nonatomic) double maximumZoomScale;
@property (copy, nonatomic) NSArray *gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentView:(id)a0;
- (void)zoomToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1;
- (id)viewForZooming;
- (id)getScrollView;
- (void)onSingleTap:(id)a0;
- (void)onDoubleTap:(id)a0;
- (BOOL)imageScrollViewHelper:(id)a0 shouldIgnoreDoubleTap:(id)a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)scrollViewDidZoom:(id)a0;
- (void).cxx_destruct;

@end
