@interface AWEInternationalFormatter : NSObject

+ (id)formatedNumber:(long long)a0;
+ (id)formatedNumberToTenThousandCh:(long long)a0;
+ (id)formatedLargeNumber:(long long)a0;
+ (id)formatedNumber:(long long)a0 policy:(unsigned long long)a1;
+ (id)formatedLargeNumber:(long long)a0 shortVersion:(BOOL)a1;
+ (long long)comparisonAfterRoundingWithNumberA:(long long)a0 numberB:(long long)a1 scale:(unsigned long long)a2;
+ (id)formatedNumber:(long long)a0 policy:(unsigned long long)a1 shortVersion:(BOOL)a2;
+ (long long)roundUpDownNumber:(double)a0;
+ (id)dateFormatterGregorian;
+ (id)dateFormatterJapanese;
+ (void)forceFormatterUseArabicNumerals:(id)a0;
+ (id)formatedDate:(id)a0;
+ (id)formatedJapaneseDate:(id)a0;
+ (id)formatedFloat:(double)a0 digit:(long long)a1;
+ (id)numberWithFloat:(double)a0;

@end
