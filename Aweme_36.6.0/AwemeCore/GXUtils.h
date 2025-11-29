@interface GXUtils : NSObject

+ (BOOL)isPureInt:(id)a0;
+ (BOOL)isPureFloat:(id)a0;
+ (id)commonPropertyWithView:(id)a0;
+ (void)gx_clearGradientBackgroundWithView:(id)a0;
+ (void)gx_view:(id)a0 setBackgroundGradient:(id)a1;
+ (void)gx_view:(id)a0 setCornerRadius:(struct GXCornerRadius_t { double x0; double x1; double x2; double x3; })a1 borderWidth:(double)a2 borderColor:(id)a3;
+ (void)gx_view:(id)a0 setShadow:(id)a1 offset:(struct CGSize { double x0; double x1; })a2 radius:(double)a3;
+ (BOOL)isValidArray:(id)a0;
+ (id)gx_image:(id)a0 resizeWithFitSize:(struct CGSize { double x0; double x1; })a1;
+ (id)gx_image:(id)a0 resizeWithCoverSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)isMutableDictionary:(id)a0;
+ (id)gx_mutableDeepCopyWithDictionary:(id)a0;
+ (id)loadTemplateContenttWithFolderPath:(id)a0 templateId:(id)a1 templateVersion:(id)a2;
+ (id)parserStyleString:(id)a0;
+ (BOOL)boolValue:(id)a0;
+ (BOOL)isMutableArray:(id)a0;
+ (BOOL)isValidMapTable:(id)a0;
+ (void)executeActionOnMainThread:(id /* block */)a0;
+ (id)gx_rootViewWithView:(id)a0;
+ (void)gx_removeAllSubviewsWithView:(id)a0;
+ (id)gx_snapshotImageWithView:(id)a0;
+ (id)gx_viewControllerWithView:(id)a0;
+ (id)gx_image:(id)a0 resizeWithSize:(struct CGSize { double x0; double x1; })a1;
+ (id)gx_image:(id)a0 resizeWithFillSize:(struct CGSize { double x0; double x1; })a1;
+ (id)gx_mutableDeepCopyWithArray:(id)a0;
+ (id)uuidString;
+ (BOOL)isArray:(id)a0;
+ (BOOL)isValidVersion:(id)a0;
+ (BOOL)isNumber:(id)a0;
+ (BOOL)isDictionary:(id)a0;
+ (BOOL)isString:(id)a0;
+ (BOOL)isValidString:(id)a0;
+ (BOOL)isValidDictionary:(id)a0;

@end
