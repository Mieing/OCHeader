@class NSString, NSArray;

@interface BDXBridgeLocalServiceOptimizationStrategyPreCacheList : BDXBridgeModel

@property (copy, nonatomic) NSString *page;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *strategy;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
