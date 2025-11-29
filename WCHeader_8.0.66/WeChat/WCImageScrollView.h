@class WXFullScreenGestureRecognizer, MMUIActivityIndicatorView, NSString, NSArray, UIView, MMScrollViewZoomReporter, MMImageScrollViewHelper;
@protocol WCImageScrollViewDelegate, UIScrollViewDelegate;

@interface WCImageScrollView : MMUIScrollView <UIScrollViewDelegate, MMImageScrollViewHelperDelegate, FullScreenGestureDelegate> {
    UIView *imageView;
    MMImageScrollViewHelper *m_scrollViewHelper;
    WXFullScreenGestureRecognizer *m_gesture;
}

@property (retain, nonatomic) MMScrollViewZoomReporter *zoomReporter;
@property (nonatomic) unsigned long long index;
@property (nonatomic) BOOL supportOrientation;
@property (readonly, nonatomic) MMUIActivityIndicatorView *mActivityIndicator;
@property (weak, nonatomic) id<WCImageScrollViewDelegate> m_delegate;
@property (nonatomic) BOOL enableDragToClose;
@property (readonly, nonatomic) BOOL isDraggingToClose;
@property (nonatomic) long long browseScene;
@property (weak, nonatomic) id<UIScrollViewDelegate> scrollOuterDelegate;
@property (nonatomic) BOOL playGestureEnabled;
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
- (void)setEnableLeftToRightClose:(BOOL)a0;
- (void)dealloc;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (id)viewForZooming;
- (id)getScrollView;
- (void)onSingleTap:(id)a0;
- (void)onLongPressBegin:(id)a0;
- (void)onDoubleTap:(id)a0;
- (long long)orientationToInt:(long long)a0;
- (double)angelFromOldOrientation:(long long)a0 newOrientation:(long long)a1;
- (void)internalDisplayImage:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)internalDisplayImageMaterial:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)displayImage:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)displayImage:(id)a0 withPlayerArgs:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)startPlaying;
- (void)pausePlaying;
- (void)startDownloading;
- (void)clearPlayer;
- (void)playableImageView:(id)a0 didChangePlayerState:(unsigned long long)a1;
- (void)displayView:(id)a0;
- (void)stopLoading;
- (void)willMoveToSuperview:(id)a0;
- (void)onFullScreenSingleTap;
- (void)onFullScreenLongPressBegin;
- (void)onFullScreenClose;
- (void)onFullScreenDragToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onFullScreenBackgroundColorAlphaChange:(double)a0;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (id)getImageView;
- (void)setZoomReportSnsId:(id)a0 index:(long long)a1;
- (void).cxx_destruct;

@end
