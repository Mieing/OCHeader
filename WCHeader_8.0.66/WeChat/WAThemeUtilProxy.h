@class NSString;

@interface WAThemeUtilProxy : NSObject <IWAThemeUtilService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parseColorFromValues:(id)a0;
+ (id)parseStrechedImageFromValues:(id)a0;
+ (struct CGPoint { double x0; double x1; })parsePointFromValues:(id)a0;
+ (struct CGSize { double x0; double x1; })parseSizeFromValues:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })parseRectFromValues:(id)a0;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })parseEdgeInsetsFromValues:(id)a0;
+ (BOOL)parseBOOLFromValues:(id)a0;
+ (long long)parseIntegerFromValues:(id)a0;
+ (double)parseFloatFromValues:(id)a0;
+ (id)parseStringFromValues:(id)a0;
+ (double)parseFontSizeFromValues:(id)a0;
+ (id)parseFontFromValues:(id)a0;
+ (void)parseColorDeclarations:(id)a0 toValues:(id)a1;


@end
