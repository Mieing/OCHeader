@class GXLottieAnimationModel, NSString, NSDictionary, GXPropAnimatorSet;

@interface GXAnimationModel : GXAnimationBaseModel

@property (nonatomic) BOOL state;
@property (nonatomic) BOOL trigger;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) NSDictionary *animationInfo;
@property (retain, nonatomic) GXPropAnimatorSet *propAnimatorSet;
@property (retain, nonatomic) GXLottieAnimationModel *lottieAnimator;

- (void)setupAnimationInfo:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
