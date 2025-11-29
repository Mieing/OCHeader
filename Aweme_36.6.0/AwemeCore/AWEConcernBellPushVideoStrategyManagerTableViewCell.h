@class UIImageView, UILabel, UIView;

@interface AWEConcernBellPushVideoStrategyManagerTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (nonatomic) unsigned long long cornerType;
@property (nonatomic) BOOL useCardUIStyle;

+ (id)identifier;
+ (double)cellHeight;

- (void)setupCorners;
- (void)configWithModel:(id)a0 strategy:(unsigned long long)a1;
- (void)configWithLiveUserModel:(id)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (void)setupUI;
- (BOOL)isDarkMode;

@end
