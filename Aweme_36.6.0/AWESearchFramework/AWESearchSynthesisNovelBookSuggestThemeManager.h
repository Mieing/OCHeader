@class NSDictionary;

@interface AWESearchSynthesisNovelBookSuggestThemeManager : NSObject

@property (retain, nonatomic) NSDictionary *themeCache;

+ (id)themeFromType:(unsigned long long)a0;
+ (id)shareInstance;
+ (id)themes;

- (id)darkTheme;
- (id)yellowTheme;
- (id)greenTheme;
- (void).cxx_destruct;
- (id)init;
- (id)defaultTheme;
- (id)blueTheme;

@end
