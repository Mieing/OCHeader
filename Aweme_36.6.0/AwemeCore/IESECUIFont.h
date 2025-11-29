@interface IESECUIFont : NSObject

+ (double)currentFontScale;
+ (BOOL)bigFontModeOn;
+ (id)douyinNumberABCFontOfSize:(double)a0 originalWeight:(double)a1;
+ (id)forceFontWithName:(id)a0 size:(double)a1;
+ (id)fontOfSize:(double)a0 weight:(double)a1;
+ (id)douyinNumberABCFontOfSize:(double)a0 weight:(long long)a1;
+ (id)douyinNumberABCFontOfSize:(double)a0;
+ (double)enlargeSize:(double)a0;
+ (id)forceByteNumberFontOfSize:(double)a0 weight:(id)a1;
+ (id)customFontWithName:(id)a0;
+ (double)fontWeightFromInt:(unsigned long long)a0;
+ (id)forceDouyinNumberABCFontOfSize:(double)a0 weight:(long long)a1;
+ (id)forceMonospacedDigitSystemFontOfSize:(double)a0 weight:(double)a1;
+ (id)byteNumberFontOfSize:(double)a0 weight:(id)a1;
+ (id)fontOfSize:(double)a0 weightOfInt:(unsigned long long)a1;
+ (id)forceDouyinNumberABCFontOfSize:(double)a0;
+ (id)forceFontOfSize:(double)a0 weight:(double)a1;
+ (id)fontWithName:(id)a0 fontSize:(double)a1 fontWeight:(double)a2;
+ (id)monospacedDigitFontOfSize:(double)a0 weightOfInt:(unsigned long long)a1;
+ (id)forceFontOfSize:(double)a0;
+ (id)forceCustomFontWithName:(id)a0;
+ (id)forceMonospaceSystemFontOfSize:(double)a0 weightOfInt:(unsigned long long)a1;
+ (id)forceDouyinNumberABCFontOfSize:(double)a0 originalWeight:(double)a1;
+ (id)fontWithIESECTextStyle:(id)a0;
+ (id)fontWithIESECTextStyle:(id)a0 forceDefaultFont:(BOOL)a1;
+ (id)fontWithName:(id)a0 size:(double)a1;
+ (id)monospacedDigitSystemFontOfSize:(double)a0 weight:(double)a1;
+ (id)fontOfSize:(double)a0;
+ (id)boldFontOfSize:(double)a0;

@end
