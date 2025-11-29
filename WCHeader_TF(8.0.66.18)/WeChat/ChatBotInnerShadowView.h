@class UIColor, ChatBotInnerShadowLayer;

@interface ChatBotInnerShadowView : UIView

@property (readonly, nonatomic) ChatBotInnerShadowLayer *innerShadowLayer;
@property (nonatomic) int shadowMask;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) struct CGSize { double x0; double x1; } shadowOffset;
@property (nonatomic) double shadowRadius;
@property (nonatomic) double cornerRadius;

- (void)_init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
