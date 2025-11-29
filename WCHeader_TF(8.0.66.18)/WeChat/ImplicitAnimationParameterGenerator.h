@interface ImplicitAnimationParameterGenerator : NSObject

@property (nonatomic) unsigned long long beginPosition;
@property (nonatomic) double minSpeedX;
@property (nonatomic) double maxSpeedX;
@property (nonatomic) int reboundTimes;
@property (nonatomic) double minSpeedY;
@property (nonatomic) double maxSpeedY;
@property (nonatomic) double accelerationY;
@property (nonatomic) double speedBuffY;
@property (nonatomic) double scaleSpeed;

+ (id)presetGeneratorForType:(long long)a0;
+ (id)presetGeneratorForType:(long long)a0 isInteractive:(BOOL)a1;

- (void)setAnimationParameterForView:(id)a0;
- (BOOL)D2;

@end
