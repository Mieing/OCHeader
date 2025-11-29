@interface BDUGLuckyAndroidShakeConfig : BDUGLuckyBDModel

@property (nonatomic) BOOL shakeType;
@property (nonatomic) long long accThreshold;
@property (nonatomic) double minWindowSizeMs;
@property (nonatomic) double maxWindowSizeMs;
@property (nonatomic) double sensorSampleIntervalMs;

+ (id)modelCustomPropertyMapper;

@end
