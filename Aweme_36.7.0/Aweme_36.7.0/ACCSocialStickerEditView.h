@class ACCSocialStickerView, AWEVideoPublishViewModel, ACCSocialStickerEditToolbar, AWEEditGradientView, UIView, ACCAnimatedButton;

@interface ACCSocialStickerEditView : UIView

@property (retain, nonatomic) ACCAnimatedButton *saveButton;
@property (retain, nonatomic) AWEEditGradientView *upperMaskView;
@property (retain, nonatomic) UIView *lowerMaskView;
@property (weak, nonatomic) UIView *orignalSuperView;
@property (retain, nonatomic) ACCSocialStickerEditToolbar *editToolbar;
@property (retain, nonatomic) ACCSocialStickerView *editingStickerView;
@property (nonatomic) BOOL isEdting;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (copy, nonatomic) id /* block */ onEditFinishedBlock;
@property (copy, nonatomic) id /* block */ finishEditAnimationBlock;
@property (copy, nonatomic) id /* block */ startEditBlock;

+ (id)editViewWithPublishModel:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 publishModel:(id)a1;
- (void)startEditStickerView:(id)a0;
- (void)didClickedTextMaskView;
- (void)didClickedSaveButton:(id)a0;
- (void)handleKeyboardChangeFrameNoti:(id)a0;
- (void)stopEdit;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setup;
- (void)addObservers;
- (void)removeObservers;

@end
