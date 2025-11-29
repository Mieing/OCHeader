@interface LynxTextUtils : NSObject

+ (double)alignInlineNodeInVertical:(long long)a0 withLineHeight:(double)a1 withAttachmentHeight:(double)a2 withAttachmentYPosition:(double)a3;
+ (id)getEllpsisStringAccordingToWritingDirection:(long long)a0;
+ (double)convertLynxFontWeight:(unsigned long long)a0;
+ (id)ConvertRawText:(id)a0;
+ (id)measureText:(id)a0 fontSize:(double)a1 fontFamily:(id)a2 maxWidth:(double)a3 maxLine:(long long)a4;
+ (double)calcBaselineShiftOffset:(long long)a0 verticalAlignValue:(double)a1 withAscender:(double)a2 withDescender:(double)a3 withLineHeight:(double)a4 withMaxAscender:(double)a5 withMaxDescender:(double)a6 withMaxXHeight:(double)a7;
+ (long long)applyNaturalAlignmentAccordingToTextLanguage:(id)a0 refactor:(BOOL)a1;
+ (long long)convertLynxTextDecorationStyle:(long long)a0;

@end
