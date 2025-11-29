@interface AWEUIDynamicBlurEffect : UIBlurEffect

@property (nonatomic) long long awe_themeStyle;
@property (nonatomic) unsigned long long awe_effectStyle;

+ (id)dynamicBlurEffectWithStyle:(unsigned long long)a0 inTheme:(long long)a1;
+ (id)dynamicBlurEffectWithStyle:(unsigned long long)a0;

- (id)blurEffectInSpecificTheme:(long long)a0;
- (id)blurEffectInCurrentTheme;

@end
