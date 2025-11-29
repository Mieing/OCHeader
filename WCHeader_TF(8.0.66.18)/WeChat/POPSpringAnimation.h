@interface POPSpringAnimation : POPPropertyAnimation

@property (copy, nonatomic) id velocity;
@property (nonatomic) double springBounciness;
@property (nonatomic) double springSpeed;
@property (nonatomic) double dynamicsTension;
@property (nonatomic) double dynamicsFriction;
@property (nonatomic) double dynamicsMass;

+ (void)convertBounciness:(double)a0 speed:(double)a1 toTension:(double *)a2 friction:(double *)a3 mass:(double *)a4;
+ (void)convertTension:(double)a0 friction:(double)a1 toBounciness:(double *)a2 speed:(double *)a3;
+ (id)animation;
+ (id)animationWithPropertyNamed:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_initState;
- (id)init;
- (void)dealloc;
- (void *)solver;
- (void)setSolver:(void *)a0;
- (void)_updatedDynamicsTension;
- (void)_updatedDynamicsFriction;
- (void)_updatedDynamicsMass;
- (void)_appendDescription:(id)a0 debug:(BOOL)a1;

@end
