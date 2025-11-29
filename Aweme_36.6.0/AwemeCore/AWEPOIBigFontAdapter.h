@interface AWEPOIBigFontAdapter : NSObject

+ (BOOL)enablePoiBigFontAdapt;
+ (BOOL)enableCollectListBigFontAdapt;
+ (id)poi_adaptiveFontOfSizeForBigFontAdapt:(double)a0 weight:(long long)a1 isLargeMode:(BOOL)a2;
+ (double)poi_adaptiveFontSize:(double)a0 isLargeMode:(BOOL)a1;
+ (double)poi_currentScaleForBigFontAdapt;
+ (double)poi_currentScaleForBigFontAdapt:(BOOL)a0;
+ (id)poi_fontOfSizeForBigFontAdapt:(double)a0 weight:(long long)a1 isLargeMode:(BOOL)a2;
+ (id)poi_fontForBigFontAdapt:(double)a0 weight:(long long)a1 isLargeMode:(BOOL)a2;
+ (id)poi_fontOfSizeForBigFontAdapt:(double)a0 weight:(long long)a1;
+ (id)poi_adaptiveFontOfSizeForBigFontAdapt:(double)a0 weight:(long long)a1;

@end
