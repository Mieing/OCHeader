@class UIView, ACCGrootDetailsStickerModel, NSString, ACCGrootStickerSelectView, AWEEditGradientView, AWEVideoPublishViewModel, ACCGrootStickerView;

@interface ACCGrootStickerRecognitionView : UIView <ACCGrootStickerSelectViewDelegate>

@property (retain, nonatomic) ACCGrootStickerView *grootStickerView;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) AWEEditGradientView *upperMaskView;
@property (retain, nonatomic) UIView *lowerMaskView;
@property (weak, nonatomic) UIView *orignalSuperView;
@property (nonatomic) BOOL isEdting;
@property (nonatomic) unsigned long long selectedIndex;
@property (retain, nonatomic) ACCGrootStickerSelectView *selectGrootView;
@property (retain, nonatomic) ACCGrootDetailsStickerModel *snapDetailsStickerModel;
@property (retain, nonatomic) ACCGrootDetailsStickerModel *originalDetailsStickerModel;
@property (copy, nonatomic) id /* block */ onEditFinishedBlock;
@property (copy, nonatomic) id /* block */ finishEditAnimationBlock;
@property (copy, nonatomic) id /* block */ startEditBlock;
@property (copy, nonatomic) id /* block */ selectModelCallback;
@property (copy, nonatomic) id /* block */ confirmCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)editViewWithPublishModel:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 publishModel:(id)a1;
- (void)startEditStickerView:(id)a0;
- (void)didClickedTextMaskView;
- (void)saveSelectedModelAction;
- (void)stopEdit:(BOOL)a0 clickMask:(BOOL)a1;
- (void)selectedGrootStickerModel:(id)a0 index:(unsigned long long)a1;
- (void)didClickedSaveButtonAction:(BOOL)a0;
- (void)didClickCancelButtonAction;
- (void)didClickAllowResearchButtonAction:(BOOL)a0;
- (void)didSlideCard;
- (void).cxx_destruct;
- (void)setup;

@end
