@interface HTSEffectIntensity : NSObject

@property (nonatomic) float intensity;
@property (nonatomic) float smoothIntensity;
@property (nonatomic) float brightIntensity;
@property (nonatomic) float sharpIntensity;
@property (nonatomic) float eyeIntensity;
@property (nonatomic) float cheekIntensity;
@property (nonatomic) float skinDarkIntensity;
@property (nonatomic) float nightGamma;
@property (nonatomic) float nightContrastK;
@property (nonatomic) float nightContrastB;
@property (nonatomic) float lipIntensity;
@property (nonatomic) float blusherIntensity;

+ (id)intensityWithParam:(struct IESIndensityParam_t { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; float x29; float x30; float x31; float x32; })a0;
+ (struct IESIndensityParam_t { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; float x29; float x30; float x31; float x32; })paramFromIntensity:(id)a0;

- (BOOL)isEqualValueWithAnother:(id)a0 forType:(long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
