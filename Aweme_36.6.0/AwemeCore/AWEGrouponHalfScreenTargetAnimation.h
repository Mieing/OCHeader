@class UIView;

@interface AWEGrouponHalfScreenTargetAnimation : AWEGrouponHalfScreenAnimation

@property (weak, nonatomic) UIView *targetView;
@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) double scale;

- (BOOL)isValidAnimation;
- (long long)animationValue;
- (id)animationType;
- (void).cxx_destruct;
- (id)init;

@end
