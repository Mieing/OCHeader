@interface CControlUtil : NSObject

+ (unsigned long long)labelNumberOfLines:(id)a0 maxWidth:(double)a1 font:(id)a2;
+ (unsigned long long)labelNumberOfLines:(id)a0 maxWidth:(double)a1 maxHeight:(double)a2 font:(id)a3;
+ (double)labelLineHeight:(id)a0;
+ (double)labelWidth:(id)a0 maxWidth:(double)a1 font:(id)a2;
+ (double)labelHeight:(id)a0;
+ (double)labelHeight:(id)a0 maxWidth:(double)a1 font:(id)a2;
+ (double)labelHeight:(id)a0 maxWidth:(double)a1 maxHeight:(double)a2 font:(id)a3;
+ (double)labelHeight:(id)a0 maxWidth:(double)a1 maxHeight:(double)a2 font:(id)a3 lineBreakMode:(long long)a4;
+ (double)labelHeight:(id)a0 maxWidth:(double)a1 maxHeight:(double)a2 font:(id)a3 lineSpacing:(double)a4;
+ (double)labelWordBreakWidth:(id)a0 maxWidth:(double)a1 font:(id)a2;
+ (double)labelWordBreakHeight:(id)a0 maxWidth:(double)a1 font:(id)a2;
+ (double)labelWordBreakHeight:(id)a0 maxWidth:(double)a1 font:(id)a2 lineSpacing:(double)a3;
+ (struct CGSize { double x0; double x1; })labelSizeOfLabel:(id)a0;
+ (struct CGSize { double x0; double x1; })labelSizeOfLabel:(id)a0 maxWidth:(double)a1;
+ (struct CGSize { double x0; double x1; })labelSize:(id)a0 maxWidth:(double)a1 maxHeight:(double)a2 font:(id)a3 lineBreakMode:(long long)a4;
+ (double)enterpriseChatNameLabelMinWidth:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })autoFitRectForLable:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })autoFitRectForLableAllowMultipleLines:(id)a0;
+ (BOOL)pointInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 point:(struct CGPoint { double x0; double x1; })a1 error:(double)a2;
+ (id)fitString:(id)a0 Width:(double)a1 font:(id)a2 tailString:(id)a3;
+ (id)compressString:(id)a0 contraintWidth:(double)a1 view:(id)a2 font:(id)a3;

@end
