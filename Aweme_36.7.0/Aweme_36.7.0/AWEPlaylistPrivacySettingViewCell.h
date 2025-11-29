@class UIImageView, CAShapeLayer, UILabel, MASConstraint;

@interface AWEPlaylistPrivacySettingViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (nonatomic) BOOL onlyBottomLine;
@property (nonatomic) BOOL drawLine;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) MASConstraint *iconSizeConstraint;
@property (retain, nonatomic) CAShapeLayer *topLine;
@property (retain, nonatomic) CAShapeLayer *bottomLine;

- (void)configModel:(id)a0;
- (void)p_layoutUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;

@end
