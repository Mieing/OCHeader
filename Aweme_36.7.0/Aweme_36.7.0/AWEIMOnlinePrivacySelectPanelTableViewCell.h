@class AWEIMOnlinePrivacySettingModel, UIImageView, UILabel, UIView, UIButton;

@interface AWEIMOnlinePrivacySelectPanelTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *topCuttingLineView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *selectCountLabel;
@property (retain, nonatomic) UIButton *editButton;
@property (retain, nonatomic) UIImageView *rightView;
@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) AWEIMOnlinePrivacySettingModel *model;
@property (nonatomic) unsigned long long selectCount;
@property (copy, nonatomic) id /* block */ editBlock;
@property (nonatomic) unsigned long long cornerType;
@property (nonatomic) BOOL useCardUIStyle;

+ (Class)aAWEBrandColorAdapterClass;
+ (id)identifier;
+ (double)cellHeight;

- (id)aAWEBrandColorAdapter;
- (void)setupCorners;
- (id)initWithModel:(id)a0 selectCount:(unsigned long long)a1;
- (void)updateRedUIWithSelected:(BOOL)a0 selectCount:(unsigned long long)a1;
- (BOOL)enableFixOnlinePrivacySettingCardUIBug;
- (void)updateSelected:(BOOL)a0 selectCount:(unsigned long long)a1;
- (void)p_updateRedUIWithSelected:(BOOL)a0;
- (void)p_setupUI;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)editButtonTapped:(id)a0;
- (void)layoutSubviews;

@end
