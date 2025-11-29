@interface IESUIColor : NSObject

+ (id)colorWithARGBString:(id)a0 defaultColor:(id)a1;
+ (long long)userPreferDarkModeStyle;
+ (BOOL)disableDarkMode;
+ (void)setDisableDarkMode:(BOOL)a0;
+ (void)setUserPreferDarkModeStyle:(long long)a0;
+ (void)switchUIConfigWithPath:(id)a0;
+ (void)switchUIConfigWithJsonData:(id)a0;
+ (void)switchUIConfigWithDefaultSetting;
+ (id)colorResourceForPath:(id)a0;
+ (void)generateStandardColorMapWithRawColorResource:(id)a0;
+ (id)colorNamed:(id)a0;
+ (BOOL)isDarkMode;

@end
