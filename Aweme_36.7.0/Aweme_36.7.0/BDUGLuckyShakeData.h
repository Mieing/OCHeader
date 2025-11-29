@class NSArray, BDUGLuckyIosConfig, BDUGLuckyAndroidConfig;

@interface BDUGLuckyShakeData : BDUGLuckyBDModel

@property (nonatomic) BOOL disableGlobalShake;
@property (nonatomic) double globalDetectorIntervalMs;
@property (copy, nonatomic) NSArray *globalShakeFilterPath;
@property (retain, nonatomic) BDUGLuckyIosConfig *iosConfig;
@property (retain, nonatomic) BDUGLuckyAndroidConfig *androidConfig;
@property (nonatomic) BOOL shakeEnable;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
