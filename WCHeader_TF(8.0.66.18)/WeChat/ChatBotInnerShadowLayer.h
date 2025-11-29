@interface ChatBotInnerShadowLayer : CAShapeLayer

@property (nonatomic) int shadowMask;

- (id)init;
- (void)layoutSublayers;
- (void)setShadowColor:(struct CGColor { } *)a0;
- (void)setShadowOpacity:(float)a0;
- (void)setShadowOffset:(struct CGSize { double x0; double x1; })a0;
- (void)setShadowRadius:(double)a0;
- (void)setCornerRadius:(double)a0;

@end
