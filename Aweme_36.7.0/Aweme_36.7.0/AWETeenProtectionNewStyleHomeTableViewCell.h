@class UIImageView, UILabel, AWEAWETeenProtectionNewStyleHomeTableModel;

@interface AWETeenProtectionNewStyleHomeTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) AWEAWETeenProtectionNewStyleHomeTableModel *model;

+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
