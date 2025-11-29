@class WCFinderAnimationLoadingView, WXFullScreenGestureRecognizer, UIImageView, UIImage, UIScrollView, NSString;

@interface WCFinderFullScreenImageBrowseView : UIView <UIScrollViewDelegate, FullScreenGestureDelegate>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) WXFullScreenGestureRecognizer *fullScreenGestrure;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) UIImage *originImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showInViewController:(id)a0 imageURL:(id)a1 dismissBlock:(id /* block */)a2;
+ (void)showInWindow:(id)a0 imageURL:(id)a1 dismissBlock:(id /* block */)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;
- (void)layoutSubviews;
- (void)handleDoubleTap:(id)a0;
- (void)_showInViewView:(id)a0 imageURL:(id)a1 dismissBlock:(id /* block */)a2;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void)onFullScreenSingleTap;
- (void)onFullScreenClose;
- (void)onFullScreenDragToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onFullScreenBackgroundColorAlphaChange:(double)a0;
- (void).cxx_destruct;

@end
