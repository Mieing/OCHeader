@interface GXBizHelper : NSObject

+ (void)loadIconFont;
+ (id)imageFromToken:(id)a0;
+ (id)fontFamilyFromToken:(id)a0;
+ (double)dimFromDesignToken:(id)a0;
+ (id)colorFromDesignToken:(id)a0;
+ (id)fontFromDesignToken:(id)a0;
+ (id)fontFromDesignToken:(id)a0 fontWeight:(double)a1;
+ (double)valueForRule:(id)a0 withContainerWidth:(double)a1 gap:(double)a2 margin:(double)a3;
+ (struct CGSize { double x0; double x1; })screenSize;

@end
