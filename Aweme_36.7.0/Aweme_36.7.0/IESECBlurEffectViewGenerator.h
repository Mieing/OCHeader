@interface IESECBlurEffectViewGenerator : NSObject

+ (id)sharedGenerator;

- (id)generateStandardBlurEffectView;
- (id)generateCustomBlurEffectViewWithStyle:(long long)a0 alpha:(double)a1;

@end
