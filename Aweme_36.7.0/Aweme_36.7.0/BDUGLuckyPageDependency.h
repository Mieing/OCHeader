@class NSArray;

@interface BDUGLuckyPageDependency : BDUGLuckyBDModel

@property (copy, nonatomic) NSArray *dependencies;
@property (nonatomic) double startTs;
@property (nonatomic) double endTs;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
