@class AWEUIDynamicBlurEffect;

@interface AWEUIDynamicVibrancyEffect : UIVibrancyEffect

@property (retain, nonatomic) AWEUIDynamicBlurEffect *awe_blurEffect;

+ (id)dynamicVibrancyEffectForBlurEffect:(id)a0 inTheme:(long long)a1;
+ (id)dynamicVibrancyEffectForBlurEffect:(id)a0;

- (id)vibrancyEffectInSpecificTheme:(long long)a0;
- (id)vibrancyEffectInCurrentTheme;
- (void).cxx_destruct;

@end
