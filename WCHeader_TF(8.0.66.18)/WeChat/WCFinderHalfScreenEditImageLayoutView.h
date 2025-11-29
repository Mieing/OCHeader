@class WCFinderHalfScreenEditFrameBlurView, NSString, UIView, WCFinderAlbumScrollViewParamModel;

@interface WCFinderHalfScreenEditImageLayoutView : WCFinderEditImageBasicLayoutView <WCFinderHalfScreenEditFrameBlurViewDelegate>

@property (nonatomic) BOOL hiddenCropBtn;
@property (retain, nonatomic) UIView *headBlurView;
@property (retain, nonatomic) UIView *bottomBlurView;
@property (nonatomic) WCFinderAlbumScrollViewParamModel *scrollViewParamModel;
@property (retain, nonatomic) WCFinderHalfScreenEditFrameBlurView *frameCropView;
@property (nonatomic) BOOL needAdjustThumbItemSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateCropLinesWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)triggerScrollViewDidEndZooming;
- (void)updateScrollViewFrame;
- (void)scrollViewDidScroll:(id)a0;
- (void)onFinderEditFrameBlurViewUpdateBlurButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateScrollViewLayoutViews;
- (void)onDoubleClickScrollViewAction;
- (void)resetPreviewImageAndSetScrollViewFrameWithAnim:(BOOL)a0;
- (void)resetPreviewImageAndSetScrollViewFrame;
- (unsigned long long)setBGMViewButtonOption;
- (struct CGSize { double x0; double x1; })getEditSelectedCollectionViewItemSize;
- (void)updateCurScrollViewZoomRate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentCropRectInImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 hiddenCropBtn:(BOOL)a1 scrollViewParamModel:(id)a2;
- (void)addBlurView;
- (void)onPenEditImage:(id)a0;
- (void)onMosaicEditImage:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentCropRectInScreen;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandlerWithoutOccupy:(BOOL)a0;
- (BOOL)isTouchOnEditWidget:(struct CGPoint { double x0; double x1; })a0;
- (void)finderEditFrameBlurView:(id)a0 endEditing:(BOOL)a1;
- (void).cxx_destruct;

@end
