@interface AWENewVideoCoverTextProcessor : NSObject

+ (void)selectUIColor:(id)a0 withTextLayer:(id)a1 imageWrapper:(id)a2;
+ (void)selectUIColor:(id)a0 withTextTemplateLayer:(id)a1 imageWrapper:(id)a2;
+ (void)selectUIColors:(id)a0 withTextTemplateLayer:(id)a1 imageWrapper:(id)a2;
+ (void)selectAlign:(long long)a0 withTextLayer:(id)a1 imageWrapper:(id)a2;
+ (void)selectAlign:(long long)a0 withTextTemplateLayer:(id)a1 imageWrapper:(id)a2;
+ (void)selectAligns:(id)a0 withTextTemplateLayer:(id)a1 imageWrapper:(id)a2;
+ (void)selectTextStyle:(unsigned long long)a0 textModel:(id)a1 withTextLayer:(id)a2 imageWrapper:(id)a3;
+ (void)selectTextForegroundColor:(id)a0 outLine:(BOOL)a1 outlineWidth:(double)a2 outlineColor:(id)a3 backgroundColor:(id)a4 withTextLayer:(id)a5 imageWrapper:(id)a6;
+ (void)selectTextStyle:(unsigned long long)a0 textModel:(id)a1 withTextTemplateLayer:(id)a2 imageWrapper:(id)a3;
+ (void)selectTextForegroundColors:(id)a0 outLines:(id)a1 outlineWidths:(id)a2 outlineColors:(id)a3 backgroundColors:(id)a4 withTextTemplateLayer:(id)a5 imageWrapper:(id)a6;
+ (void)changeTextWithLastContent:(id)a0 withTextLayer:(id)a1 imageWrapper:(id)a2;
+ (void)changeTextWithLastContent:(id)a0 withTextTemplateLayer:(id)a1 imageWrapper:(id)a2;
+ (void)selectFontSource:(id)a0 withTextLayer:(id)a1 imageWrapper:(id)a2;
+ (void)selectFontType:(long long)a0 resourceId:(id)a1 withTextTemplateLayer:(id)a2 imageWrapper:(id)a3;
+ (void)selectFonts:(id)a0 withTextTemplateLayer:(id)a1 imageWrapper:(id)a2;
+ (void)selectTextForegroundColor:(id)a0 outLine:(BOOL)a1 outlineWidth:(double)a2 outlineColor:(id)a3 backgroundColor:(id)a4 withTextTemplateLayer:(id)a5 imageWrapper:(id)a6;

@end
