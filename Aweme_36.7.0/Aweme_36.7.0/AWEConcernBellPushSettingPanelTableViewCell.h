@class UILabel, UIImageView;

@interface AWEConcernBellPushSettingPanelTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *checkIcon;

+ (id)identifier;
+ (double)cellHeight;

- (void)initViews;
- (void)configWithBellPushStrategy:(unsigned long long)a0 type:(unsigned long long)a1 isCheck:(BOOL)a2;
- (id)titleForLabelWithBellPushStrategy:(unsigned long long)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)awakeFromNib;

@end
