@class UIImageView, UILabel;

@interface AFDFamiliarSearchComprehensiveEntranceCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;

- (void)resetTitleWithKeyword:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
