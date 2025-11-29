@class UIImageView, UILabel, RoleInfo;

@interface IESLiveGameInteractStickerBattleRoleInfoDisplayView : UIView

@property (nonatomic) double scaleRatio;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *levelLabel;
@property (retain, nonatomic) RoleInfo *roleInfo;

- (void)setupSubViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
