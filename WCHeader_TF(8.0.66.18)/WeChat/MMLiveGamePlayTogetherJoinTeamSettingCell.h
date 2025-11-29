@class UILabel, UIImageView, UIView;

@interface MMLiveGamePlayTogetherJoinTeamSettingCell : MMLiveGamePlayTogetherTableViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *optionLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;

+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupViews;
- (void)setupAction;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWithItem:(id)a0;
- (void)prepareForReuse;
- (void)updateSize;
- (void).cxx_destruct;

@end
