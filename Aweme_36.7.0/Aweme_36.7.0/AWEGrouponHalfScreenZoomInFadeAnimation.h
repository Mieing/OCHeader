@interface AWEGrouponHalfScreenZoomInFadeAnimation : AWEGrouponHalfScreenZoomInAnimation

@property (nonatomic) double initAlpha;
@property (nonatomic) double targetAlpha;
@property (copy, nonatomic) id /* block */ animationWillBeginBlock;
@property (nonatomic) double containerScale;

- (BOOL)isValidAnimation;
- (long long)animationValue;
- (id)animationType;
- (void).cxx_destruct;
- (id)init;

@end
