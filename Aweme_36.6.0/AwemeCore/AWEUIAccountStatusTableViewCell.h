@class UIImageView, UILabel;

@interface AWEUIAccountStatusTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (nonatomic) double minimumCellHeight;

- (void)configWithDescLabelText:(id)a0;
- (void)layoutContentViewWithHeaderHeight:(double)a0;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)setupUI;

@end
