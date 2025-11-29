@class UILabel, UIImageView, NSString;

@interface CJProtocolListCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
