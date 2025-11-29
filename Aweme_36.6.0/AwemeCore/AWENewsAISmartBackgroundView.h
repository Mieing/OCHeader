@class AWENewsAISmartBackgroundViewModel, DUXBaseImageView, CAGradientLayer;

@interface AWENewsAISmartBackgroundView : UIView

@property (retain, nonatomic) AWENewsAISmartBackgroundViewModel *viewModel;
@property (retain, nonatomic) DUXBaseImageView *backgroundImageView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

- (void)p_configUI;
- (void)p_makeConstraint;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)layoutSubviews;

@end
