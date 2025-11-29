@class NSString;
@protocol WCFinderFullScreenEditImageLayoutViewDelegate;

@interface WCFinderFullScreenEditImageLayoutView : WCFinderEditImageBasicLayoutView <WCFinderFullScreenEditFrameBlurViewDelegate>

@property (nonatomic) BOOL hiddenCropBtn;
@property (nonatomic) BOOL needAdjustThumbItemSize;
@property (weak, nonatomic) id<WCFinderFullScreenEditImageLayoutViewDelegate> finderDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 hiddenCropBtn:(BOOL)a1;
- (void)onPenEditImage:(id)a0;
- (void)onMosaicEditImage:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentCropRectInImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentCropRectInScreen;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullScreenCropRect;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandlerWithoutOccupy:(BOOL)a0;
- (BOOL)isTouchOnEditWidget:(struct CGPoint { double x0; double x1; })a0;
- (void)finderEditFrameBlurView:(id)a0 endEditing:(BOOL)a1;
- (void)updateCropLinesWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)setBGMViewButtonOption;
- (struct CGSize { double x0; double x1; })getEditSelectedCollectionViewItemSize;
- (void)onClickmusicBGMViewAction;
- (void)reportClickDoneAction;
- (void).cxx_destruct;

@end
