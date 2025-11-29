@interface MMUIView : UIView

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } expendTouchInsets;

+ (double)shakeHeadAnimationDurationForType:(unsigned long long)a0;

- (void)prepareShakeHead;
- (void)prepareShakeHeadForType:(unsigned long long)a0;
- (void)shakeHead;
- (void)shakeHeadForType:(unsigned long long)a0;
- (void)stopShakeHead;
- (id)shakeHeadAnimationForTimeOffset:(double)a0 andType:(unsigned long long)a1;
- (id)defaultShakeHeadAnimation;
- (id)crookShakeHeadAnimationNeedReverse:(BOOL)a0;
- (id)shakeHeadAnimation;
- (double)arcWithAngle:(double)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
