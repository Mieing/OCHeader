@class WXFullScreenGestureRecognizer, UIImageView, UIImage, UIScrollView, NSString;

@interface MMLiveCoverPreviewView : UIView <UIScrollViewDelegate, FullScreenGestureDelegate>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) WXFullScreenGestureRecognizer *fullScreenGestrure;
@property (retain, nonatomic) UIImage *originImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;
- (void)layoutSubviews;
- (void)handleDoubleTap:(id)a0;
- (void)showInViewController:(id)a0;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void)onFullScreenSingleTap;
- (void)onFullScreenClose;
- (void)onFullScreenDragToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
