@class NSArray;
@protocol BDUGLuckyResVersion;

@interface BDUGLuckyGlobalGecko : BDUGLuckyBDModel

@property (copy, nonatomic) NSArray<BDUGLuckyResVersion> *resVersion;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
