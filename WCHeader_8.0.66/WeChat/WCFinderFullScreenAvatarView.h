@class WXFullScreenGestureRecognizer, UIImageView, WCFinderFullScreenAvatarConfig, UIScrollView, UIImage, NSString;

@interface WCFinderFullScreenAvatarView : UIView <UIScrollViewDelegate, FullScreenGestureDelegate>

@property (retain, nonatomic) WCFinderFullScreenAvatarConfig *config;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) WXFullScreenGestureRecognizer *fullScreenGestrure;
@property (nonatomic) BOOL loading;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originRect;
@property (retain, nonatomic) UIImage *originImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)setUpUI;
- (void)layoutSubviews;
- (void)handleDoubleTap:(id)a0;
- (void)showInViewController:(id)a0 dismissBlock:(id /* block */)a1;
- (BOOL)displayWithContact:(id)a0 placeholder:(id)a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void)onFullScreenSingleTap;
- (void)onFullScreenClose;
- (void)onFullScreenLongPressBegin;
- (void)showMoreActionIfNeed;
- (void)onFullScreenDragToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onFullScreenBackgroundColorAlphaChange:(double)a0;
- (void).cxx_destruct;

@end
