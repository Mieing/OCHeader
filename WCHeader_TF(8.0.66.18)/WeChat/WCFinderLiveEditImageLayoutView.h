@class UIImageView, NSString, MMUIButton;

@interface WCFinderLiveEditImageLayoutView : WCEditImageLayoutView <WCFinderEditFrameBlurViewDelegate>

@property (nonatomic) BOOL shouldEnterCropModeAfterSafeAreaUpdate;
@property (nonatomic) BOOL shouldAutoEnterCropMode;
@property (nonatomic) BOOL restoreApsectRatioPostCrop;
@property (retain, nonatomic) UIImageView *blurBackgroundView;
@property (nonatomic) BOOL changingAspectRatio;
@property (retain, nonatomic) MMUIButton *backBtn;
@property (nonatomic) struct CGSize { double width; double height; } ratio;
@property (copy, nonatomic) id /* block */ backCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)customBottomButtonOrder;
- (void)onClickBackBtn:(id)a0;
- (BOOL)shouldAutoTriggerMusic;
- (void)OnClickEditImageBackBarButton;
- (void)onEditImage:(unsigned long long)a0 withEditEntrance:(unsigned long long)a1;
- (void)reloadTopEditImageBar;
- (void)reloadBottomEditImageBar;
- (double)getEmoticonToolViewBottom;
- (void)initBlurBackground;
- (void)setupBlurBackgroundMask;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)safeAreaInsetsDidChange;
- (void)didMoveToWindow;
- (unsigned long long)adjustedBlackLevelForLevel:(unsigned long long)a0;
- (void)autoEnterCropMode;
- (void)onCropEditImage:(id)a0;
- (void)onCropEditImageInner;
- (void)updateCropLinesWithPoint:(struct CGPoint { double x0; double x1; })a0 aspectRatio:(double)a1;
- (void)onCropToolBarCancelBtnClicked;
- (void)onCropToolBarDoneBtnClicked;
- (void)OnClickEditImageDoneBarButton;
- (void)onceSavePropertyAndOutputImageAttr:(id /* block */)a0;
- (void)setAspectRatio:(struct CGSize { double x0; double x1; })a0 withAnimation:(BOOL)a1;
- (void)onCroppingView;
- (void)onFinishCroppingView;
- (void)animateBlurBackgroundAlpha:(double)a0;
- (void)animateGridAlpha:(double)a0;
- (void).cxx_destruct;

@end
