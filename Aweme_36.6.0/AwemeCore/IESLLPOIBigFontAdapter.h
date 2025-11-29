@interface IESLLPOIBigFontAdapter : NSObject

+ (BOOL)enablePoiBigFontAdapt;
+ (double)poi_currentScaleForBigFontAdapt;
+ (id)poi_fontOfSizeForBigFontAdapt:(double)a0 weight:(long long)a1;
+ (id)poi_adaptiveFontOfSizeForBigFontAdapt:(double)a0 weight:(long long)a1;
+ (id)poi_fontForBigFontAdapt:(double)a0 weight:(long long)a1;

@end
