@class UIView;

@interface AWENearbyHalfScreenTargetFadeScaleAnimation : AWENearbyHalfScreenAnimation

@property (weak, nonatomic) UIView *targetView;
@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) double scale;
@property (nonatomic) double targetAlpha;
@property (nonatomic) double initAlpha;

- (BOOL)isValidAnimation;
- (long long)animationValue;
- (id)animationType;
- (void).cxx_destruct;
- (id)init;

@end
