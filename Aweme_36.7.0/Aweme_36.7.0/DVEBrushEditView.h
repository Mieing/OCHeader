@class UIView, NSString, DVEEffectValue, DVEBrushTopBar, DVEBrushEditHelper, UIImageView, UIButton, DVEHorizontalColorChooseView, DVECommonLargeSlider, UILabel;
@protocol DVECoreBrushStickerEditorProtocol, DVENLEEditorProtocol, DVENLEInterfaceProtocol, DVEBrushEditPluginProtocol;

@interface DVEBrushEditView : UIView <DVEBrushTopBarDelegate, DVEBrushPreviewEditPluginDelegate, DVECommonLargeSliderDelegate>

@property (retain, nonatomic) DVEHorizontalColorChooseView *colorChooseView;
@property (retain, nonatomic) DVECommonLargeSlider *largeSlider;
@property (retain, nonatomic) DVEBrushTopBar *topBar;
@property (retain, nonatomic) UIView *preview;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIButton *undoButton;
@property (retain, nonatomic) UIButton *redoButton;
@property (retain, nonatomic) UIImageView *holderView;
@property (retain, nonatomic) DVEBrushEditHelper *brushHelper;
@property (weak, nonatomic) id<DVECoreBrushStickerEditorProtocol> brushEditor;
@property (weak, nonatomic) id<DVENLEInterfaceProtocol> nle;
@property (weak, nonatomic) id<DVENLEEditorProtocol> nleEditor;
@property (weak, nonatomic) id<DVEBrushEditPluginProtocol> brushPlugin;
@property (retain, nonatomic) DVEEffectValue *currentBrushValue;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFrame;
@property (nonatomic) struct CGSize { double width; double height; } previewSize;
@property (nonatomic) long long editType;
@property (copy, nonatomic) NSString *currentBrushSlotId;
@property (copy, nonatomic) id /* block */ brushDidDismissBlock;
@property (copy, nonatomic) id /* block */ brushWillExitBlock;
@property (copy, nonatomic) id /* block */ brushDidDoneBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0 animated:(BOOL)a1;
- (void)configData;
- (void)didClickBack;
- (void)updateSubViewHiddenWithoutPreview:(BOOL)a0;
- (id)updatedColorWithColor:(id)a0;
- (void)didSelectBrush:(id)a0;
- (void)bindServiceInject:(id)a0;
- (void)restoreSelectColorIfNeedWithColorValues:(id)a0;
- (void)brushDidPanBegan:(id)a0;
- (void)brushDidPanChanged:(id)a0;
- (void)brushDidPanEnded:(id)a0;
- (void)brushDidDoublePan:(id)a0;
- (void)brushDidScale:(double)a0 shouldChange:(BOOL)a1 gesture:(id)a2;
- (void)sliderInteractionDidEnd:(id)a0;
- (void)didClickDone;
- (void)didClickUndo;
- (void)didClickRedo;
- (void)didChangeBackgroundImage:(id)a0;
- (void)trackBrushColorWithValue:(id)a0;
- (void)trackBrushChangedWithValue:(id)a0;
- (void)trackBackgroundColorChangedWithValue:(id)a0;
- (void)trackPreviewPinchWithScale:(double)a0;
- (void)trackBrushSliderChanged;
- (void)trackBrushUndo;
- (void)trackBrushRedo;
- (id)initWithNLE:(id)a0 containerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 previewSize:(struct CGSize { double x0; double x1; })a2 editType:(long long)a3;
- (id)initWithNLE:(id)a0 containerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 videoPreview:(id)a2;
- (void)configWithVideoOrImageResources:(id)a0;
- (void)configBackgroundColorIfNeed:(id)a0;
- (void)updateBrushSlotId:(id)a0;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)willMoveToSuperview:(id)a0;
- (void)setupUI;
- (void)setupService;

@end
