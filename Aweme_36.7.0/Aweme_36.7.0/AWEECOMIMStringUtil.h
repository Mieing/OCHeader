@interface AWEECOMIMStringUtil : NSObject

+ (id)ecomim_douyinNumberABCRegularFontOfSize:(double)a0;
+ (double)ecomim_widthWithFont:(id)a0 height:(double)a1 str:(id)a2;
+ (double)ecomim_heightWithFont:(id)a0 width:(double)a1 str:(id)a2;
+ (double)ecomim_heightWithFont:(id)a0 width:(double)a1 maxLine:(long long)a2 str:(id)a3;
+ (id)attributedStringWithStr:(id)a0 font:(id)a1 color:(id)a2;
+ (id)attributedStringWithStr1:(id)a0 str2:(id)a1;
+ (id)ecomim_douyinNumberABCMediumFontOfSize:(double)a0;
+ (struct CGSize { double x0; double x1; })ecomim_sizeWithFont:(id)a0 width:(double)a1 maxLine:(long long)a2 str:(id)a3;
+ (void)ecomim_setTextBackedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 mutAttrStr:(id)a2;
+ (struct CGSize { double x0; double x1; })ecomim_sizeWithAttributedStr:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })ecomim_sizeWithFont:(id)a0 width:(double)a1 str:(id)a2;
+ (id)ecomim_plainTextForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 attrStr:(id)a1;
+ (id)ecomim_douyinNumberABCFontOfSize:(double)a0 weight:(double)a1;
+ (BOOL)ecomim_isDecimalDigitalsWithStr:(id)a0;

@end
