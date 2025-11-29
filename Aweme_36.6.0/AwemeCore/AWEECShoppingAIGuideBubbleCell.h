@class AWEECShoppingAIGuideBubble, AWEECShoppingAIGuideMessageSingleViewModel, AWEECShoppingAIGuideBaseCard;

@interface AWEECShoppingAIGuideBubbleCell : AWEECShoppingAIGuideBaseCell

@property (nonatomic) double contentMaxWidth;
@property (retain, nonatomic) AWEECShoppingAIGuideMessageSingleViewModel *viewModel;
@property (nonatomic) unsigned long long role;
@property (retain, nonatomic) AWEECShoppingAIGuideBubble *bubbleView;
@property (retain, nonatomic) AWEECShoppingAIGuideBaseCard *cardView;

- (void)setupCardWithModel:(id)a0;
- (void)reloadWithSingleMsgViewModel:(id)a0;
- (void)setupCardInBubble:(id)a0;
- (BOOL)animateFromLeft;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)animatingView;
- (void)setupUI;

@end
