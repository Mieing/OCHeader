@class NSString, NSArray;

@interface AWESearchEasterEggModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *resourceId;
@property (copy, nonatomic) NSArray *resourceUrl;
@property (nonatomic) long long particleNum;
@property (copy, nonatomic) NSArray *particleSize;
@property (nonatomic) long long particleProDelay;
@property (copy, nonatomic) NSArray *particleFallX;
@property (copy, nonatomic) NSArray *particleFallY;
@property (copy, nonatomic) NSArray *particleFallCurve;
@property (copy, nonatomic) NSArray *particleFallSpeed;
@property (copy, nonatomic) NSArray *particleAlpha;
@property (nonatomic) float particleAlphaStart;
@property (readonly, nonatomic) int particleSizeMin;
@property (readonly, nonatomic) int particleSizeMax;
@property (readonly, nonatomic) int particleFallXLeft;
@property (readonly, nonatomic) int particleFallXRight;
@property (readonly, nonatomic) float particleFallYTop;
@property (readonly, nonatomic) float particleFallYBottom;
@property (readonly, nonatomic) float particleFallCurveVa;
@property (readonly, nonatomic) float particleFallCurveVb;
@property (readonly, nonatomic) float particleFallCurveVc;
@property (readonly, nonatomic) float particleFallCurveVd;
@property (readonly, nonatomic) int particlFallSpeedMin;
@property (readonly, nonatomic) int particleFallSpeedMax;
@property (readonly, nonatomic) float particleOpacityBegin;
@property (readonly, nonatomic) float particleOpacityEnd;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
