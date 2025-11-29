@class UILabel, UIImageView, UIView;

@interface AWELiteCutSameRewardView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *preTitleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *rewardLabel;

- (void)setRewardNum:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
