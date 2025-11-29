@class UIImageView, UILabel, UIView, AWESearchTextExtractionModel;

@interface AWESearchTextExtractionTableViewCell : UITableViewCell

@property (retain, nonatomic) AWESearchTextExtractionModel *model;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *selectIdentifer;
@property (retain, nonatomic) UIView *selectBackView;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
