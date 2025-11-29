@class AWEECShoppingAIGuideGrowingLabel, AWEECShoppingAIGuideMessageSingleTextViewModel;

@interface AWEECShoppingAIGuideTextCard : AWEECShoppingAIGuideBaseCard

@property (retain, nonatomic) AWEECShoppingAIGuideMessageSingleTextViewModel *textViewModel;
@property (retain, nonatomic) AWEECShoppingAIGuideGrowingLabel *label;

- (void)setupUIWithModel:(id)a0;
- (void)updateTextWithMessageModel:(id)a0;
- (void)updateTextWithFont:(id)a0 textColor:(id)a1;
- (void)updateTextDelegate:(id)a0;
- (void)updateTextTypewriterEnable:(BOOL)a0;
- (void)updateText:(id)a0 callTrace:(id)a1;
- (void)updateTextLongPressAction:(id /* block */)a0;
- (void).cxx_destruct;

@end
