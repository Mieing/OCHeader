@class UILabel;

@interface AFDStoryDiverseDiggDoubleClickAnimator : NSObject

@property (weak, nonatomic) UILabel *currentCountLabel;

- (id)labelGroupAnimationWithStartPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)imageGroupAnimationWithStartPoint:(struct CGPoint { double x0; double x1; })a0;
- (double)randomFloatBetween:(double)a0 and:(double)a1;
- (void)startAnimationWithContext:(id)a0;
- (void).cxx_destruct;
- (long long)randomDirection;

@end
