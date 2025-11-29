@interface ACCStickerTextStyleUtils : NSObject

+ (void)setupFontIfNeededWithModel:(id)a0;
+ (void)setUpOnlyFontWithModel:(id)a0;
+ (unsigned long long)nextStyleWithStyle:(unsigned long long)a0 totalStyles:(id)a1;
+ (id)p_lastFontIDKey;
+ (id)lastFontID;
+ (void)getSuggestedFont:(id *)a0 index:(long long *)a1;
+ (unsigned long long)nextStyleWithStyle:(unsigned long long)a0;
+ (id)accessibilityLabelWithStyle:(unsigned long long)a0;
+ (double)plainRectangleLineSpacing;
+ (double)plainRectangleAdditionalHeight;
+ (void)setLastFontID:(id)a0;
+ (id)lastTextStyle;
+ (void)setLastTextStyle:(id)a0;
+ (id)allStyles;

@end
