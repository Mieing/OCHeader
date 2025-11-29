@interface GXUIHelper : NSObject

+ (id)gx_colorWithHexString:(id)a0;
+ (id)gx_colorWithString:(id)a0;
+ (long long)convertContentMode:(id)a0;
+ (double)deviceRatio;
+ (long long)convertTextAlignment:(id)a0;
+ (id)convertFont:(id)a0 fontWeight:(id)a1;
+ (double)convertFontWeight:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })portraitBounds;
+ (id)fontFromStyle:(id)a0;
+ (id)convertFont:(id)a0;

@end
