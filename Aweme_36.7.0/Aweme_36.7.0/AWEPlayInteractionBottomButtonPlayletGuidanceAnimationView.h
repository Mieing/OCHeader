@class AWEPlayInteractionBottomButtonPlayletGuidanceAnimationViewConfig, UIImageView, UILabel, UIView, AWEAnimatedNumberScrollView;

@interface AWEPlayInteractionBottomButtonPlayletGuidanceAnimationView : UIView

@property (retain, nonatomic) AWEPlayInteractionBottomButtonPlayletGuidanceAnimationViewConfig *config;
@property (retain, nonatomic) UIImageView *highlightImageView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *coinIncentiveView;
@property (retain, nonatomic) UILabel *prefixLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) AWEAnimatedNumberScrollView *animatedNumberScrollView;

- (void)setupCoinIncentiveView;
- (long long)digitsCountForNumber:(long long)a0;
- (void)startShowMovableViewAnimationWithDuration:(double)a0 completion:(id /* block */)a1;
- (void)startHighlightAnimationWithDuration:(double)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)setup;

@end
