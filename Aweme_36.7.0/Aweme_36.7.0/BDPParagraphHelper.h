@interface BDPParagraphHelper : NSObject

+ (struct CGSize { double x0; double x1; })drawSizeForString:(id)a0 maxWidth:(double)a1 font:(id)a2;
+ (struct CGSize { double x0; double x1; })drawSizeForString:(id)a0 maxWidth:(double)a1 font:(id)a2 lineHeight:(double)a3;
+ (struct CGSize { double x0; double x1; })drawSizeForString:(id)a0 maxWidth:(double)a1 font:(id)a2 lineHeight:(double)a3 kern:(double)a4;
+ (struct CGSize { double x0; double x1; })drawSizeForString:(id)a0 font:(id)a1;
+ (struct CGSize { double x0; double x1; })drawSizeForString:(id)a0 fontNameList:(id)a1 size:(double)a2;

@end
