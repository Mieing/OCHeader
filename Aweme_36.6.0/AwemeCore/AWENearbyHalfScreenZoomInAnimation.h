@class UIView;

@interface AWENearbyHalfScreenZoomInAnimation : AWENearbyHalfScreenAnimation

@property (weak, nonatomic) UIView *contentView;
@property (weak, nonatomic) UIView *hiddenViewBeforeAnimation;
@property (weak, nonatomic) UIView *targetView;
@property (weak, nonatomic) UIView *containerView;

- (BOOL)isValidAnimation;
- (long long)animationValue;
- (id)animationType;
- (void).cxx_destruct;

@end
