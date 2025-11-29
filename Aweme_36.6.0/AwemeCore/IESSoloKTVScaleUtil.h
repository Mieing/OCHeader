@interface IESSoloKTVScaleUtil : NSObject

+ (id)scaledFontFrom:(id)a0 withScaleRatio:(long long)a1;
+ (double)scaledSizeFrom:(double)a0 withScaleRatio:(long long)a1;
+ (long long)scaleRatioFromFloat:(double)a0 isSoloKTV:(BOOL)a1;
+ (void)setButtonContent:(id)a0 verticalAlignment:(long long)a1 horizontalAlignment:(long long)a2;
+ (double)scaledCustomStandardSize:(double)a0 largeSize:(double)a1 extraLargeSize:(double)a2 withScaleRatio:(long long)a3;
+ (long long)scaleRatioFromFloat:(double)a0;

@end
