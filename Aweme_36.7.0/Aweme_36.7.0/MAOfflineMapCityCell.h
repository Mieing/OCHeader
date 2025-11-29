@class UILabel, MAOfflineMapProgressView, UIView;

@interface MAOfflineMapCityCell : UITableViewCell

@property (retain, nonatomic) MAOfflineMapProgressView *progressView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIView *statusView;
@property (nonatomic) BOOL shouldShowProgressView;

- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void)setupLabel;

@end
