@class UILabel, UIScrollView;

@interface BDPVideoStrategyTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIScrollView *scrollView;

- (void)updateCellItem;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
