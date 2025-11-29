@interface AFDRoundRectangleButton : UIButton

@property (nonatomic) long long priority;

+ (id)transparentButton;
+ (id)exitButton;

- (void)removeImpactFeedback;
- (void)addImpactFeedback;
- (void)generateImpactFeedback:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentAlpha:(double)a0;

@end
