@class UILabel, UIImageView, UIView;

@interface AWEConcernBellPushVideoStrategyPanelTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *checkIcon;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) BOOL useCardUIStyle;
@property (nonatomic) unsigned long long bellPushType;
@property (nonatomic) unsigned long long cornerType;

+ (id)identifier;
+ (double)cellHeight;

- (void)initViews;
- (void)setupCorners;
- (id)titleForLabelWithBellPushStrategy:(unsigned long long)a0;
- (id)nameForIconWithBellPushStrategy:(unsigned long long)a0;
- (void)configWithBellPushStrategy:(unsigned long long)a0 bellPushType:(unsigned long long)a1 isCheck:(BOOL)a2;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)awakeFromNib;

@end
