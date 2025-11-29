@class NSString, WCImageFullScreenTagView, UIView, WCMediaImageViewModel;

@interface WCMediaImageScrollView : WCImageScrollView <WCImageFullScreenTagViewDelegate>

@property (retain, nonatomic) WCImageFullScreenTagView *imageTagView;
@property (retain, nonatomic) WCMediaImageViewModel *viewModel;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } imageTagSafeArea;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } imageTagPadding;
@property (weak, nonatomic) UIView *imageTagSuperView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)displayViewModel:(id)a0 withImage:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)changeShowUhdImage:(id)a0;
- (void)dealloc;
- (void)removeFromSuperview;
- (void)bringImageTagViewToFront;
- (void)reloadImageTagView;
- (void)updateImageTagSafeArea;
- (void)layoutImageTagView;
- (void)updateVisibleForImageTagView:(BOOL)a0;
- (void)internalDisplayImageMaterial:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)playableImageView:(id)a0 didChangePlayerState:(unsigned long long)a1;
- (void)scrollViewDidChangeAdjustedContentInset:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)livePhotoButtonClickedInImageTagView:(id)a0;
- (void)reportLivePhotoExposeData;
- (void)reportLivePhotoPlayData:(long long)a0;
- (void).cxx_destruct;

@end
