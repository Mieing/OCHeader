@class NSString, NSDictionary, CIVector, BokehBlurParam;

@interface VERawParam : NSObject <NSCopying>

@property (nonatomic) long long rawType;
@property (retain, nonatomic) NSString *rawFilterResourcePath;
@property (retain, nonatomic) NSDictionary *rawFilterCameraParam;
@property (retain, nonatomic) NSDictionary *rawFilterRawParam;
@property (nonatomic) float exposureBias;
@property (nonatomic) struct { float temperature; float tint; } tempreatureAndTint;
@property (retain, nonatomic) BokehBlurParam *BokehBlurParam;
@property (nonatomic) float VibranceAdjust;
@property (nonatomic) float lut;
@property (nonatomic) float dither;
@property (nonatomic) float highlightShadowAdjust_HighlightAmount;
@property (nonatomic) float highlightShadowAdjust_ShadowAmount;
@property (nonatomic) float vignette_inputIntensity;
@property (nonatomic) float vignette_inputRadius;
@property (retain, nonatomic) CIVector *temperatureAndTint_inputNeutral;
@property (retain, nonatomic) CIVector *temperatureAndTint_inputTargetNeutral;

- (float)getExposureBias;
- (BOOL)needChangeExposureBias;
- (BOOL)isRawCapture;
- (long long)qualityForType;
- (BOOL)needChangeWhiteBalance;
- (struct { float x0; float x1; float x2; })whiteBalanceGains:(id)a0;
- (BOOL)isEqualToParam:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFilterType:(long long)a0;

@end
