@class IESECFeedInnerFlowBuyViewConfig, IESECGoodsFeedActionButton, UIStackView;

@interface IESECFeedInnerFlowBuyView : UIView

@property (retain, nonatomic) UIStackView *buyContainer;
@property (retain, nonatomic) IESECGoodsFeedActionButton *buyButton;
@property (retain, nonatomic) IESECFeedInnerFlowBuyViewConfig *config;

- (void)configUI;
- (void)updateWithParameters:(id)a0;
- (id)initWithParameters:(id)a0 config:(id)a1;
- (id)buildNGroupBuyButton:(id)a0;
- (id)buildBuyButton:(id)a0;
- (id)buildMembershipButton:(id)a0;
- (id)buildBuyButtonInde:(id)a0;
- (void).cxx_destruct;
- (void)click;

@end
