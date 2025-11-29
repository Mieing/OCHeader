@class NSArray;
@protocol BDUGLuckyCoolingPath;

@interface BDUGLuckyCooling : BDUGLuckyBDModel

@property (copy, nonatomic) NSArray<BDUGLuckyCoolingPath> *coolingPathList;
@property (nonatomic) BOOL enableCooling;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
