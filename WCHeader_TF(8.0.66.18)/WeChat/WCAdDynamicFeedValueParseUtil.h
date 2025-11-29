@interface WCAdDynamicFeedValueParseUtil : NSObject

+ (void)parseLengthValueForOriString:(id)a0 basicWidth:(int)a1 basicRootFontSize:(int)a2;
+ (BOOL)shouldLazyCalculateAdjustedValueForOriString:(id)a0;
+ (double)calcLengthValueForRemValue:(id)a0 basicWidth:(int)a1 basicRootFontSize:(int)a2;
+ (double)calcLengthValueForPxValue:(id)a0 basicWidth:(int)a1 basicRootFontSize:(int)a2;
+ (void)parseColorValueForOriString:(id)a0;

@end
