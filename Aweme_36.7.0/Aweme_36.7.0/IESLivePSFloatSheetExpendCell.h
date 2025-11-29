@class UIImageView, UILabel, UIView;

@interface IESLivePSFloatSheetExpendCell : UITableViewCell

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)refreshWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
