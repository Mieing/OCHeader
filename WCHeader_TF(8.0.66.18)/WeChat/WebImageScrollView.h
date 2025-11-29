@class NSString, NSArray, MMUIActivityIndicatorView, MMWebImageView, MMImageScrollViewHelper, WXFullScreenGestureRecognizer;
@protocol WebImageScrollViewDelegate;

@interface WebImageScrollView : MMUIScrollView <FullScreenGestureDelegate, MMWebImageViewDelegate, UIScrollViewDelegate, MMImageScrollViewHelperDelegate, MediaFullScreenInterface> {
    MMWebImageView *webImageView;
    MMUIActivityIndicatorView *mActivityIndicator;
    MMImageScrollViewHelper *m_scrollViewHelper;
    WXFullScreenGestureRecognizer *m_gesture;
    BOOL m_bImageLoadDone;
    BOOL m_bFullScreenAnimationDone;
}

@property (weak) id<WebImageScrollViewDelegate> m_delegate;
@property (nonatomic) BOOL useWindowFrame;
@property (nonatomic) BOOL enableDragToClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) double zoomScale;
@property (nonatomic) double minimumZoomScale;
@property (nonatomic) double maximumZoomScale;
@property (copy, nonatomic) NSArray *gestureRecognizers;

- (void)onDoubleTap:(id)a0;
- (void)onSingleTap:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImageUrl:(id)a0;
- (id)viewForZooming;
- (id)getScrollView;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (void)scrollViewDidZoom:(id)a0;
- (void)tryReloadView;
- (void)onLoadImageOK:(id)a0;
- (void)updateScrollable;
- (id)getImageView;
- (double)screenWidth;
- (double)screenHeight;
- (BOOL)shouldPreventDragDownCloseGesture;
- (void)onFullScreenSingleTap;
- (void)onFullScreenClose;
- (void)onFullScreenDragToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragEnd;
- (void)onFullScreenLongPressBegin;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenBackgroundColorAlphaChange:(double)a0;
- (void)becomeInvisible;
- (void)becomeVisible;
- (void)resizeToFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)displayWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetLoadingIndicator;
- (void)beginFullScreenAnimation:(id)a0;
- (void)finishFullScreenAnimation:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)getQuitAnimationView;
- (void).cxx_destruct;

@end
