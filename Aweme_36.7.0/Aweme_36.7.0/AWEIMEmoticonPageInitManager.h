@interface AWEIMEmoticonPageInitManager : NSObject

+ (id)pageMap;
+ (id)localEmotionInfosWithContext:(id)a0;
+ (void)registerThemeStyle:(long long)a0 pageName:(id)a1;
+ (void)registerThemeStyle:(long long)a0 themeStandardStyle:(long long)a1 pageName:(id)a2;
+ (id)p_innerPageMap;
+ (id)p_innerStandardStyleMap;
+ (void)registerThemeStyle:(long long)a0 themeStandardStyle:(long long)a1;
+ (void)registerAllPagesOnce;
+ (id)standardThemeStyleDictToEmoticonThemeStyle;

@end
