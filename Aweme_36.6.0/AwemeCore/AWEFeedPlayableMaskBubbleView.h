@class UIImageView, UILabel, UIView, AWEFeedPlayableRewardBeforeModel;

@interface AWEFeedPlayableMaskBubbleView : UIImageView

@property (retain, nonatomic) UIView *iconPlaceholder;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UILabel *unitLabel;
@property (retain, nonatomic) AWEFeedPlayableRewardBeforeModel *rewardBeforeModel;

- (void)configWithModel:(id)a0;
- (void)constraintSubviews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
