@class CAGradientLayer, UIImageView, UILabel, UIView;

@interface AWEPlayInteractionAITextElement : AWEPlayInteractionLeftElement

@property (retain, nonatomic) UILabel *aiTextLabel;
@property (retain, nonatomic) UIImageView *iconImageV;
@property (retain, nonatomic) UIImageView *arrowImageV;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *gradientBackground;
@property (retain, nonatomic) CAGradientLayer *gradient;
@property (retain, nonatomic) UIView *aiTextEntranceView;

- (id)activateInfoWithData:(id)a0;
- (void)setupNewTagStyle;
- (void)onAITextEntranceViewClicked:(id)a0;
- (BOOL)shouldAITextActiveWithData:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
