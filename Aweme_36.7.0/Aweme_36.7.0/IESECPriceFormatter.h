@interface IESECPriceFormatter : NSObject

+ (id)stringWithPrice:(id)a0;
+ (id)_convertFenToYuan:(id)a0;
+ (id)priceAttributedString:(id)a0 integerFont:(id)a1 decimalFont:(id)a2;
+ (id)stringWithPrice:(id)a0 decimalPlaces:(long long)a1 roundingMode:(unsigned long long)a2;
+ (id)priceAttributedString:(id)a0 integerFont:(id)a1 decimalFont:(id)a2 decimalPlaces:(long long)a3 roundingMode:(unsigned long long)a4;
+ (BOOL)hasGapBetweenMinPrice:(id)a0 andMaxPrice:(id)a1;

@end
