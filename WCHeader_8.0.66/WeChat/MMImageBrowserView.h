@class WCC2CImageBrowseButton, MMImageBrowserViewModel, NSString, UIPanGestureRecognizer, ImageScrollView;

@interface MMImageBrowserView : MMMediaBrowserView <ImageScrollViewDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) ImageScrollView *imageScrollView;
@property (retain, nonatomic) WCC2CImageBrowseButton *livePhotoBtn;
@property (nonatomic) BOOL useDarkMode;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (readonly, nonatomic) MMImageBrowserViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getDisplayFrame;
- (void)onClickLivePhotoButton;
- (BOOL)canShowLivePhotoBtn;
- (void)onSingleTap:(id)a0;
- (void)OnLongPress:(id)a0;
- (void)handlePanGesture;
- (void)ImageScrollViewDidZoom:(id)a0 withView:(id)a1;
- (void)updateButtonColor;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;

@end
