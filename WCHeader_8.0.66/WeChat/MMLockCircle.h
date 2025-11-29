@interface MMLockCircle : UIView

@property (nonatomic) BOOL errored;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL skiped;

- (id)initWithRadius:(double)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)highlightCell;
- (void)resetCell;
- (void)hightlightErrorCell;

@end
