@class NSString, UIImageView, PHLivePhotoView, UIScrollView, UILongPressGestureRecognizer;
@protocol CECMomentCameraPreviewCropViewDelegate;

@interface CECMomentCameraPreviewCropView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate, PHLivePhotoViewDelegate>

@property (retain, nonatomic) UIScrollView *containerScrollView;
@property (retain, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) PHLivePhotoView *livePhotoView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastDisplayRect;
@property (nonatomic) BOOL isLivePhoto;
@property (nonatomic) BOOL isViewDragging;
@property (nonatomic) BOOL isViewZooming;
@property (nonatomic) BOOL isRunLoop;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (nonatomic) struct CGPoint { double x; double y; } lastContentOffset;
@property (weak, nonatomic) id<CECMomentCameraPreviewCropViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showGuide;
- (void)configLivePhoto:(id)a0;
- (void)configPreviewZoomEnable:(BOOL)a0;
- (struct CGSize { double x0; double x1; })contentImageVisibleSize;
- (void)configImage:(id)a0;
- (void)hiddenGuide;
- (void)resetCropAnimated:(BOOL)a0;
- (void)stopPlayBackIfNeeded;
- (void)playLivePhotoIfNeeded;
- (void)disableLivePhotoViewLongPressGesture:(BOOL)a0;
- (id)p_guideView;
- (void)bindNotificationAndObserve;
- (void)p_hiddenSubviewsWith:(BOOL)a0;
- (void)p_resetWithoutImage;
- (void)p_relayoutImageView;
- (void)p_postDisplayRectChangedIfNeed;
- (void)p_relayoutLivePhotoView;
- (id)p_getCurrentDisplayView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_getCurrentDisplayRect;
- (void)p_setupLivePhotoUI;
- (void)p_relayoutViewWith:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)p_resetContentOffset:(struct CGSize { double x0; double x1; })a0;
- (void)onLongPressGestureClicked:(id)a0;
- (void)p_setupUI;
- (void)livePhotoView:(id)a0 didEndPlaybackWithStyle:(long long)a1;
- (void)livePhotoView:(id)a0 willBeginPlaybackWithStyle:(long long)a1;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)handleRotation;

@end
