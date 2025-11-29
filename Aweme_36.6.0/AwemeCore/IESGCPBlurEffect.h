@interface IESGCPBlurEffect : UIBlurEffect

@property (nonatomic) double blurRadius;

+ (void)customBlurConfig;
+ (id)effectWithStyle:(long long)a0 blurRadius:(double)a1;
+ (void)initialize;

@end
