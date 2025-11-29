@interface SKBounceAnimation : CAKeyframeAnimation

@property (retain, nonatomic) id fromValue;
@property (retain, nonatomic) id byValue;
@property (retain, nonatomic) id toValue;
@property (nonatomic) unsigned long long numberOfBounces;
@property (nonatomic) BOOL shouldOvershoot;
@property (nonatomic) BOOL shake;
@property (nonatomic) double stiffness;

+ (id)animationWithKeyPath:(id)a0;

- (id)initWithKeyPath:(id)a0;
- (void)setDuration:(double)a0;
- (void)createValueArray;
- (id)createRectArrayFromXValues:(id)a0 yValues:(id)a1 widths:(id)a2 heights:(id)a3;
- (id)createTransformArrayFromM11:(id)a0 M12:(id)a1 M13:(id)a2 M14:(id)a3 M21:(id)a4 M22:(id)a5 M23:(id)a6 M24:(id)a7 M31:(id)a8 M32:(id)a9 M33:(id)a10 M34:(id)a11 M41:(id)a12 M42:(id)a13 M43:(id)a14 M44:(id)a15;
- (id)createColorArrayFromRed:(id)a0 green:(id)a1 blue:(id)a2 alpha:(id)a3;
- (id)valueArrayForStartValue:(double)a0 endValue:(double)a1;
- (void).cxx_destruct;

@end
