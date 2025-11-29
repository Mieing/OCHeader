@class CAGradientLayer, UIImageView, AWEFeedPlayableRewardAfterModel, UILabel, UIView;

@interface AWEFeedPlayableMaskGiftView : UIView

@property (retain, nonatomic) UIView *iconPlaceholder;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UILabel *useLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) AWEFeedPlayableRewardAfterModel *rewardAfterModel;

- (void)configWithModel:(id)a0;
- (void)constraintSubviews;
- (void)p_configBgColorAndBorder;
- (void)copyGiftCode;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
