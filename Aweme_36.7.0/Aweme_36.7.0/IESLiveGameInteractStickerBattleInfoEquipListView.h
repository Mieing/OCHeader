@class NSArray, EquipState;

@interface IESLiveGameInteractStickerBattleInfoEquipListView : UIView

@property (nonatomic) double scaleRatio;
@property (retain, nonatomic) NSArray *equipImageViews;
@property (nonatomic) long long maxEquipCount;
@property (retain, nonatomic) EquipState *equipModel;

- (id)createEquipImageViews;
- (void)removeEquipImageViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 maxEquipCount:(long long)a1;
- (void)setupSubViews;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
