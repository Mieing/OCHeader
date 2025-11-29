@interface AWEDeliveryStringUtil : NSObject

+ (double)awed_widthWithFont:(id)a0 height:(double)a1 str:(id)a2;
+ (double)awed_heightWithFont:(id)a0 width:(double)a1 str:(id)a2;
+ (struct CGSize { double x0; double x1; })awed_sizeWithFont:(id)a0 width:(double)a1 maxLine:(long long)a2 str:(id)a3;
+ (id)awed_plainTextForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 attrStr:(id)a1;
+ (struct CGSize { double x0; double x1; })awed_sizeWithFont:(id)a0 width:(double)a1 str:(id)a2;
+ (double)awed_heightWithFont:(id)a0 width:(double)a1 maxLine:(long long)a2 str:(id)a3;

@end
