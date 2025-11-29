@class NSArray;

@interface ArgusPrefetchUrlListVerifyConfig : ArgusStrategyBaseConfig

@property (readonly, nonatomic) NSArray *whiteDomainList;
@property (readonly, nonatomic) NSArray *whiteRegList;
@property (readonly, nonatomic) NSArray *blackRegList;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
