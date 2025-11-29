@class NSArray;
@protocol BDUGLuckyAndroidShakeConfig;

@interface BDUGLuckyAndroidConfig : BDUGLuckyBDModel

@property (copy, nonatomic) NSArray<BDUGLuckyAndroidShakeConfig> *shakeConfig;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
