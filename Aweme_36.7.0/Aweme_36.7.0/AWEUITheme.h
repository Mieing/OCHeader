@interface AWEUITheme : NSObject

@property (nonatomic) unsigned long long colorSuit;
@property (nonatomic) long long themeStyle;

+ (id)getLightTheme;
+ (id)getDarkTheme;
+ (id)getThemeNameWithStyle:(long long)a0;
+ (id)getThemeWithThemeStyle:(long long)a0;
+ (id)getThemeWithColorSuit:(unsigned long long)a0;

- (id)getCurrentThemeName;
- (id)initWithColorSuit:(unsigned long long)a0 themeStyle:(long long)a1;

@end
