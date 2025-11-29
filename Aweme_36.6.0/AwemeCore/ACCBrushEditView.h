@class ACCBrushEditPopover, UIView, UIButton, NSString, ACCBrushEditMagifierView, DVEHorizontalColorChooseView, AWEStudioEditBrushFeatureConfig, ACCBrushEditTrackManager, ACCBrushEffectValueList, DVEBrushEditHelper, ACCBrushTopBar, ACCBrushEditBottomView, UIImageView;
@protocol ACCBrushSizeSliderProtocol, ACCBrushEffectValueListProtocol;

@interface ACCBrushEditView : UIView <ACCBrushEditBottomViewDelegate, ACCBrushEffectValueListDelegate>

@property (retain, nonatomic) AWEStudioEditBrushFeatureConfig *featureConfig;
@property (retain, nonatomic) DVEHorizontalColorChooseView *colorChooseView;
@property (retain, nonatomic) ACCBrushEffectValueList *expansionBrushView;
@property (retain, nonatomic) id<ACCBrushSizeSliderProtocol> brushSizeSlider;
@property (retain, nonatomic) ACCBrushTopBar *topBar;
@property (weak, nonatomic) DVEBrushEditHelper *brushHelper;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) ACCBrushEditPopover *popover;
@property (nonatomic) BOOL enableMagnifierView;
@property (readonly, nonatomic) id<ACCBrushEffectValueListProtocol> basicBrushView;
@property (retain, nonatomic) ACCBrushEditTrackManager *trackManager;
@property (readonly, nonatomic) UIButton *undoButton;
@property (retain, nonatomic) UIImageView *holderView;
@property (retain, nonatomic) UIView *preview;
@property (retain, nonatomic) UIView *subPreview;
@property (nonatomic) struct CGSize { double width; double height; } previewSize;
@property (retain, nonatomic) ACCBrushEditBottomView *bottomView;
@property (retain, nonatomic) ACCBrushEditMagifierView *editMagnifierView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFrame;
@property (nonatomic) BOOL largeSliderChangeState;
@property (retain, nonatomic) UIView *nibSizeView;
@property (copy, nonatomic) id /* block */ didSelectedBrush;
@property (copy, nonatomic) id /* block */ didBrushPopoverDismiss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0 animated:(BOOL)a1;
- (id)brushFeatureConfig;
- (void)didSelectBasicBrush:(id)a0;
- (void)didClickBrushColorChooseView;
- (void)didClickBrushSizeAdjustView;
- (void)didSelectCellView:(id)a0 brushValue:(id)a1;
- (void)updateBrushColorEntrance:(id)a0;
- (void)dismissBrushPopover;
- (id)initWithContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 previewSize:(struct CGSize { double x0; double x1; })a1 brushHelper:(id)a2 featureConfig:(id)a3;
- (void)updateUILayoutWithContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 previewSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateBrushColorEntranceEnable:(BOOL)a0;
- (void)updateNibSizeViewWithDiameter:(double)a0;
- (void)updateSubViewHiddenWithoutPreview:(BOOL)a0;
- (void)adaptMagifierViewPositionWith:(struct CGPoint { double x0; double x1; })a0 needReset:(BOOL)a1 showPenTracker:(BOOL)a2;
- (void)showBrushStyleChoosePopover;
- (void)reloadBrushSlider:(struct { double x0; double x1; double x2; })a0;
- (BOOL)maginifierViewEnabled;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (double)bottomOffset;

@end
