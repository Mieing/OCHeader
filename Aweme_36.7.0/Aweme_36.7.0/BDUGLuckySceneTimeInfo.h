@class NSArray;

@interface BDUGLuckySceneTimeInfo : BDUGLuckyBDModel

@property (nonatomic) long long appId;
@property (copy, nonatomic) NSArray *scenes;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
