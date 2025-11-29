@interface LynxTextUtils : NSObject

+ (id)getEllpsisStringAccordingToWritingDirection:(long long)a0;
+ (double)convertLynxFontWeight:(unsigned long long)a0;
+ (id)ConvertRawText:(id)a0;
+ (id)measureText:(id)a0 fontSize:(double)a1 fontFamily:(id)a2 maxWidth:(double)a3 maxLine:(long long)a4;
+ (long long)applyNaturalAlignmentAccordingToTextLanguage:(id)a0 refactor:(BOOL)a1;

@end
