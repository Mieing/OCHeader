@interface AWEMusicHSVModel : AWEBaseApiModel

@property (nonatomic) float h;
@property (nonatomic) float s;
@property (nonatomic) float v;

+ (id)JSONKeyPathsByPropertyKey;

- (double)awe_normalizeH;
- (double)awe_normalizeS;
- (BOOL)awe_isNeedNormalize;
- (double)awe_normalizeV;

@end
