@interface BDUGLuckyIosShakeConfig : BDUGLuckyBDModel

@property (nonatomic) long long shakeType;
@property (nonatomic) double threshold;
@property (nonatomic) double sampleTime;
@property (nonatomic) long long matchCount;

+ (id)modelCustomPropertyMapper;

@end
