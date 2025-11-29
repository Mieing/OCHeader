@class UILabel, UIImageView;

@interface AWETeenProtectionHomeTableHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) UILabel *headerViewTitleLabel;
@property (retain, nonatomic) UILabel *headerViewSubtitleLabel;
@property (retain, nonatomic) UIImageView *headerViewImageView;

+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)setupUI;

@end
