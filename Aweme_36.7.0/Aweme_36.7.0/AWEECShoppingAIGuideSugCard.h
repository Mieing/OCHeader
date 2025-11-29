@class AWEECShoppingAIGuideMessageSingleSugViewModel, UILabel, UIImageView;

@interface AWEECShoppingAIGuideSugCard : AWEECShoppingAIGuideBaseCard

@property (retain, nonatomic) AWEECShoppingAIGuideMessageSingleSugViewModel *sugCardModel;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *arrow;

- (void)setupUIWithModel:(id)a0;
- (void)tapView:(id)a0;
- (void).cxx_destruct;
- (void)willMoveToSuperview:(id)a0;

@end
