@interface AWEIMSelectedAlphaButton : UIButton

@property (nonatomic) double selectedAlpha;
@property (nonatomic) double disabledAlpha;

+ (id)buttonWithSelectedAlpha:(double)a0 disabledAlpha:(double)a1;

- (void)setHighlighted:(BOOL)a0;

@end
