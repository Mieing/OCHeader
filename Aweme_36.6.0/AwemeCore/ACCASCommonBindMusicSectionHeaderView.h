@class UILabel, UIView;

@interface ACCASCommonBindMusicSectionHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *rightLabel;
@property (retain, nonatomic) UIView *topLineView;

+ (double)recommendHeight;
+ (id)identifier;

- (void)configWithTitle:(id)a0 rightContent:(id)a1 cellWidth:(double)a2;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)layoutSubviews;

@end
