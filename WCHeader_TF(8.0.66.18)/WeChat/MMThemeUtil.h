@interface MMThemeUtil : NSObject

+ (BOOL)parseBOOLFromValues:(id)a0;
+ (id)parseFontFromValues:(id)a0;
+ (long long)parseIntegerFromValues:(id)a0;
+ (double)parseFontSizeFromValues:(id)a0;
+ (double)parseFloatFromValues:(id)a0;
+ (double)parseFloatFromValues:(id)a0 maxWidth:(double)a1;
+ (double)parseFloatFromValues:(id)a0 needCeil:(BOOL)a1 inSubScene:(BOOL)a2;
+ (double)parseFloatFromValues:(id)a0 needCeil:(BOOL)a1 maxWidth:(double)a2 inSubScene:(BOOL)a3;
+ (struct CGPoint { double x0; double x1; })parsePointFromValues:(id)a0;
+ (struct CGSize { double x0; double x1; })parseSizeFromValues:(id)a0;
+ (id)parseStrechedImageFromValues:(id)a0;
+ (id)parseStringFromValues:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })parseRectFromValues:(id)a0;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })parseEdgeInsetsFromValues:(id)a0;
+ (id)parseColorFromValues:(id)a0;
+ (id)parseOneColor:(id)a0 fromDeclarations:(id)a1 intoValues:(id)a2;
+ (void)parseColorDeclarations:(id)a0 toValues:(id)a1;

@end
