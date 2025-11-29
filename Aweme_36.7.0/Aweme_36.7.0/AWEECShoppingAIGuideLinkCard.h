@class UIImageView, AWEECShoppingAIGuideMessageSingleLinkViewModel, UILabel;

@interface AWEECShoppingAIGuideLinkCard : AWEECShoppingAIGuideBaseCard

@property (retain, nonatomic) AWEECShoppingAIGuideMessageSingleLinkViewModel *linkViewModel;
@property (retain, nonatomic) UIImageView *arrow;
@property (retain, nonatomic) UILabel *label;

- (void)setupUIWithModel:(id)a0;
- (void)tapView:(id)a0;
- (void).cxx_destruct;

@end
