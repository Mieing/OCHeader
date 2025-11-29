@class NSString, NSMutableArray;

@interface GXPropAnimatorSet : GXAnimationBaseModel

@property (copy, nonatomic) NSString *ordering;
@property (retain, nonatomic) NSMutableArray *animators;

- (void)setupAnimationInfo:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
