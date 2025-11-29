@class UILabel;

@interface AFDStoryDiverseDiggAnimator : NSObject

@property (weak, nonatomic) UILabel *currentCountLabel;

- (id)labelGroupAnimationWithStartPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)imageGroupAnimationWithStartPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })randomEndPointWithStartPoint:(struct CGPoint { double x0; double x1; })a0 direction:(long long)a1;
- (id)createPathFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (double)randomFloatBetween:(double)a0 and:(double)a1;
- (void)startAnimationWithContext:(id)a0;
- (void).cxx_destruct;
- (long long)randomDirection;

@end
