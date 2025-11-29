@interface LSLargeNumberForrmatter : NSObject

+ (id)formatedNumber:(long long)a0;
+ (long long)comparisonAfterRoundingWithNumberA:(long long)a0 numberB:(long long)a1 scale:(unsigned long long)a2;
+ (void)forceFormatterUseArabicNumerals:(id)a0;
+ (id)numberWithFloat:(double)a0;

@end
