@interface IESGCPNumberFormatUnit : NSObject

+ (id)formatStringInTenThousandWithNumber:(long long)a0;
+ (id)formatStringInTenHundredThousandWithNumber:(long long)a0;
+ (void)forceFormatterUseArabicNumerals:(id)a0;
+ (id)formatNumberStringWithNumber:(long long)a0;
+ (id)formatPriceNumber:(double)a0;
+ (id)numberWithFloat:(double)a0;

@end
