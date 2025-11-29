@interface AWEECShoppingAIGuideIncomingBubble : AWEECShoppingAIGuideBubble

@property (nonatomic) BOOL isTop;
@property (nonatomic) BOOL isBottom;

- (void)configBubbleTop:(BOOL)a0 bottom:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
