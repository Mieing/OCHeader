@class UILabel;

@interface IESECLiveGoodsInfoCardTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UILabel *rightLabel;
@property (nonatomic) double padding;

+ (id)identity;

- (void)configureCellAppearanceWithConfigModel:(id)a0;
- (void)configureCellAppearanceAtIndex:(long long)a0;
- (void)updateCellConstraintWithCellModel:(id)a0;
- (void)updateWithCellModel:(id)a0 atIndex:(long long)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
