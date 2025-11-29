@class NSArray;
@protocol BDUGLuckyIosShakeConfig;

@interface BDUGLuckyIosConfig : BDUGLuckyBDModel

@property (nonatomic) double oneDetectingTime;
@property (nonatomic) double accelerometerUpdateInterval;
@property (nonatomic) BOOL forceOpenWifi;
@property (copy, nonatomic) NSArray<BDUGLuckyIosShakeConfig> *shakeConfig;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
