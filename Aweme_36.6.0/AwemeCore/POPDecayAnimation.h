@interface POPDecayAnimation : POPPropertyAnimation

@property (copy, nonatomic) id velocity;
@property (readonly, copy, nonatomic) id originalVelocity;
@property (nonatomic) double deceleration;
@property (readonly, nonatomic) double duration;

+ (id)animationWithPropertyNamed:(id)a0;
+ (id)animation;

- (void)_ensureComputedProperties;
- (void)_invalidateComputedProperties;
- (void)_appendDescription:(id)a0 debug:(BOOL)a1;
- (void)_initState;
- (id)reversedVelocity;
- (void)setVelocity:(id)a0;
- (id)init;
- (id)velocity;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setFromValue:(id)a0;
- (id)toValue;
- (void)setToValue:(id)a0;

@end
