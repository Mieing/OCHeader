@interface AWEIMAttributedStringSize : NSObject

+ (struct CGSize { double x0; double x1; })aweim_componentText:(id)a0 limitedSize:(struct CGSize { double x0; double x1; })a1 maxLine:(long long)a2;
+ (BOOL)aweim_p_enable_useSystemLayout;
+ (struct CGSize { double x0; double x1; })aweim_p_boundingRectWithSize:(struct CGSize { double x0; double x1; })a0 maximumNumberOfLines:(unsigned long long)a1 attrString:(id)a2;
+ (double)aweim_p_ceilToViewScale:(double)a0;

@end
