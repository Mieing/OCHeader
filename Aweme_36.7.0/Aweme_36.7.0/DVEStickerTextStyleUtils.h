@interface DVEStickerTextStyleUtils : NSObject

+ (unsigned long long)nextStyleWithStyle:(unsigned long long)a0 totalStyles:(id)a1;
+ (id)p_lastFontIDKey;
+ (id)lastFontID;
+ (unsigned long long)nextStyleWithStyle:(unsigned long long)a0;
+ (id)accessibilityLabelWithStyle:(unsigned long long)a0;
+ (double)plainRectangleLineSpacing;
+ (double)plainRectangleAdditionalHeight;
+ (void)setLastFontID:(id)a0;
+ (void)getSuggestedFont:(id *)a0 fontManager:(id)a1 index:(long long *)a2;
+ (void)setupFontIfNeededWithModel:(id)a0 fontManager:(id)a1;
+ (id)allStyles;

@end
