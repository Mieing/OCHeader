@class ACCBrushAdjustToolView, ACCBrushColorEntranceView, ACCBrushEffectValueList, UIView, NSString;
@protocol ACCBrushEditBottomViewDelegate;

@interface ACCBrushEditBottomView : UIView <ACCBrushEffectValueListDelegate>

@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) ACCBrushAdjustToolView *brushSizeAdjustView;
@property (retain, nonatomic) ACCBrushColorEntranceView *colorEntranceView;
@property (nonatomic) double cellSpace;
@property (weak, nonatomic) id<ACCBrushEditBottomViewDelegate> delegate;
@property (retain, nonatomic) ACCBrushEffectValueList *basicBrushList;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } touchedRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)brushSubtypes;

- (BOOL)p_isPlainStyle;
- (id)p_subtypeInfos;
- (double)p_plainCollectionWidth;
- (double)p_plainLineStartX;
- (double)p_plainStartXForCellIndex:(long long)a0;
- (void)didClickBrushColorChooseView;
- (void)didClickBrushSizeAdjustView;
- (double)p_plainLeftRightMargin;
- (double)p_plainCellSpacing;
- (id)assetImages;
- (id)brushValuesName;
- (long long)p_totalCellCount;
- (void)didSelectCellView:(id)a0 brushValue:(id)a1;
- (void)updateBrushColorChooseViewEnable:(BOOL)a0;
- (void)updateBrushColorEntrance:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void)setupUI;

@end
