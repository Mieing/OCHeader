@interface IESECBlurEffect : UIBlurEffect

@property (nonatomic) double blurRadius;
@property (nonatomic) double saturationDeltaFactor;

+ (void)customBlurConfig;
+ (id)effectWithStyle:(long long)a0 blurRadius:(double)a1 saturationDeltaFactor:(double)a2;
+ (void)initialize;

@end
