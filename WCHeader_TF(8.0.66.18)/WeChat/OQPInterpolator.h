@interface OQPInterpolator : NSObject

@property (readonly, copy, nonatomic) id /* block */ valueForProgress;

+ (id)linearInterpolator;

- (id)initWithInterpolationBlock:(id /* block */)a0;
- (long long)integerBetweenValue:(long long)a0 andValue:(long long)a1 progress:(double)a2;
- (double)floatBetweenValue:(double)a0 andValue:(double)a1 progress:(double)a2;
- (struct CGPoint { double x0; double x1; })pointBetweenValue:(struct CGPoint { double x0; double x1; })a0 andValue:(struct CGPoint { double x0; double x1; })a1 progress:(double)a2;
- (struct CGSize { double x0; double x1; })sizeBetweenValue:(struct CGSize { double x0; double x1; })a0 andValue:(struct CGSize { double x0; double x1; })a1 progress:(double)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectBetweenValue:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andValue:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 progress:(double)a2;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })affineTransformBetweenValue:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 andValue:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 progress:(double)a2;
- (void).cxx_destruct;

@end
