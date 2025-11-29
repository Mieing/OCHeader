@class MMScrollViewZoomReporter, NSString, NSArray, WXFullScreenGestureRecognizer, MMImageScrollViewHelper, UIImageView, WCLivePhotoView, UILongPressGestureRecognizer, MMUIActivityIndicatorView;
@protocol ImageScrollViewDelegate;

@interface ImageScrollView : MMUIScrollView <UIScrollViewDelegate, MMImageScrollViewHelperDelegate, FullScreenGestureDelegate> {
    UIImageView *imageView;
    MMUIActivityIndicatorView *mActivityIndicator;
    MMImageScrollViewHelper *m_scrollViewHelper;
    BOOL m_bIsLongPressHandled;
    BOOL disableDragToResize;
    WXFullScreenGestureRecognizer *m_gesture;
    struct CGSize { double width; double height; } m_originSize;
    BOOL m_isEnablePlayLivePhoto;
    WCLivePhotoView *livePhotoView;
    UILongPressGestureRecognizer *m_livePhotoLongPressRecognizer;
}

@property (weak) id<ImageScrollViewDelegate> m_delegate;
@property (nonatomic) BOOL useWindowFrame;
@property (nonatomic) BOOL enableDragToClose;
@property (nonatomic) double contentRatioY;
@property (retain, nonatomic) MMScrollViewZoomReporter *zoomReporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) double zoomScale;
@property (nonatomic) double minimumZoomScale;
@property (nonatomic) double maximumZoomScale;
@property (copy, nonatomic) NSArray *gestureRecognizers;

+ (BOOL)supportTiledImage;

- (void)setOriginSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateZoomScale;
- (void)setOriginImageData:(id)a0;
- (void)onDoubleTap:(id)a0;
- (void)onSingleTap:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)disableScrollViewDragToResize;
- (struct CGPoint { double x0; double x1; })gestureBeginPoint;
- (void)updateDisplayRect;
- (void)stopTiledImageDisplay;
- (id)viewForZooming;
- (id)getScrollView;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)scrollViewDidZoom:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)reloadView:(id)a0 FullScreen:(BOOL)a1;
- (void)displayImage:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 CornerRadius:(double)a2;
- (void)displayLoading:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateScrollable;
- (void)dealloc;
- (void)displayImage:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)displayImageCache:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)updateImage:(id)a0;
- (id)getImage;
- (id)getImageView;
- (double)screenWidth;
- (double)screenHeight;
- (id)m_livePhotoLongPressRecognizer;
- (void)enableLongPressRecognizer:(BOOL)a0;
- (void)setEnableLeftToRightClose:(BOOL)a0;
- (void)handleLivePhotoLongPress:(id)a0;
- (void)displayLivePhoto:(id)a0 withAsset:(id)a1 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)displayLivePhoto:(id)a0 withVideoPath:(id)a1 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)updateLivePhoto:(id)a0;
- (void)startPlayLivePhoto;
- (void)pausePlayLivePhoto;
- (void)clearLivePlayer;
- (void)isEnablePlayLivePhoto:(BOOL)a0;
- (struct CGSize { double x0; double x1; })calculateLivePhotoFitSizeForPreview:(struct CGSize { double x0; double x1; })a0 maxSize:(struct CGSize { double x0; double x1; })a1 fillWidth:(BOOL)a2;
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
- (void).cxx_destruct;

@end
